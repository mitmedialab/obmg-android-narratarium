﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2404;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t690;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m13517_gshared (ShimEnumerator_t2404 * __this, Dictionary_2_t690 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m13517(__this, ___host, method) (( void (*) (ShimEnumerator_t2404 *, Dictionary_2_t690 *, const MethodInfo*))ShimEnumerator__ctor_m13517_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m13518_gshared (ShimEnumerator_t2404 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m13518(__this, method) (( bool (*) (ShimEnumerator_t2404 *, const MethodInfo*))ShimEnumerator_MoveNext_m13518_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t754  ShimEnumerator_get_Entry_m13519_gshared (ShimEnumerator_t2404 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m13519(__this, method) (( DictionaryEntry_t754  (*) (ShimEnumerator_t2404 *, const MethodInfo*))ShimEnumerator_get_Entry_m13519_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m13520_gshared (ShimEnumerator_t2404 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m13520(__this, method) (( Object_t * (*) (ShimEnumerator_t2404 *, const MethodInfo*))ShimEnumerator_get_Key_m13520_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m13521_gshared (ShimEnumerator_t2404 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m13521(__this, method) (( Object_t * (*) (ShimEnumerator_t2404 *, const MethodInfo*))ShimEnumerator_get_Value_m13521_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m13522_gshared (ShimEnumerator_t2404 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m13522(__this, method) (( Object_t * (*) (ShimEnumerator_t2404 *, const MethodInfo*))ShimEnumerator_get_Current_m13522_gshared)(__this, method)
