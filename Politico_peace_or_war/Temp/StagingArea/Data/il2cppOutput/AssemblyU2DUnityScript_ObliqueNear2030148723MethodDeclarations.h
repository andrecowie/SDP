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

// ObliqueNear
struct ObliqueNear_t2030148723;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x42933234003.h"
#include "UnityEngine_UnityEngine_Vector42243707581.h"

// System.Void ObliqueNear::.ctor()
extern "C"  void ObliqueNear__ctor_m1221561659 (ObliqueNear_t2030148723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 ObliqueNear::CalculateObliqueMatrix(UnityEngine.Matrix4x4,UnityEngine.Vector4)
extern "C"  Matrix4x4_t2933234003  ObliqueNear_CalculateObliqueMatrix_m2839967136 (ObliqueNear_t2030148723 * __this, Matrix4x4_t2933234003  ___projection0, Vector4_t2243707581  ___clipPlane1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObliqueNear::OnPreCull()
extern "C"  void ObliqueNear_OnPreCull_m3012077867 (ObliqueNear_t2030148723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObliqueNear::Main()
extern "C"  void ObliqueNear_Main_m498635874 (ObliqueNear_t2030148723 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
