﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_RaycastHit87180320.h"
#include "UnityEngine_UnityEngine_QueryTriggerInteraction478029726.h"
#include "UnityEngine_UnityEngine_Ray2469606224.h"

// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
extern "C"  Vector3_t2243707580  Physics_get_gravity_m195764919 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Physics::INTERNAL_get_gravity(UnityEngine.Vector3&)
extern "C"  void Physics_INTERNAL_get_gravity_m3802008392 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m2036777053 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, int32_t ___layerMask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
extern "C"  bool Physics_Raycast_m2308457076 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, RaycastHit_t87180320 * ___hitInfo1, float ___maxDistance2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
extern "C"  bool Physics_Raycast_m2736931691 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, RaycastHit_t87180320 * ___hitInfo1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Raycast_m233619224 (Il2CppObject * __this /* static, unused */, Ray_t2469606224  ___ray0, RaycastHit_t87180320 * ___hitInfo1, float ___maxDistance2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32)
extern "C"  bool Physics_Linecast_m1120910627 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___end1, RaycastHit_t87180320 * ___hitInfo2, int32_t ___layerMask3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Linecast_m1896185200 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___start0, Vector3_t2243707580  ___end1, RaycastHit_t87180320 * ___hitInfo2, int32_t ___layerMask3, int32_t ___queryTriggerInteraction4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::Internal_Raycast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_Internal_Raycast_m1160243045 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580  ___origin0, Vector3_t2243707580  ___direction1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Physics::INTERNAL_CALL_Internal_Raycast(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.RaycastHit&,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
extern "C"  bool Physics_INTERNAL_CALL_Internal_Raycast_m93849932 (Il2CppObject * __this /* static, unused */, Vector3_t2243707580 * ___origin0, Vector3_t2243707580 * ___direction1, RaycastHit_t87180320 * ___hitInfo2, float ___maxDistance3, int32_t ___layermask4, int32_t ___queryTriggerInteraction5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
