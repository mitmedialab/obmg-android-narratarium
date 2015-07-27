﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Networking.Utility
struct Utility_t315;
// UnityEngine.Networking.Types.NetworkAccessToken
struct NetworkAccessToken_t312;
// UnityEngine.Networking.Types.SourceID
#include "UnityEngine_UnityEngine_Networking_Types_SourceID.h"
// UnityEngine.Networking.Types.AppID
#include "UnityEngine_UnityEngine_Networking_Types_AppID.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void UnityEngine.Networking.Utility::.cctor()
extern "C" void Utility__cctor_m1523 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.SourceID UnityEngine.Networking.Utility::GetSourceID()
extern "C" uint64_t Utility_GetSourceID_m1524 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Networking.Utility::SetAppID(UnityEngine.Networking.Types.AppID)
extern "C" void Utility_SetAppID_m1525 (Object_t * __this /* static, unused */, uint64_t ___newAppID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.AppID UnityEngine.Networking.Utility::GetAppID()
extern "C" uint64_t Utility_GetAppID_m1526 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Networking.Types.NetworkAccessToken UnityEngine.Networking.Utility::GetAccessTokenForNetwork(UnityEngine.Networking.Types.NetworkID)
extern "C" NetworkAccessToken_t312 * Utility_GetAccessTokenForNetwork_m1527 (Object_t * __this /* static, unused */, uint64_t ___netId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
