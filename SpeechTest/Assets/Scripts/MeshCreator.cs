using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MeshCreator : MonoBehaviour {

	// Use this for initialization
	void Start () {
		//Creates the mesh
		Mesh mesh = new Mesh ();
		//Initializes the filter that displays the mesh
		MeshFilter mf = GetComponent<MeshFilter> ();
		mf.mesh = mesh;

		//Create the vertices for the mesh
//		List<Vector3> vertices = getVerticesCircular(0.01f);
		List<Vector3> vertices = getVerticesBezier(1000);


		Debug.Log ("Size of vertices" + vertices.Count);
		Vector3[] verticesArray = vertices.ToArray ();

		//Generates triangles based on those vertices.  Triangles "stitch" the mesh together
		List<int> triangleList = getTrianglesBottomToTop (vertices.Count);
		int[] triangles = triangleList.ToArray ();


		//Generates normals for the mesh. normals say for when should the texture in the mesh be visible
		Vector3[] normals = new Vector3[vertices.Count];
		for (int i =0; i<vertices.Count; i++) {
			normals[i] = Vector3.forward * -1;
		}

		//Uv is the texture coordinates.   They say how the texture will be displayed/expanded
		Vector2[] uvs = new Vector2[vertices.Count];
		int multiplier = 0;
		float x = 0f;
		for(int i = 0 ; i<vertices.Count;i++)
		{
			x = (multiplier * 1.0f )/ (vertices.Count/2.0f);
			Debug.Log ((multiplier * 1.0f ));
			Debug.Log((vertices.Count/2.0f));
			Debug.Log(x);
			//Even number
			if(i%2==0)
			{
//				Debug.Log ("Even");
				uvs[i] = new Vector2(x,1f);
			}
			else{
//				Debug.Log ("Odd");
				uvs[i]= new Vector2(x,0f);
				multiplier+=1;
			}
		}
//		Debug.Log("Printing vector");
//		foreach(Vector2 uv in uvs){
//			Debug.Log (uv);
//		}
		//Assign all the characteristics to the mesh and it will be rendered.
		mesh.vertices = verticesArray;
		mesh.triangles = triangles;
		mesh.normals = normals;
		mesh.uv = uvs;

	}
	float getX(int radius, float y){
		return Mathf.Sqrt (Mathf.Pow (radius, 2) - Mathf.Pow (y, 2));
	}
	float getY(int radius, float x){
		return Mathf.Sqrt (Mathf.Pow (radius, 2) - Mathf.Pow (x, 2));
	}
	float getYSin(float angle){
		return Mathf.Sin(angle);
	}
	Vector3 CalculateBezierPoint(float t,Vector3 p0, Vector3 p1, Vector3 p2, Vector3 p3)
	{	
		Debug.Log ("t:"+t+" p0:"+p0.ToString()+" p1:"+p1.ToString()+" p2:"+p2.ToString()+" p3:"+p3.ToString());
		float u = 1f-t;
		float tt = t*t;
		float uu = u*u;
		float uuu = uu * u;
		float ttt = tt * t;
		
		Vector3 p = uuu * p0; //first term
		p += 3 * uu * t * p1; //second term
		p += 3 * u * tt * p2; //third term
		p += ttt * p3; 		  //fourth term
		Debug.Log ("Returning p:"+p);
		return p;
	}
	List<int> getTrianglesBottomToTop(int vertexAmount){
		int v1 = 0, v2 = 1, v3 = 2;
		List<int> triangleList = new List<int>();
		
		for (int i =0; i<vertexAmount; i++) {
			triangleList.Add(v1);
			triangleList.Add(v2);
			triangleList.Add(v3);
			if(v3==vertexAmount-1){
				Debug.Log("Breaking becabuse of vertex");
				break;              
			}
			if(i%2!=0)
			{
				v2+=2;
			}
			else
			{
				v1+=2;
			}
			v3+=1;
		}
		return triangleList;
	}
	public List<Vector3> getVerticesBezier(int points){
		//Vertices
		List<Vector3> verticesInternal = new List<Vector3>();
		List<Vector3> verticesExternal = new List<Vector3> ();
		//Internal circle

		Vector3 p0= new Vector3(-1,0,0),p1=new Vector3(-1,1,0),p2=new Vector3(1,1,0),p3=new Vector3(1,0,0),
				p00 = new Vector3(1,0,0), p11 = new Vector3(1,-1,0),p22 = new Vector3(-1,-1,0), p33 = new Vector3(-1,0,0);
		for (int i =-1; i<points; i++) {
			Debug.Log ("Current i"+i);
			verticesInternal.Add(CalculateBezierPoint((i*1f)/points,p0,p1,p2,p3));
		}
		//Add lower level circle
		for (int i =-1; i<points; i++) {
			verticesInternal.Add(CalculateBezierPoint((i*1f)/points,p00,p11,p22,p33));
		}
		
		//External circle
		p0=new Vector3(-9,0,0);p1=new Vector3(-12,11,0);p2=new Vector3(11,14,0);p3 = new Vector3(7,0,0);
		p00 = new Vector3(7,0,0); p11 = new Vector3(7,-6,0);p22 = new Vector3(-8,-11,0); p33 = new Vector3(-9,0,0);

		for (int i =-1; i<points; i++) {
			verticesExternal.Add(CalculateBezierPoint((i+1f)/points,p0,p1,p2,p3));
		}
		//Add lower level circle
		for (int i =-1; i<points; i++) {
			verticesExternal.Add(CalculateBezierPoint((i+1f)/points,p00,p11,p22,p33));
		}
		//Mix the vertices for easier access
		
		List<Vector3> vertices = new List<Vector3> ();
		for (int i=0; i<verticesExternal.Count; i++) {
			vertices.Add (verticesExternal[i]);//Even
			vertices.Add(verticesInternal[i]);//Odd
		}
		return vertices;
	}
	public List<Vector3>  getVerticesCircular(float subdivisionLength){
		//Vertices
		List<Vector3> verticesInternal = new List<Vector3>();
		List<Vector3> verticesExternal = new List<Vector3> ();
		float subdivisions = subdivisionLength;
		//Internal circle
		int radius = 1;
		
		int points = Mathf.FloorToInt( (2 * radius) / subdivisions);
		
		for (int i =0; i<=points; i++) {
			verticesInternal.Add(new Vector3(-radius+i*subdivisions,getY(radius,-radius+i*subdivisions),0));
		}
		//Add lower level circle
		for (int i =verticesInternal.Count-2; i>-1; i--) {
			verticesInternal.Add(new Vector3(verticesInternal[i].x,verticesInternal[i].y*-1f,verticesInternal[i].z));
		}
		
		//External circle
		int radius2 = 5;
		int scale = Mathf.CeilToInt (radius2 / radius);
		subdivisions = subdivisions * scale;
		int points2 = Mathf.FloorToInt( (2 * radius2) / subdivisions);

		for (int i =0; i<=points; i++) {
			verticesExternal.Add(new Vector3(-radius2+i*subdivisions,getY(radius2,-radius2+i*subdivisions),0));
		}
		//Add lower level circle
		for (int i =verticesExternal.Count-2; i>-1; i--) {
			verticesExternal.Add((new Vector3(verticesExternal[i].x,verticesExternal[i].y*-1f,verticesExternal[i].z)));
		}
		//Mix the vertices for easier access
		
		List<Vector3> vertices = new List<Vector3> ();
		for (int i=0; i<verticesExternal.Count; i++) {
			vertices.Add (verticesExternal[i]);//Even
			vertices.Add(verticesInternal[i]);//Odd
		}
		return vertices;
	}

}
