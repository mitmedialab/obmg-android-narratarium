﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t638;
// System.Byte[]
struct ByteU5BU5D_t54;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
#include "System_System_Security_Cryptography_X509Certificates_X500Dis_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::.ctor(System.Byte[])
extern "C" void X500DistinguishedName__ctor_m2266 (X500DistinguishedName_t638 * __this, ByteU5BU5D_t54* ___encodedDistinguishedName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C" String_t* X500DistinguishedName_Decode_m2267 (X500DistinguishedName_t638 * __this, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags)
extern "C" String_t* X500DistinguishedName_GetSeparator_m2268 (Object_t * __this /* static, unused */, int32_t ___flag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X500DistinguishedName::DecodeRawData()
extern "C" void X500DistinguishedName_DecodeRawData_m2269 (X500DistinguishedName_t638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X500DistinguishedName::Canonize(System.String)
extern "C" String_t* X500DistinguishedName_Canonize_m2270 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X500DistinguishedName::AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName,System.Security.Cryptography.X509Certificates.X500DistinguishedName)
extern "C" bool X500DistinguishedName_AreEqual_m2271 (Object_t * __this /* static, unused */, X500DistinguishedName_t638 * ___name1, X500DistinguishedName_t638 * ___name2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
