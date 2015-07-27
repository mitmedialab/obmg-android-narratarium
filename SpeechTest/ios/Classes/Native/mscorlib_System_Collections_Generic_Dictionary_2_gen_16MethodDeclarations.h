﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2211;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t422;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2515;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t2214;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t2218;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2096;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2544;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t433;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2545;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t37;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2546;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t753;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11156_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11156(__this, method) (( void (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2__ctor_m11156_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11158_gshared (Dictionary_2_t2211 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11158(__this, ___comparer, method) (( void (*) (Dictionary_2_t2211 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11158_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11160_gshared (Dictionary_2_t2211 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11160(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2211 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11160_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11161_gshared (Dictionary_2_t2211 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11161(__this, ___capacity, method) (( void (*) (Dictionary_2_t2211 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11161_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11163_gshared (Dictionary_2_t2211 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11163(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2211 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11163_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11165_gshared (Dictionary_2_t2211 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11165(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2211 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2__ctor_m11165_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11167_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11167(__this, method) (( Object_t* (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11167_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11169_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11169(__this, method) (( Object_t* (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11169_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11171_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11171(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11171_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11173_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11173(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2211 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11173_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11175_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11175(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2211 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11175_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11177_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11177(__this, ___key, method) (( bool (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11177_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11179_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11179(__this, ___key, method) (( void (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11179_gshared)(__this, ___key, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11181_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11181(__this, method) (( Object_t * (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11181_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11183_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11183(__this, method) (( bool (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11183_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11185_gshared (Dictionary_2_t2211 * __this, KeyValuePair_2_t2212  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11185(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2211 *, KeyValuePair_2_t2212 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11185_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11187_gshared (Dictionary_2_t2211 * __this, KeyValuePair_2_t2212  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11187(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2211 *, KeyValuePair_2_t2212 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11187_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11189_gshared (Dictionary_2_t2211 * __this, KeyValuePair_2U5BU5D_t2545* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11189(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2211 *, KeyValuePair_2U5BU5D_t2545*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11189_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11191_gshared (Dictionary_2_t2211 * __this, KeyValuePair_2_t2212  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11191(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2211 *, KeyValuePair_2_t2212 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11191_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11193_gshared (Dictionary_2_t2211 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11193(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2211 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11193_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11195_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11195(__this, method) (( Object_t * (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11195_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11197_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11197(__this, method) (( Object_t* (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11197_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11199_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11199(__this, method) (( Object_t * (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11199_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11201_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11201(__this, method) (( int32_t (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_get_Count_m11201_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11203_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11203(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11203_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11205_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11205(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2211 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11205_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11207_gshared (Dictionary_2_t2211 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11207(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2211 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11207_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11209_gshared (Dictionary_2_t2211 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11209(__this, ___size, method) (( void (*) (Dictionary_2_t2211 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11209_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11211_gshared (Dictionary_2_t2211 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11211(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2211 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11211_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2212  Dictionary_2_make_pair_m11213_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11213(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2212  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11213_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11215_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11215(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m11215_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11217_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11217(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11217_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11219_gshared (Dictionary_2_t2211 * __this, KeyValuePair_2U5BU5D_t2545* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11219(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2211 *, KeyValuePair_2U5BU5D_t2545*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11219_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11221_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11221(__this, method) (( void (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_Resize_m11221_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11223_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11223(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2211 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11223_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11225_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11225(__this, method) (( void (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_Clear_m11225_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11227_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11227(__this, ___key, method) (( bool (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11227_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11229_gshared (Dictionary_2_t2211 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11229(__this, ___value, method) (( bool (*) (Dictionary_2_t2211 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11229_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11231_gshared (Dictionary_2_t2211 * __this, SerializationInfo_t433 * ___info, StreamingContext_t434  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11231(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2211 *, SerializationInfo_t433 *, StreamingContext_t434 , const MethodInfo*))Dictionary_2_GetObjectData_m11231_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11233_gshared (Dictionary_2_t2211 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11233(__this, ___sender, method) (( void (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11233_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11235_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11235(__this, ___key, method) (( bool (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11235_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11237_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11237(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2211 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11237_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t2214 * Dictionary_2_get_Keys_m11239_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11239(__this, method) (( KeyCollection_t2214 * (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_get_Keys_m11239_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t2218 * Dictionary_2_get_Values_m11241_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11241(__this, method) (( ValueCollection_t2218 * (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_get_Values_m11241_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11243_gshared (Dictionary_2_t2211 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11243(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11243_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11245_gshared (Dictionary_2_t2211 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11245(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2211 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11245_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11247_gshared (Dictionary_2_t2211 * __this, KeyValuePair_2_t2212  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11247(__this, ___pair, method) (( bool (*) (Dictionary_2_t2211 *, KeyValuePair_2_t2212 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11247_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2216  Dictionary_2_GetEnumerator_m11249_gshared (Dictionary_2_t2211 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11249(__this, method) (( Enumerator_t2216  (*) (Dictionary_2_t2211 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11249_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t754  Dictionary_2_U3CCopyToU3Em__0_m11251_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11251(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t754  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11251_gshared)(__this /* static, unused */, ___key, ___value, method)
