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

// UnityEngine.ILogger
struct ILogger_t1425954571;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "mscorlib_System_Object2689449295.h"

// System.Void UnityEngine.Debug::.cctor()
extern "C"  void Debug__cctor_m2981642087 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ILogger UnityEngine.Debug::get_logger()
extern "C"  Il2CppObject * Debug_get_logger_m4173808038 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::DrawLine(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void Debug_DrawLine_m2961609580 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___end1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::INTERNAL_CALL_DrawLine(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Color&,System.Single,System.Boolean)
extern "C"  void Debug_INTERNAL_CALL_DrawLine_m1075270313 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___start0, Vector3_t2243707580 * ___end1, Color_t2020392075 * ___color2, float ___duration3, bool ___depthTest4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::Log(System.Object)
extern "C"  void Debug_Log_m920475918 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogError(System.Object)
extern "C"  void Debug_LogError_m3715728798 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
extern "C"  void Debug_LogWarning_m2503577968 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Debug::LogAssertion(System.Object)
extern "C"  void Debug_LogAssertion_m29799216 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___message0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
