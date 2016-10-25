#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String)
extern "C"  String_t* AssertionMessageUtil_GetMessage_m1494646037 (Il2CppObject * __this /* static, unused */, String_t* ___failureMessage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Assertions.AssertionMessageUtil::GetMessage(System.String,System.String)
extern "C"  String_t* AssertionMessageUtil_GetMessage_m609449111 (Il2CppObject * __this /* static, unused */, String_t* ___failureMessage0, String_t* ___expected1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Assertions.AssertionMessageUtil::BooleanFailureMessage(System.Boolean)
extern "C"  String_t* AssertionMessageUtil_BooleanFailureMessage_m2669891558 (Il2CppObject * __this /* static, unused */, bool ___expected0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
