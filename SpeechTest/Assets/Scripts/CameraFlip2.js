﻿#pragma strict
// EXAMPLE WITH CAMERA UPSIDEDOWN
var flipX = false;
function OnPreCull () {
	//GetComponent.<Camera>().ResetWorldToCameraMatrix ();
	GetComponent.<Camera>().ResetProjectionMatrix ();
	GetComponent.<Camera>().projectionMatrix = GetComponent.<Camera>().projectionMatrix * Matrix4x4.Scale(Vector3 (1, -1, 1));
	if(flipX){
		GetComponent.<Camera>().projectionMatrix = GetComponent.<Camera>().projectionMatrix * Matrix4x4.Scale(Vector3 (-1, -1, 1));

	}
}
 
function OnPreRender () {
	GL.SetRevertBackfacing (true);
}
 
function OnPostRender () {
	GL.SetRevertBackfacing (false);
}
 
@script RequireComponent (Camera)