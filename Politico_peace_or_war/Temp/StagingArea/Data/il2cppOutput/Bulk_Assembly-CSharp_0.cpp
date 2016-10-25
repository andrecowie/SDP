#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// CameraFollow
struct CameraFollow_t1493855402;
// UnityEngine.Camera
struct Camera_t189460977;
// System.Object
struct Il2CppObject;
// NPCMovement
struct NPCMovement_t1765980670;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// PlayerMovement
struct PlayerMovement_t3166138480;
// Tiled2Unity.ImportBehaviour
struct ImportBehaviour_t1918973942;
// Tiled2Unity.SortingLayerExposed
struct SortingLayerExposed_t870693243;
// Tiled2Unity.SpriteDepthInMap
struct SpriteDepthInMap_t2395493699;
// Tiled2Unity.TiledMap
struct TiledMap_t4203693682;
// Tiled2Unity.TileAnimator
struct TileAnimator_t1251487515;
// UnityEngine.MeshRenderer
struct MeshRenderer_t1268241104;
// Tiled2Unity.TiledInitialShaderProperties
struct TiledInitialShaderProperties_t1898058332;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214.h"
#include "AssemblyU2DCSharp_U3CModuleU3E3783534214MethodDeclarations.h"
#include "AssemblyU2DCSharp_CameraFollow1493855402.h"
#include "AssemblyU2DCSharp_CameraFollow1493855402MethodDeclarations.h"
#include "mscorlib_System_Void1841601450.h"
#include "UnityEngine_UnityEngine_MonoBehaviour1158329972MethodDeclarations.h"
#include "mscorlib_System_Single2076509932.h"
#include "UnityEngine_UnityEngine_Component3819376471MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977.h"
#include "UnityEngine_UnityEngine_Component3819376471.h"
#include "UnityEngine_UnityEngine_Screen786852042MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Camera189460977MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object1021602117MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform3275118058MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector32243707580MethodDeclarations.h"
#include "mscorlib_System_Int322071877448.h"
#include "UnityEngine_UnityEngine_Transform3275118058.h"
#include "mscorlib_System_Boolean3825574718.h"
#include "UnityEngine_UnityEngine_Object1021602117.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DCSharp_NPCMovement1765980670.h"
#include "AssemblyU2DCSharp_NPCMovement1765980670MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897.h"
#include "UnityEngine_UnityEngine_Animator69676727.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector22243707579MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animator69676727MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D502193897MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Time31991979MethodDeclarations.h"
#include "mscorlib_System_String2029220233.h"
#include "UnityEngine_UnityEngine_Random1170710517MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Debug1368543263MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754MethodDeclarations.h"
#include "mscorlib_System_String2029220233MethodDeclarations.h"
#include "mscorlib_System_Object2689449295.h"
#include "UnityEngine_UnityEngine_GameObject1756533147.h"
#include "AssemblyU2DCSharp_PlayerMovement3166138480.h"
#include "AssemblyU2DCSharp_PlayerMovement3166138480MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Input1785128008MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_ImportBehaviour1918973942.h"
#include "AssemblyU2DCSharp_Tiled2Unity_ImportBehaviour1918973942MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_SortingLayerExposed870693243.h"
#include "AssemblyU2DCSharp_Tiled2Unity_SortingLayerExposed870693243MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_SpriteDepthInMap2395493699.h"
#include "AssemblyU2DCSharp_Tiled2Unity_SpriteDepthInMap2395493699MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap4203693682.h"
#include "mscorlib_ArrayTypes.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap_MapStaggerI1842809421.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap_MapStaggerA1991880926.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap_MapOrientat2782890834.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap4203693682MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject1756533147MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect3681755626MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect3681755626.h"
#include "UnityEngine_UnityEngine_Mathf2336485820MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TileAnimator1251487515.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TileAnimator1251487515MethodDeclarations.h"
#include "UnityEngine_UnityEngine_MeshRenderer1268241104.h"
#include "UnityEngine_UnityEngine_Assertions_Assert1268281556MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Renderer257310565MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledInitialShaderPr1898058332.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledInitialShaderPr1898058332MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Material193706927.h"
#include "UnityEngine_UnityEngine_Color2020392075.h"
#include "UnityEngine_UnityEngine_Color2020392075MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Gizmos2256232573MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap_MapOrientat2782890834MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap_MapStaggerA1991880926MethodDeclarations.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap_MapStaggerI1842809421MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m2721246802_gshared (Component_t3819376471 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m2721246802(__this, method) ((  Il2CppObject * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Camera>()
#define Component_GetComponent_TisCamera_t189460977_m633060157(__this, method) ((  Camera_t189460977 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, method) ((  Rigidbody2D_t502193897 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
#define Component_GetComponent_TisAnimator_t69676727_m3207772375(__this, method) ((  Animator_t69676727 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
#define Component_GetComponent_TisMeshRenderer_t1268241104_m3460404950(__this, method) ((  MeshRenderer_t1268241104 * (*) (Component_t3819376471 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m2721246802_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C"  Il2CppObject * GameObject_GetComponent_TisIl2CppObject_m3347661153_gshared (GameObject_t1756533147 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisIl2CppObject_m3347661153(__this, method) ((  Il2CppObject * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3347661153_gshared)(__this, method)
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.MeshRenderer>()
#define GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632(__this, method) ((  MeshRenderer_t1268241104 * (*) (GameObject_t1756533147 *, const MethodInfo*))GameObject_GetComponent_TisIl2CppObject_m3347661153_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CameraFollow::.ctor()
extern "C"  void CameraFollow__ctor_m88693439 (CameraFollow_t1493855402 * __this, const MethodInfo* method)
{
	{
		__this->set_cameraSpeed_3((0.1f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CameraFollow::Start()
extern const MethodInfo* Component_GetComponent_TisCamera_t189460977_m633060157_MethodInfo_var;
extern const uint32_t CameraFollow_Start_m3058263115_MetadataUsageId;
extern "C"  void CameraFollow_Start_m3058263115 (CameraFollow_t1493855402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_Start_m3058263115_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t189460977 * L_0 = Component_GetComponent_TisCamera_t189460977_m633060157(__this, /*hidden argument*/Component_GetComponent_TisCamera_t189460977_m633060157_MethodInfo_var);
		__this->set_camera_4(L_0);
		return;
	}
}
// System.Void CameraFollow::Update()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern const uint32_t CameraFollow_Update_m4022969624_MetadataUsageId;
extern "C"  void CameraFollow_Update_m4022969624 (CameraFollow_t1493855402 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (CameraFollow_Update_m4022969624_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Camera_t189460977 * L_0 = __this->get_camera_4();
		int32_t L_1 = Screen_get_height_m1051800773(NULL /*static, unused*/, /*hidden argument*/NULL);
		Camera_set_orthographicSize_m2708824189(L_0, ((float)((float)((float)((float)(((float)((float)L_1)))/(float)(1.0f)))/(float)(4.0f))), /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = __this->get_target_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Implicit_m2856731593(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0072;
		}
	}
	{
		Transform_t3275118058 * L_4 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		Transform_t3275118058 * L_7 = __this->get_target_2();
		Vector3_t2243707580  L_8 = Transform_get_position_m1104419803(L_7, /*hidden argument*/NULL);
		float L_9 = __this->get_cameraSpeed_3();
		Vector3_t2243707580  L_10 = Vector3_Lerp_m2935648359(NULL /*static, unused*/, L_6, L_8, L_9, /*hidden argument*/NULL);
		Vector3_t2243707580  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Vector3__ctor_m2638739322(&L_11, (0.0f), (0.0f), (-10.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_12 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_10, L_11, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_4, L_12, /*hidden argument*/NULL);
	}

IL_0072:
	{
		return;
	}
}
// System.Void NPCMovement::.ctor()
extern "C"  void NPCMovement__ctor_m3012267577 (NPCMovement_t1765980670 * __this, const MethodInfo* method)
{
	{
		__this->set_walkingSpeed_2(((int32_t)150));
		__this->set_maxDistanceFromStartPoint_3((30.0f));
		__this->set_timeToWait_4(((int32_t)60));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void NPCMovement::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t69676727_m3207772375_MethodInfo_var;
extern const uint32_t NPCMovement_Start_m3408609881_MetadataUsageId;
extern "C"  void NPCMovement_Start_m3408609881 (NPCMovement_t1765980670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NPCMovement_Start_m3408609881_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rigidbody_11(L_0);
		Animator_t69676727 * L_1 = Component_GetComponent_TisAnimator_t69676727_m3207772375(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m3207772375_MethodInfo_var);
		__this->set_anim_12(L_1);
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = (&V_0)->get_x_1();
		__this->set_startingX_9(L_4);
		Transform_t3275118058 * L_5 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_6 = Transform_get_position_m1104419803(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		float L_7 = (&V_1)->get_y_2();
		__this->set_startingY_10(L_7);
		__this->set_distanceToWalk_7((100.0f));
		__this->set_currentDirection_8(2);
		__this->set_isTalking_5((bool)0);
		Vector2_t2243707579  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector2__ctor_m3067419446(&L_8, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movementVector_13(L_8);
		return;
	}
}
// System.Void NPCMovement::Update()
extern Il2CppCodeGenString* _stringLiteral1900024211;
extern Il2CppCodeGenString* _stringLiteral2193455957;
extern Il2CppCodeGenString* _stringLiteral2193455958;
extern const uint32_t NPCMovement_Update_m2241016988_MetadataUsageId;
extern "C"  void NPCMovement_Update_m2241016988 (NPCMovement_t1765980670 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NPCMovement_Update_m2241016988_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = __this->get_isTalking_5();
		if (!L_0)
		{
			goto IL_0037;
		}
	}
	{
		Animator_t69676727 * L_1 = __this->get_anim_12();
		Animator_SetBool_m2305662531(L_1, _stringLiteral1900024211, (bool)0, /*hidden argument*/NULL);
		Rigidbody2D_t502193897 * L_2 = __this->get_rigidbody_11();
		Rigidbody2D_t502193897 * L_3 = __this->get_rigidbody_11();
		Vector2_t2243707579  L_4 = Rigidbody2D_get_position_m1357256809(L_3, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m2716592358(L_2, L_4, /*hidden argument*/NULL);
		goto IL_019e;
	}

IL_0037:
	{
		NPCMovement_directionChange_m1430902564(__this, /*hidden argument*/NULL);
		int32_t L_5 = __this->get_currentDirection_8();
		if (L_5)
		{
			goto IL_0062;
		}
	}
	{
		Vector2_t2243707579  L_6;
		memset(&L_6, 0, sizeof(L_6));
		Vector2__ctor_m3067419446(&L_6, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_movementVector_13(L_6);
		goto IL_00f5;
	}

IL_0062:
	{
		int32_t L_7 = __this->get_currentDirection_8();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_0088;
		}
	}
	{
		Vector2_t2243707579  L_8;
		memset(&L_8, 0, sizeof(L_8));
		Vector2__ctor_m3067419446(&L_8, (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movementVector_13(L_8);
		goto IL_00f5;
	}

IL_0088:
	{
		int32_t L_9 = __this->get_currentDirection_8();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_00ae;
		}
	}
	{
		Vector2_t2243707579  L_10;
		memset(&L_10, 0, sizeof(L_10));
		Vector2__ctor_m3067419446(&L_10, (0.0f), (-1.0f), /*hidden argument*/NULL);
		__this->set_movementVector_13(L_10);
		goto IL_00f5;
	}

IL_00ae:
	{
		int32_t L_11 = __this->get_currentDirection_8();
		if ((!(((uint32_t)L_11) == ((uint32_t)3))))
		{
			goto IL_00d4;
		}
	}
	{
		Vector2_t2243707579  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector2__ctor_m3067419446(&L_12, (-1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movementVector_13(L_12);
		goto IL_00f5;
	}

IL_00d4:
	{
		int32_t L_13 = __this->get_currentDirection_8();
		if ((!(((uint32_t)L_13) == ((uint32_t)4))))
		{
			goto IL_00f5;
		}
	}
	{
		Vector2_t2243707579  L_14;
		memset(&L_14, 0, sizeof(L_14));
		Vector2__ctor_m3067419446(&L_14, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_movementVector_13(L_14);
	}

IL_00f5:
	{
		Vector2_t2243707579  L_15 = __this->get_movementVector_13();
		Vector2_t2243707579  L_16 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_17 = Vector2_op_Inequality_m4283136193(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0156;
		}
	}
	{
		Animator_t69676727 * L_18 = __this->get_anim_12();
		Animator_SetBool_m2305662531(L_18, _stringLiteral1900024211, (bool)1, /*hidden argument*/NULL);
		Animator_t69676727 * L_19 = __this->get_anim_12();
		Vector2_t2243707579 * L_20 = __this->get_address_of_movementVector_13();
		float L_21 = L_20->get_x_1();
		Animator_SetFloat_m956158019(L_19, _stringLiteral2193455957, L_21, /*hidden argument*/NULL);
		Animator_t69676727 * L_22 = __this->get_anim_12();
		Vector2_t2243707579 * L_23 = __this->get_address_of_movementVector_13();
		float L_24 = L_23->get_y_2();
		Animator_SetFloat_m956158019(L_22, _stringLiteral2193455958, L_24, /*hidden argument*/NULL);
		goto IL_0167;
	}

IL_0156:
	{
		Animator_t69676727 * L_25 = __this->get_anim_12();
		Animator_SetBool_m2305662531(L_25, _stringLiteral1900024211, (bool)0, /*hidden argument*/NULL);
	}

IL_0167:
	{
		Rigidbody2D_t502193897 * L_26 = __this->get_rigidbody_11();
		Rigidbody2D_t502193897 * L_27 = __this->get_rigidbody_11();
		Vector2_t2243707579  L_28 = Rigidbody2D_get_position_m1357256809(L_27, /*hidden argument*/NULL);
		Vector2_t2243707579  L_29 = __this->get_movementVector_13();
		float L_30 = Time_get_smoothDeltaTime_m1294084638(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2243707579  L_31 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_29, L_30, /*hidden argument*/NULL);
		int32_t L_32 = __this->get_walkingSpeed_2();
		Vector2_t2243707579  L_33 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_31, (((float)((float)L_32))), /*hidden argument*/NULL);
		Vector2_t2243707579  L_34 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_28, L_33, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m2716592358(L_26, L_34, /*hidden argument*/NULL);
	}

IL_019e:
	{
		return;
	}
}
// System.Void NPCMovement::directionChange()
extern "C"  void NPCMovement_directionChange_m1430902564 (NPCMovement_t1765980670 * __this, const MethodInfo* method)
{
	{
		float L_0 = __this->get_distanceToWalk_7();
		if ((!(((float)L_0) == ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_1 = Random_Range_m694320887(NULL /*static, unused*/, 0, 4, /*hidden argument*/NULL);
		__this->set_currentDirection_8(L_1);
		int32_t L_2 = Random_Range_m694320887(NULL /*static, unused*/, 0, ((int32_t)50), /*hidden argument*/NULL);
		__this->set_distanceToWalk_7((((float)((float)L_2))));
		goto IL_0043;
	}

IL_0031:
	{
		float L_3 = __this->get_distanceToWalk_7();
		__this->set_distanceToWalk_7(((float)((float)L_3-(float)(1.0f))));
	}

IL_0043:
	{
		return;
	}
}
// System.Void NPCMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3597644316;
extern Il2CppCodeGenString* _stringLiteral1875862075;
extern Il2CppCodeGenString* _stringLiteral1480231765;
extern const uint32_t NPCMovement_OnCollisionEnter2D_m1987572595_MetadataUsageId;
extern "C"  void NPCMovement_OnCollisionEnter2D_m1987572595 (NPCMovement_t1765980670 * __this, Collision2D_t1539500754 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NPCMovement_OnCollisionEnter2D_m1987572595_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral3597644316, /*hidden argument*/NULL);
		Collision2D_t1539500754 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral1875862075, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral1480231765, /*hidden argument*/NULL);
		__this->set_isTalking_5((bool)1);
	}

IL_0035:
	{
		return;
	}
}
// System.Void NPCMovement::OnCollisionExit2D(UnityEngine.Collision2D)
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3535914442;
extern Il2CppCodeGenString* _stringLiteral1875862075;
extern Il2CppCodeGenString* _stringLiteral950781616;
extern const uint32_t NPCMovement_OnCollisionExit2D_m2494398495_MetadataUsageId;
extern "C"  void NPCMovement_OnCollisionExit2D_m2494398495 (NPCMovement_t1765980670 * __this, Collision2D_t1539500754 * ___col0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (NPCMovement_OnCollisionExit2D_m2494398495_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral3535914442, /*hidden argument*/NULL);
		Collision2D_t1539500754 * L_0 = ___col0;
		GameObject_t1756533147 * L_1 = Collision2D_get_gameObject_m4234358314(L_0, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1790663636(NULL /*static, unused*/, L_2, _stringLiteral1875862075, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_Log_m920475918(NULL /*static, unused*/, _stringLiteral950781616, /*hidden argument*/NULL);
		__this->set_isTalking_5((bool)0);
	}

IL_0035:
	{
		return;
	}
}
// System.Void PlayerMovement::.ctor()
extern "C"  void PlayerMovement__ctor_m767722651 (PlayerMovement_t3166138480 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerMovement::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimator_t69676727_m3207772375_MethodInfo_var;
extern const uint32_t PlayerMovement_Start_m727481071_MetadataUsageId;
extern "C"  void PlayerMovement_Start_m727481071 (PlayerMovement_t3166138480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Start_m727481071_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rigidbody2D_t502193897 * L_0 = Component_GetComponent_TisRigidbody2D_t502193897_m3702757851(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t502193897_m3702757851_MethodInfo_var);
		__this->set_rb_3(L_0);
		Animator_t69676727 * L_1 = Component_GetComponent_TisAnimator_t69676727_m3207772375(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t69676727_m3207772375_MethodInfo_var);
		__this->set_anim_4(L_1);
		return;
	}
}
// System.Void PlayerMovement::Update()
extern Il2CppClass* Input_t1785128008_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral855845486;
extern Il2CppCodeGenString* _stringLiteral1635882288;
extern Il2CppCodeGenString* _stringLiteral1900024211;
extern Il2CppCodeGenString* _stringLiteral2193455957;
extern Il2CppCodeGenString* _stringLiteral2193455958;
extern const uint32_t PlayerMovement_Update_m524456402_MetadataUsageId;
extern "C"  void PlayerMovement_Update_m524456402 (PlayerMovement_t3166138480 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerMovement_Update_m524456402_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t1785128008_il2cpp_TypeInfo_var);
		float L_0 = Input_GetAxisRaw_m4133353720(NULL /*static, unused*/, _stringLiteral855845486, /*hidden argument*/NULL);
		float L_1 = Input_GetAxisRaw_m4133353720(NULL /*static, unused*/, _stringLiteral1635882288, /*hidden argument*/NULL);
		Vector2__ctor_m3067419446((&V_0), L_0, L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_2 = V_0;
		Vector2_t2243707579  L_3 = Vector2_get_zero_m3966848876(NULL /*static, unused*/, /*hidden argument*/NULL);
		bool L_4 = Vector2_op_Inequality_m4283136193(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_006f;
		}
	}
	{
		Animator_t69676727 * L_5 = __this->get_anim_4();
		Animator_SetBool_m2305662531(L_5, _stringLiteral1900024211, (bool)1, /*hidden argument*/NULL);
		Animator_t69676727 * L_6 = __this->get_anim_4();
		float L_7 = (&V_0)->get_x_1();
		Animator_SetFloat_m956158019(L_6, _stringLiteral2193455957, L_7, /*hidden argument*/NULL);
		Animator_t69676727 * L_8 = __this->get_anim_4();
		float L_9 = (&V_0)->get_y_2();
		Animator_SetFloat_m956158019(L_8, _stringLiteral2193455958, L_9, /*hidden argument*/NULL);
		goto IL_0080;
	}

IL_006f:
	{
		Animator_t69676727 * L_10 = __this->get_anim_4();
		Animator_SetBool_m2305662531(L_10, _stringLiteral1900024211, (bool)0, /*hidden argument*/NULL);
	}

IL_0080:
	{
		Rigidbody2D_t502193897 * L_11 = __this->get_rb_3();
		Rigidbody2D_t502193897 * L_12 = __this->get_rb_3();
		Vector2_t2243707579  L_13 = Rigidbody2D_get_position_m1357256809(L_12, /*hidden argument*/NULL);
		Vector2_t2243707579  L_14 = V_0;
		float L_15 = Time_get_smoothDeltaTime_m1294084638(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector2_t2243707579  L_16 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		int32_t L_17 = __this->get_walkingSpeed_2();
		Vector2_t2243707579  L_18 = Vector2_op_Multiply_m4236139442(NULL /*static, unused*/, L_16, (((float)((float)L_17))), /*hidden argument*/NULL);
		Vector2_t2243707579  L_19 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_13, L_18, /*hidden argument*/NULL);
		Rigidbody2D_MovePosition_m2716592358(L_11, L_19, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.ImportBehaviour::.ctor()
extern "C"  void ImportBehaviour__ctor_m2267099800 (ImportBehaviour_t1918973942 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.ImportBehaviour::Update()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1712134275;
extern const uint32_t ImportBehaviour_Update_m280656869_MetadataUsageId;
extern "C"  void ImportBehaviour_Update_m280656869 (ImportBehaviour_t1918973942 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (ImportBehaviour_Update_m280656869_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = __this->get_ImportName_2();
		GameObject_t1756533147 * L_1 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		String_t* L_2 = Object_get_name_m2079638459(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_3 = String_Format_m1811873526(NULL /*static, unused*/, _stringLiteral1712134275, L_0, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogError_m3715728798(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.SortingLayerExposed::.ctor()
extern "C"  void SortingLayerExposed__ctor_m47081449 (SortingLayerExposed_t870693243 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.SpriteDepthInMap::.ctor()
extern Il2CppClass* Vector2_t2243707579_il2cpp_TypeInfo_var;
extern const uint32_t SpriteDepthInMap__ctor_m1376091147_MetadataUsageId;
extern "C"  void SpriteDepthInMap__ctor_m1376091147 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpriteDepthInMap__ctor_m1376091147_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector2_t2243707579  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector2_t2243707579  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2243707579  V_4;
	memset(&V_4, 0, sizeof(V_4));
	{
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_0));
		Vector2_t2243707579  L_0 = V_0;
		__this->set_StaggerPositionOffset_4(L_0);
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_1));
		Vector2_t2243707579  L_1 = V_1;
		__this->set_SeparationPoint1_5(L_1);
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_2));
		Vector2_t2243707579  L_2 = V_2;
		__this->set_SeparationPoint2_6(L_2);
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_3));
		Vector2_t2243707579  L_3 = V_3;
		__this->set_SeparationAxis1_7(L_3);
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_4));
		Vector2_t2243707579  L_4 = V_4;
		__this->set_SeparationAxis2_8(L_4);
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// Tiled2Unity.TiledMap Tiled2Unity.SpriteDepthInMap::get_AttachedMap()
extern "C"  TiledMap_t4203693682 * SpriteDepthInMap_get_AttachedMap_m1356298740 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method)
{
	{
		TiledMap_t4203693682 * L_0 = __this->get__AttachedMap_2();
		return L_0;
	}
}
// System.Void Tiled2Unity.SpriteDepthInMap::set_AttachedMap(Tiled2Unity.TiledMap)
extern "C"  void SpriteDepthInMap_set_AttachedMap_m892988967 (SpriteDepthInMap_t2395493699 * __this, TiledMap_t4203693682 * ___value0, const MethodInfo* method)
{
	{
		TiledMap_t4203693682 * L_0 = ___value0;
		__this->set__AttachedMap_2(L_0);
		SpriteDepthInMap_AttachedMapChanged_m1886987523(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.SpriteDepthInMap::Start()
extern Il2CppClass* Object_t1021602117_il2cpp_TypeInfo_var;
extern Il2CppClass* ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4120463658;
extern const uint32_t SpriteDepthInMap_Start_m1494404799_MetadataUsageId;
extern "C"  void SpriteDepthInMap_Start_m1494404799 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpriteDepthInMap_Start_m1494404799_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		TiledMap_t4203693682 * L_0 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t1021602117_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3764089466(NULL /*static, unused*/, L_0, (Object_t1021602117 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_2 = String_Format_m1263743648(NULL /*static, unused*/, _stringLiteral4120463658, ((ObjectU5BU5D_t3614634134*)SZArrayNew(ObjectU5BU5D_t3614634134_il2cpp_TypeInfo_var, (uint32_t)0)), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogError_m3715728798(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		return;
	}

IL_0027:
	{
		SpriteDepthInMap_AttachedMapChanged_m1886987523(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.SpriteDepthInMap::AttachedMapChanged()
extern Il2CppClass* Vector2_t2243707579_il2cpp_TypeInfo_var;
extern const uint32_t SpriteDepthInMap_AttachedMapChanged_m1886987523_MetadataUsageId;
extern "C"  void SpriteDepthInMap_AttachedMapChanged_m1886987523 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpriteDepthInMap_AttachedMapChanged_m1886987523_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Vector2_t2243707579  V_8;
	memset(&V_8, 0, sizeof(V_8));
	Vector2_t2243707579  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector2_t2243707579  V_10;
	memset(&V_10, 0, sizeof(V_10));
	Vector2_t2243707579  V_11;
	memset(&V_11, 0, sizeof(V_11));
	Vector2_t2243707579  V_12;
	memset(&V_12, 0, sizeof(V_12));
	Vector2_t2243707579  V_13;
	memset(&V_13, 0, sizeof(V_13));
	Vector2_t2243707579  V_14;
	memset(&V_14, 0, sizeof(V_14));
	Vector2_t2243707579  V_15;
	memset(&V_15, 0, sizeof(V_15));
	Vector2_t2243707579  V_16;
	memset(&V_16, 0, sizeof(V_16));
	Vector2_t2243707579  V_17;
	memset(&V_17, 0, sizeof(V_17));
	Vector2_t2243707579  V_18;
	memset(&V_18, 0, sizeof(V_18));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	int32_t G_B12_0 = 0;
	{
		TiledMap_t4203693682 * L_0 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0->get_TileWidth_9();
		V_0 = L_1;
		TiledMap_t4203693682 * L_2 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2->get_TileHeight_10();
		V_1 = L_3;
		TiledMap_t4203693682 * L_4 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4->get_StaggerIndex_4();
		V_2 = L_5;
		TiledMap_t4203693682 * L_6 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_7 = L_6->get_StaggerAxis_3();
		V_3 = L_7;
		TiledMap_t4203693682 * L_8 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_9 = L_8->get_Orientation_2();
		V_4 = L_9;
		int32_t L_10 = V_4;
		if ((!(((uint32_t)L_10) == ((uint32_t)3))))
		{
			goto IL_0055;
		}
	}
	{
		TiledMap_t4203693682 * L_11 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_12 = L_11->get_HexSideLength_5();
		G_B3_0 = L_12;
		goto IL_0056;
	}

IL_0055:
	{
		G_B3_0 = 0;
	}

IL_0056:
	{
		V_5 = G_B3_0;
		int32_t L_13 = V_2;
		if ((!(((uint32_t)L_13) == ((uint32_t)1))))
		{
			goto IL_007c;
		}
	}
	{
		int32_t L_14 = V_0;
		Vector2_t2243707579  L_15;
		memset(&L_15, 0, sizeof(L_15));
		Vector2__ctor_m3067419446(&L_15, ((float)((float)(((float)((float)L_14)))*(float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		__this->set_StaggerPositionOffset_4(L_15);
		goto IL_008c;
	}

IL_007c:
	{
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_18));
		Vector2_t2243707579  L_16 = V_18;
		__this->set_StaggerPositionOffset_4(L_16);
	}

IL_008c:
	{
		int32_t L_17 = V_3;
		if (L_17)
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_18 = V_5;
		G_B9_0 = L_18;
		goto IL_009a;
	}

IL_0099:
	{
		G_B9_0 = 0;
	}

IL_009a:
	{
		V_6 = G_B9_0;
		int32_t L_19 = V_3;
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00aa;
		}
	}
	{
		int32_t L_20 = V_5;
		G_B12_0 = L_20;
		goto IL_00ab;
	}

IL_00aa:
	{
		G_B12_0 = 0;
	}

IL_00ab:
	{
		V_7 = G_B12_0;
		int32_t L_21 = V_7;
		Vector2__ctor_m3067419446((&V_8), (0.0f), ((float)((float)(((float)((float)((-L_21)))))*(float)(0.5f))), /*hidden argument*/NULL);
		int32_t L_22 = V_6;
		Vector2__ctor_m3067419446((&V_9), ((float)((float)(((float)((float)((-L_22)))))*(float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		int32_t L_23 = V_1;
		Vector2__ctor_m3067419446((&V_10), (0.0f), ((float)((float)(((float)((float)L_23)))*(float)(0.5f))), /*hidden argument*/NULL);
		int32_t L_24 = V_0;
		Vector2__ctor_m3067419446((&V_11), ((float)((float)(((float)((float)L_24)))*(float)(0.5f))), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_25 = V_11;
		Vector2_t2243707579  L_26 = V_9;
		Vector2_t2243707579  L_27 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		V_12 = L_27;
		Vector2_t2243707579  L_28 = V_10;
		Vector2_t2243707579  L_29 = V_8;
		Vector2_t2243707579  L_30 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_13 = L_30;
		Vector2_t2243707579  L_31 = V_12;
		int32_t L_32 = V_6;
		Vector2_t2243707579  L_33;
		memset(&L_33, 0, sizeof(L_33));
		Vector2__ctor_m3067419446(&L_33, (((float)((float)L_32))), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_34 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_31, L_33, /*hidden argument*/NULL);
		V_14 = L_34;
		Vector2_t2243707579  L_35 = V_13;
		int32_t L_36 = V_0;
		Vector2_t2243707579  L_37;
		memset(&L_37, 0, sizeof(L_37));
		Vector2__ctor_m3067419446(&L_37, (((float)((float)L_36))), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_38 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_35, L_37, /*hidden argument*/NULL);
		V_15 = L_38;
		Vector2_t2243707579  L_39 = V_13;
		Vector2_t2243707579  L_40 = V_12;
		Vector2_t2243707579  L_41 = Vector2_op_Subtraction_m1984215297(NULL /*static, unused*/, L_39, L_40, /*hidden argument*/NULL);
		V_16 = L_41;
		Vector2_t2243707579  L_42 = V_15;
		Vector2_t2243707579  L_43 = V_14;
		Vector2_t2243707579  L_44 = Vector2_op_Subtraction_m1984215297(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		V_17 = L_44;
		float L_45 = (&V_16)->get_y_2();
		float L_46 = (&V_16)->get_x_1();
		Vector2_t2243707579  L_47;
		memset(&L_47, 0, sizeof(L_47));
		Vector2__ctor_m3067419446(&L_47, L_45, ((-L_46)), /*hidden argument*/NULL);
		__this->set_SeparationAxis1_7(L_47);
		float L_48 = (&V_17)->get_y_2();
		float L_49 = (&V_17)->get_x_1();
		Vector2_t2243707579  L_50;
		memset(&L_50, 0, sizeof(L_50));
		Vector2__ctor_m3067419446(&L_50, ((-L_48)), L_49, /*hidden argument*/NULL);
		__this->set_SeparationAxis2_8(L_50);
		int32_t L_51 = V_7;
		int32_t L_52 = V_6;
		if ((((int32_t)L_51) <= ((int32_t)L_52)))
		{
			goto IL_01bb;
		}
	}
	{
		Vector2_t2243707579  L_53 = V_11;
		__this->set_SeparationPoint1_5(L_53);
		Vector2_t2243707579  L_54 = V_11;
		int32_t L_55 = V_1;
		Vector2_t2243707579  L_56;
		memset(&L_56, 0, sizeof(L_56));
		Vector2__ctor_m3067419446(&L_56, (0.0f), (((float)((float)L_55))), /*hidden argument*/NULL);
		Vector2_t2243707579  L_57 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_54, L_56, /*hidden argument*/NULL);
		__this->set_SeparationPoint2_6(L_57);
		goto IL_01dc;
	}

IL_01bb:
	{
		Vector2_t2243707579  L_58 = V_10;
		__this->set_SeparationPoint1_5(L_58);
		Vector2_t2243707579  L_59 = V_10;
		int32_t L_60 = V_0;
		Vector2_t2243707579  L_61;
		memset(&L_61, 0, sizeof(L_61));
		Vector2__ctor_m3067419446(&L_61, (((float)((float)L_60))), (0.0f), /*hidden argument*/NULL);
		Vector2_t2243707579  L_62 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_59, L_61, /*hidden argument*/NULL);
		__this->set_SeparationPoint2_6(L_62);
	}

IL_01dc:
	{
		return;
	}
}
// System.Void Tiled2Unity.SpriteDepthInMap::Update()
extern "C"  void SpriteDepthInMap_Update_m719055644 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	Rect_t3681755626  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector2_t2243707579  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Vector3_t2243707580  V_9;
	memset(&V_9, 0, sizeof(V_9));
	Vector3_t2243707580  V_10;
	memset(&V_10, 0, sizeof(V_10));
	float G_B3_0 = 0.0f;
	{
		TiledMap_t4203693682 * L_0 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0->get_Orientation_2();
		V_0 = L_1;
		TiledMap_t4203693682 * L_2 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		bool L_3 = TiledMap_AreTilesStaggered_m1869245225(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		TiledMap_t4203693682 * L_4 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4->get_TileHeight_10();
		V_2 = (((float)((float)L_5)));
		TiledMap_t4203693682 * L_6 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		Rect_t3681755626  L_7 = TiledMap_GetMapRect_m2769672278(L_6, /*hidden argument*/NULL);
		V_3 = L_7;
		GameObject_t1756533147 * L_8 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_9 = GameObject_get_transform_m909382139(L_8, /*hidden argument*/NULL);
		Vector3_t2243707580  L_10 = Transform_get_position_m1104419803(L_9, /*hidden argument*/NULL);
		Vector2_t2243707579  L_11 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		Vector2_t2243707579  L_12 = SpriteDepthInMap_FindGridCoordinates_m3393281566(__this, L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		G_B3_0 = (0.25f);
		goto IL_0063;
	}

IL_005e:
	{
		G_B3_0 = (0.5f);
	}

IL_0063:
	{
		V_5 = G_B3_0;
		Vector2_t2243707579 * L_14 = (&V_4);
		float L_15 = L_14->get_x_1();
		float L_16 = V_5;
		L_14->set_x_1(((float)((float)L_15+(float)L_16)));
		Vector2_t2243707579 * L_17 = (&V_4);
		float L_18 = L_17->get_y_2();
		float L_19 = V_5;
		L_17->set_y_2(((float)((float)L_18+(float)L_19)));
		float L_20 = (&V_4)->get_y_2();
		float L_21 = V_2;
		V_6 = ((float)((float)L_20*(float)L_21));
		int32_t L_22 = V_0;
		if ((!(((uint32_t)L_22) == ((uint32_t)1))))
		{
			goto IL_00b0;
		}
	}
	{
		float L_23 = (&V_4)->get_x_1();
		float L_24 = (&V_4)->get_y_2();
		float L_25 = V_2;
		V_6 = ((float)((float)((float)((float)((float)((float)L_23+(float)L_24))*(float)L_25))*(float)(0.5f)));
	}

IL_00b0:
	{
		float L_26 = V_6;
		float L_27 = Rect_get_height_m3128694305((&V_3), /*hidden argument*/NULL);
		V_7 = ((float)((float)((float)((float)L_26/(float)L_27))*(float)(-1.0f)));
		float L_28 = V_2;
		float L_29 = Rect_get_height_m3128694305((&V_3), /*hidden argument*/NULL);
		V_8 = ((float)((float)((float)((float)L_28/(float)L_29))*(float)(-1.0f)));
		float L_30 = V_7;
		float L_31 = V_8;
		int32_t L_32 = __this->get_PlacedOnLayerIndex_3();
		V_7 = ((float)((float)L_30+(float)((float)((float)L_31*(float)(((float)((float)L_32)))))));
		GameObject_t1756533147 * L_33 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_34 = GameObject_get_transform_m909382139(L_33, /*hidden argument*/NULL);
		GameObject_t1756533147 * L_35 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_36 = GameObject_get_transform_m909382139(L_35, /*hidden argument*/NULL);
		Vector3_t2243707580  L_37 = Transform_get_position_m1104419803(L_36, /*hidden argument*/NULL);
		V_9 = L_37;
		float L_38 = (&V_9)->get_x_1();
		GameObject_t1756533147 * L_39 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_40 = GameObject_get_transform_m909382139(L_39, /*hidden argument*/NULL);
		Vector3_t2243707580  L_41 = Transform_get_position_m1104419803(L_40, /*hidden argument*/NULL);
		V_10 = L_41;
		float L_42 = (&V_10)->get_y_2();
		float L_43 = V_7;
		Vector3_t2243707580  L_44;
		memset(&L_44, 0, sizeof(L_44));
		Vector3__ctor_m2638739322(&L_44, L_38, L_42, L_43, /*hidden argument*/NULL);
		Transform_set_position_m2469242620(L_34, L_44, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::FindGridCoordinates(UnityEngine.Vector2)
extern Il2CppClass* Vector2_t2243707579_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern Il2CppClass* MapOrientation_t2782890834_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t1368543263_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral851180529;
extern const uint32_t SpriteDepthInMap_FindGridCoordinates_m3393281566_MetadataUsageId;
extern "C"  Vector2_t2243707579  SpriteDepthInMap_FindGridCoordinates_m3393281566 (SpriteDepthInMap_t2395493699 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpriteDepthInMap_FindGridCoordinates_m3393281566_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	int32_t V_1 = 0;
	Vector2_t2243707579  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		Vector2_t2243707579  L_0 = ___position0;
		TiledMap_t4203693682 * L_1 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_2 = Component_get_transform_m2697483695(L_1, /*hidden argument*/NULL);
		Vector3_t2243707580  L_3 = Transform_get_position_m1104419803(L_2, /*hidden argument*/NULL);
		Vector2_t2243707579  L_4 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		Vector2_t2243707579  L_5 = Vector2_op_Subtraction_m1984215297(NULL /*static, unused*/, L_0, L_4, /*hidden argument*/NULL);
		___position0 = L_5;
		Vector2_t2243707579  L_6 = ___position0;
		TiledMap_t4203693682 * L_7 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		float L_8 = L_7->get_ExportScale_11();
		Vector2_t2243707579  L_9 = Vector2_op_Division_m96580069(NULL /*static, unused*/, L_6, L_8, /*hidden argument*/NULL);
		___position0 = L_9;
		float L_10 = (&___position0)->get_y_2();
		(&___position0)->set_y_2(((-L_10)));
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_2));
		Vector2_t2243707579  L_11 = V_2;
		V_0 = L_11;
		TiledMap_t4203693682 * L_12 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12->get_Orientation_2();
		V_1 = L_13;
		int32_t L_14 = V_1;
		if (L_14)
		{
			goto IL_00a0;
		}
	}
	{
		float L_15 = (&___position0)->get_x_1();
		TiledMap_t4203693682 * L_16 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_17 = L_16->get_TileWidth_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_18 = floorf(((float)((float)L_15/(float)(((float)((float)L_17))))));
		(&V_0)->set_x_1(L_18);
		float L_19 = (&___position0)->get_y_2();
		TiledMap_t4203693682 * L_20 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_21 = L_20->get_TileHeight_10();
		float L_22 = floorf(((float)((float)L_19/(float)(((float)((float)L_21))))));
		(&V_0)->set_y_2(L_22);
		goto IL_00e4;
	}

IL_00a0:
	{
		int32_t L_23 = V_1;
		if ((!(((uint32_t)L_23) == ((uint32_t)1))))
		{
			goto IL_00b4;
		}
	}
	{
		Vector2_t2243707579  L_24 = ___position0;
		Vector2_t2243707579  L_25 = SpriteDepthInMap_ScreenToIsometric_m4228889462(__this, L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		goto IL_00e4;
	}

IL_00b4:
	{
		int32_t L_26 = V_1;
		if ((((int32_t)L_26) == ((int32_t)2)))
		{
			goto IL_00c2;
		}
	}
	{
		int32_t L_27 = V_1;
		if ((!(((uint32_t)L_27) == ((uint32_t)3))))
		{
			goto IL_00cf;
		}
	}

IL_00c2:
	{
		Vector2_t2243707579  L_28 = ___position0;
		Vector2_t2243707579  L_29 = SpriteDepthInMap_ScreenToStaggered_m4236816887(__this, L_28, /*hidden argument*/NULL);
		V_0 = L_29;
		goto IL_00e4;
	}

IL_00cf:
	{
		int32_t L_30 = V_1;
		int32_t L_31 = L_30;
		Il2CppObject * L_32 = Box(MapOrientation_t2782890834_il2cpp_TypeInfo_var, &L_31);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_33 = String_Format_m2024975688(NULL /*static, unused*/, _stringLiteral851180529, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t1368543263_il2cpp_TypeInfo_var);
		Debug_LogWarning_m2503577968(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
	}

IL_00e4:
	{
		Vector2_t2243707579  L_34 = V_0;
		return L_34;
	}
}
// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::ScreenToIsometric(UnityEngine.Vector2)
extern Il2CppClass* Vector2_t2243707579_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t SpriteDepthInMap_ScreenToIsometric_m4228889462_MetadataUsageId;
extern "C"  Vector2_t2243707579  SpriteDepthInMap_ScreenToIsometric_m4228889462 (SpriteDepthInMap_t2395493699 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpriteDepthInMap_ScreenToIsometric_m4228889462_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vector2_t2243707579  V_6;
	memset(&V_6, 0, sizeof(V_6));
	{
		float L_0 = (&___position0)->get_x_1();
		V_0 = L_0;
		float L_1 = (&___position0)->get_y_2();
		V_1 = L_1;
		TiledMap_t4203693682 * L_2 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_3 = L_2->get_TileWidth_9();
		V_2 = L_3;
		TiledMap_t4203693682 * L_4 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4->get_TileHeight_10();
		V_3 = L_5;
		float L_6 = V_0;
		TiledMap_t4203693682 * L_7 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_8 = L_7->get_NumTilesHigh_8();
		int32_t L_9 = V_2;
		V_0 = ((float)((float)L_6-(float)(((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_8*(int32_t)L_9))/(int32_t)2)))))));
		float L_10 = V_1;
		int32_t L_11 = V_3;
		V_4 = ((float)((float)L_10/(float)(((float)((float)L_11)))));
		float L_12 = V_0;
		int32_t L_13 = V_2;
		V_5 = ((float)((float)L_12/(float)(((float)((float)L_13)))));
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_6));
		float L_14 = V_4;
		float L_15 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_16 = floorf(((float)((float)L_14+(float)L_15)));
		(&V_6)->set_x_1(L_16);
		float L_17 = V_4;
		float L_18 = V_5;
		float L_19 = floorf(((float)((float)L_17-(float)L_18)));
		(&V_6)->set_y_2(L_19);
		Vector2_t2243707579  L_20 = V_6;
		return L_20;
	}
}
// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::ScreenToStaggered(UnityEngine.Vector2)
extern Il2CppClass* Vector2_t2243707579_il2cpp_TypeInfo_var;
extern Il2CppClass* Mathf_t2336485820_il2cpp_TypeInfo_var;
extern const uint32_t SpriteDepthInMap_ScreenToStaggered_m4236816887_MetadataUsageId;
extern "C"  Vector2_t2243707579  SpriteDepthInMap_ScreenToStaggered_m4236816887 (SpriteDepthInMap_t2395493699 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (SpriteDepthInMap_ScreenToStaggered_m4236816887_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	Vector2_t2243707579  V_5;
	memset(&V_5, 0, sizeof(V_5));
	Vector2_t2243707579  V_6;
	memset(&V_6, 0, sizeof(V_6));
	Vector2_t2243707579  V_7;
	memset(&V_7, 0, sizeof(V_7));
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	float V_17 = 0.0f;
	Vector2_t2243707579  V_18;
	memset(&V_18, 0, sizeof(V_18));
	{
		Initobj (Vector2_t2243707579_il2cpp_TypeInfo_var, (&V_18));
		Vector2_t2243707579  L_0 = V_18;
		V_0 = L_0;
		Vector2_t2243707579  L_1 = ___position0;
		Vector2_t2243707579  L_2 = __this->get_StaggerPositionOffset_4();
		Vector2_t2243707579  L_3 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		___position0 = L_3;
		float L_4 = (&___position0)->get_x_1();
		TiledMap_t4203693682 * L_5 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_6 = L_5->get_TileWidth_9();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_7 = floorf(((float)((float)L_4/(float)(((float)((float)L_6))))));
		(&V_0)->set_x_1(L_7);
		float L_8 = (&___position0)->get_y_2();
		TiledMap_t4203693682 * L_9 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_10 = L_9->get_TileHeight_10();
		float L_11 = floorf(((float)((float)L_8/(float)(((float)((float)L_10))))));
		(&V_0)->set_y_2(L_11);
		TiledMap_t4203693682 * L_12 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_13 = L_12->get_TileWidth_9();
		V_1 = (((float)((float)L_13)));
		TiledMap_t4203693682 * L_14 = SpriteDepthInMap_get_AttachedMap_m1356298740(__this, /*hidden argument*/NULL);
		int32_t L_15 = L_14->get_TileHeight_10();
		V_2 = (((float)((float)L_15)));
		float L_16 = (&V_0)->get_x_1();
		float L_17 = V_1;
		V_3 = ((float)((float)L_16*(float)L_17));
		float L_18 = (&V_0)->get_y_2();
		float L_19 = V_2;
		V_4 = ((float)((float)L_18*(float)L_19));
		float L_20 = V_3;
		float L_21 = V_4;
		Vector2__ctor_m3067419446((&V_5), L_20, L_21, /*hidden argument*/NULL);
		Vector2_t2243707579  L_22 = __this->get_SeparationPoint1_5();
		Vector2_t2243707579  L_23 = V_5;
		Vector2_t2243707579  L_24 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_22, L_23, /*hidden argument*/NULL);
		V_6 = L_24;
		Vector2_t2243707579  L_25 = __this->get_SeparationPoint2_6();
		Vector2_t2243707579  L_26 = V_5;
		Vector2_t2243707579  L_27 = Vector2_op_Addition_m1389598521(NULL /*static, unused*/, L_25, L_26, /*hidden argument*/NULL);
		V_7 = L_27;
		Vector2_t2243707579  L_28 = __this->get_SeparationAxis1_7();
		Vector2_t2243707579  L_29 = V_6;
		float L_30 = Vector2_Dot_m778921987(NULL /*static, unused*/, L_28, L_29, /*hidden argument*/NULL);
		V_8 = L_30;
		Vector2_t2243707579  L_31 = __this->get_SeparationAxis1_7();
		Vector2_t2243707579  L_32 = V_7;
		float L_33 = Vector2_Dot_m778921987(NULL /*static, unused*/, L_31, L_32, /*hidden argument*/NULL);
		V_9 = L_33;
		float L_34 = V_8;
		float L_35 = V_9;
		float L_36 = Mathf_Min_m1648492575(NULL /*static, unused*/, L_34, L_35, /*hidden argument*/NULL);
		V_10 = L_36;
		float L_37 = V_8;
		float L_38 = V_9;
		float L_39 = Mathf_Max_m2564622569(NULL /*static, unused*/, L_37, L_38, /*hidden argument*/NULL);
		V_11 = L_39;
		Vector2_t2243707579  L_40 = __this->get_SeparationAxis1_7();
		Vector2_t2243707579  L_41 = ___position0;
		float L_42 = Vector2_Dot_m778921987(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		V_12 = L_42;
		float L_43 = V_12;
		float L_44 = V_10;
		if ((!(((float)L_43) < ((float)L_44))))
		{
			goto IL_0123;
		}
	}
	{
		Vector2_t2243707579 * L_45 = (&V_0);
		float L_46 = L_45->get_x_1();
		L_45->set_x_1(((float)((float)L_46-(float)(0.5f))));
		Vector2_t2243707579 * L_47 = (&V_0);
		float L_48 = L_47->get_y_2();
		L_47->set_y_2(((float)((float)L_48-(float)(0.5f))));
		Vector2_t2243707579  L_49 = V_0;
		return L_49;
	}

IL_0123:
	{
		float L_50 = V_12;
		float L_51 = V_11;
		if ((!(((float)L_50) > ((float)L_51))))
		{
			goto IL_0154;
		}
	}
	{
		Vector2_t2243707579 * L_52 = (&V_0);
		float L_53 = L_52->get_x_1();
		L_52->set_x_1(((float)((float)L_53+(float)(0.5f))));
		Vector2_t2243707579 * L_54 = (&V_0);
		float L_55 = L_54->get_y_2();
		L_54->set_y_2(((float)((float)L_55+(float)(0.5f))));
		Vector2_t2243707579  L_56 = V_0;
		return L_56;
	}

IL_0154:
	{
		Vector2_t2243707579  L_57 = __this->get_SeparationAxis2_8();
		Vector2_t2243707579  L_58 = V_6;
		float L_59 = Vector2_Dot_m778921987(NULL /*static, unused*/, L_57, L_58, /*hidden argument*/NULL);
		V_13 = L_59;
		Vector2_t2243707579  L_60 = __this->get_SeparationAxis2_8();
		Vector2_t2243707579  L_61 = V_7;
		float L_62 = Vector2_Dot_m778921987(NULL /*static, unused*/, L_60, L_61, /*hidden argument*/NULL);
		V_14 = L_62;
		float L_63 = V_13;
		float L_64 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t2336485820_il2cpp_TypeInfo_var);
		float L_65 = Mathf_Min_m1648492575(NULL /*static, unused*/, L_63, L_64, /*hidden argument*/NULL);
		V_15 = L_65;
		float L_66 = V_13;
		float L_67 = V_14;
		float L_68 = Mathf_Max_m2564622569(NULL /*static, unused*/, L_66, L_67, /*hidden argument*/NULL);
		V_16 = L_68;
		Vector2_t2243707579  L_69 = __this->get_SeparationAxis2_8();
		Vector2_t2243707579  L_70 = ___position0;
		float L_71 = Vector2_Dot_m778921987(NULL /*static, unused*/, L_69, L_70, /*hidden argument*/NULL);
		V_17 = L_71;
		float L_72 = V_17;
		float L_73 = V_15;
		if ((!(((float)L_72) < ((float)L_73))))
		{
			goto IL_01c7;
		}
	}
	{
		Vector2_t2243707579 * L_74 = (&V_0);
		float L_75 = L_74->get_x_1();
		L_74->set_x_1(((float)((float)L_75+(float)(0.5f))));
		Vector2_t2243707579 * L_76 = (&V_0);
		float L_77 = L_76->get_y_2();
		L_76->set_y_2(((float)((float)L_77-(float)(0.5f))));
		Vector2_t2243707579  L_78 = V_0;
		return L_78;
	}

IL_01c7:
	{
		float L_79 = V_17;
		float L_80 = V_16;
		if ((!(((float)L_79) > ((float)L_80))))
		{
			goto IL_01f8;
		}
	}
	{
		Vector2_t2243707579 * L_81 = (&V_0);
		float L_82 = L_81->get_x_1();
		L_81->set_x_1(((float)((float)L_82-(float)(0.5f))));
		Vector2_t2243707579 * L_83 = (&V_0);
		float L_84 = L_83->get_y_2();
		L_83->set_y_2(((float)((float)L_84+(float)(0.5f))));
		Vector2_t2243707579  L_85 = V_0;
		return L_85;
	}

IL_01f8:
	{
		Vector2_t2243707579  L_86 = V_0;
		return L_86;
	}
}
// System.Void Tiled2Unity.TileAnimator::.ctor()
extern "C"  void TileAnimator__ctor_m145946291 (TileAnimator_t1251487515 * __this, const MethodInfo* method)
{
	{
		__this->set_StartTime_2((-1.0f));
		__this->set_Duration_3((-1.0f));
		__this->set_TotalAnimationTime_4((-1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.TileAnimator::Awake()
extern const MethodInfo* Component_GetComponent_TisMeshRenderer_t1268241104_m3460404950_MethodInfo_var;
extern const uint32_t TileAnimator_Awake_m2555760918_MetadataUsageId;
extern "C"  void TileAnimator_Awake_m2555760918 (TileAnimator_t1251487515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TileAnimator_Awake_m2555760918_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		MeshRenderer_t1268241104 * L_0 = Component_GetComponent_TisMeshRenderer_t1268241104_m3460404950(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t1268241104_m3460404950_MethodInfo_var);
		__this->set_meshRenderer_6(L_0);
		return;
	}
}
// System.Void Tiled2Unity.TileAnimator::Start()
extern Il2CppCodeGenString* _stringLiteral1107009114;
extern Il2CppCodeGenString* _stringLiteral182548436;
extern Il2CppCodeGenString* _stringLiteral120387999;
extern const uint32_t TileAnimator_Start_m190025111_MetadataUsageId;
extern "C"  void TileAnimator_Start_m190025111 (TileAnimator_t1251487515 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TileAnimator_Start_m190025111_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		float L_0 = __this->get_StartTime_2();
		Assert_IsTrue_m2900904701(NULL /*static, unused*/, (bool)((((int32_t)((!(((float)L_0) >= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0), _stringLiteral1107009114, /*hidden argument*/NULL);
		float L_1 = __this->get_Duration_3();
		Assert_IsTrue_m2900904701(NULL /*static, unused*/, (bool)((((float)L_1) > ((float)(0.0f)))? 1 : 0), _stringLiteral182548436, /*hidden argument*/NULL);
		float L_2 = __this->get_TotalAnimationTime_4();
		Assert_IsTrue_m2900904701(NULL /*static, unused*/, (bool)((((float)L_2) > ((float)(0.0f)))? 1 : 0), _stringLiteral120387999, /*hidden argument*/NULL);
		__this->set_timer_5((0.0f));
		return;
	}
}
// System.Void Tiled2Unity.TileAnimator::Update()
extern "C"  void TileAnimator_Update_m2637475796 (TileAnimator_t1251487515 * __this, const MethodInfo* method)
{
	MeshRenderer_t1268241104 * G_B5_0 = NULL;
	MeshRenderer_t1268241104 * G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	MeshRenderer_t1268241104 * G_B6_1 = NULL;
	{
		float L_0 = __this->get_timer_5();
		float L_1 = Time_get_deltaTime_m2233168104(NULL /*static, unused*/, /*hidden argument*/NULL);
		__this->set_timer_5(((float)((float)L_0+(float)L_1)));
		goto IL_002a;
	}

IL_0017:
	{
		float L_2 = __this->get_timer_5();
		float L_3 = __this->get_TotalAnimationTime_4();
		__this->set_timer_5(((float)((float)L_2-(float)L_3)));
	}

IL_002a:
	{
		float L_4 = __this->get_timer_5();
		float L_5 = __this->get_TotalAnimationTime_4();
		if ((((float)L_4) > ((float)L_5)))
		{
			goto IL_0017;
		}
	}
	{
		MeshRenderer_t1268241104 * L_6 = __this->get_meshRenderer_6();
		float L_7 = __this->get_timer_5();
		float L_8 = __this->get_StartTime_2();
		G_B4_0 = L_6;
		if ((!(((float)L_7) >= ((float)L_8))))
		{
			G_B5_0 = L_6;
			goto IL_0069;
		}
	}
	{
		float L_9 = __this->get_timer_5();
		float L_10 = __this->get_StartTime_2();
		float L_11 = __this->get_Duration_3();
		G_B6_0 = ((((float)L_9) < ((float)((float)((float)L_10+(float)L_11))))? 1 : 0);
		G_B6_1 = G_B4_0;
		goto IL_006a;
	}

IL_0069:
	{
		G_B6_0 = 0;
		G_B6_1 = G_B5_0;
	}

IL_006a:
	{
		Renderer_set_enabled_m142717579(G_B6_1, (bool)G_B6_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.TiledInitialShaderProperties::.ctor()
extern "C"  void TiledInitialShaderProperties__ctor_m169674058 (TiledInitialShaderProperties_t1898058332 * __this, const MethodInfo* method)
{
	{
		__this->set_InitialOpacity_2((1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Tiled2Unity.TiledInitialShaderProperties::Awake()
extern const MethodInfo* GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral895546098;
extern const uint32_t TiledInitialShaderProperties_Awake_m2057389079_MetadataUsageId;
extern "C"  void TiledInitialShaderProperties_Awake_m2057389079 (TiledInitialShaderProperties_t1898058332 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (TiledInitialShaderProperties_Awake_m2057389079_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	MeshRenderer_t1268241104 * V_0 = NULL;
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		MeshRenderer_t1268241104 * L_1 = GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632(L_0, /*hidden argument*/GameObject_GetComponent_TisMeshRenderer_t1268241104_m3528968632_MethodInfo_var);
		V_0 = L_1;
		float L_2 = __this->get_InitialOpacity_2();
		if ((((float)L_2) == ((float)(1.0f))))
		{
			goto IL_005b;
		}
	}
	{
		MeshRenderer_t1268241104 * L_3 = V_0;
		Material_t193706927 * L_4 = Renderer_get_material_m2553789785(L_3, /*hidden argument*/NULL);
		bool L_5 = Material_HasProperty_m3511389613(L_4, _stringLiteral895546098, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		MeshRenderer_t1268241104 * L_6 = V_0;
		Material_t193706927 * L_7 = Renderer_get_material_m2553789785(L_6, /*hidden argument*/NULL);
		float L_8 = __this->get_InitialOpacity_2();
		Color_t2020392075  L_9;
		memset(&L_9, 0, sizeof(L_9));
		Color__ctor_m1909920690(&L_9, (1.0f), (1.0f), (1.0f), L_8, /*hidden argument*/NULL);
		Material_SetColor_m650857509(L_7, _stringLiteral895546098, L_9, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void Tiled2Unity.TiledMap::.ctor()
extern "C"  void TiledMap__ctor_m2747019420 (TiledMap_t4203693682 * __this, const MethodInfo* method)
{
	{
		__this->set_ExportScale_11((1.0f));
		MonoBehaviour__ctor_m2464341955(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Tiled2Unity.TiledMap::GetMapWidthInPixelsScaled()
extern "C"  float TiledMap_GetMapWidthInPixelsScaled_m2351779916 (TiledMap_t4203693682 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = __this->get_MapWidthInPixels_12();
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_lossyScale_m1638545862(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_x_1();
		float L_4 = __this->get_ExportScale_11();
		return ((float)((float)((float)((float)(((float)((float)L_0)))*(float)L_3))*(float)L_4));
	}
}
// System.Single Tiled2Unity.TiledMap::GetMapHeightInPixelsScaled()
extern "C"  float TiledMap_GetMapHeightInPixelsScaled_m737105483 (TiledMap_t4203693682 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	{
		int32_t L_0 = __this->get_MapHeightInPixels_13();
		Transform_t3275118058 * L_1 = Component_get_transform_m2697483695(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_lossyScale_m1638545862(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		float L_3 = (&V_0)->get_y_2();
		float L_4 = __this->get_ExportScale_11();
		return ((float)((float)((float)((float)(((float)((float)L_0)))*(float)L_3))*(float)L_4));
	}
}
// UnityEngine.Rect Tiled2Unity.TiledMap::GetMapRect()
extern "C"  Rect_t3681755626  TiledMap_GetMapRect_m2769672278 (TiledMap_t4203693682 * __this, const MethodInfo* method)
{
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = __this->get_MapWidthInPixels_12();
		V_1 = (((float)((float)L_4)));
		int32_t L_5 = __this->get_MapHeightInPixels_13();
		V_2 = (((float)((float)L_5)));
		float L_6 = (&V_0)->get_x_1();
		float L_7 = (&V_0)->get_y_2();
		float L_8 = V_2;
		float L_9 = V_1;
		float L_10 = V_2;
		Rect_t3681755626  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Rect__ctor_m1220545469(&L_11, L_6, ((float)((float)L_7-(float)L_8)), L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// UnityEngine.Rect Tiled2Unity.TiledMap::GetMapRectInPixelsScaled()
extern "C"  Rect_t3681755626  TiledMap_GetMapRectInPixelsScaled_m2417645358 (TiledMap_t4203693682 * __this, const MethodInfo* method)
{
	Vector2_t2243707579  V_0;
	memset(&V_0, 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		Vector2_t2243707579  L_3 = Vector2_op_Implicit_m1064335535(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		float L_4 = TiledMap_GetMapWidthInPixelsScaled_m2351779916(__this, /*hidden argument*/NULL);
		V_1 = L_4;
		float L_5 = TiledMap_GetMapHeightInPixelsScaled_m737105483(__this, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = (&V_0)->get_x_1();
		float L_7 = (&V_0)->get_y_2();
		float L_8 = V_2;
		float L_9 = V_1;
		float L_10 = V_2;
		Rect_t3681755626  L_11;
		memset(&L_11, 0, sizeof(L_11));
		Rect__ctor_m1220545469(&L_11, L_6, ((float)((float)L_7-(float)L_8)), L_9, L_10, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.Boolean Tiled2Unity.TiledMap::AreTilesStaggered()
extern "C"  bool TiledMap_AreTilesStaggered_m1869245225 (TiledMap_t4203693682 * __this, const MethodInfo* method)
{
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = __this->get_Orientation_2();
		if ((((int32_t)L_0) == ((int32_t)2)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_1 = __this->get_Orientation_2();
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)3))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		return (bool)G_B3_0;
	}
}
// System.Void Tiled2Unity.TiledMap::OnDrawGizmosSelected()
extern "C"  void TiledMap_OnDrawGizmosSelected_m1076805017 (TiledMap_t4203693682 * __this, const MethodInfo* method)
{
	Vector3_t2243707580  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t2243707580  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t2243707580  V_2;
	memset(&V_2, 0, sizeof(V_2));
	Vector3_t2243707580  V_3;
	memset(&V_3, 0, sizeof(V_3));
	Vector3_t2243707580  V_4;
	memset(&V_4, 0, sizeof(V_4));
	float V_5 = 0.0f;
	{
		GameObject_t1756533147 * L_0 = Component_get_gameObject_m3105766835(__this, /*hidden argument*/NULL);
		Transform_t3275118058 * L_1 = GameObject_get_transform_m909382139(L_0, /*hidden argument*/NULL);
		Vector3_t2243707580  L_2 = Transform_get_position_m1104419803(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Vector3_t2243707580  L_3 = Vector3_get_zero_m1527993324(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t2243707580  L_4 = V_0;
		Vector3_t2243707580  L_5 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		float L_6 = TiledMap_GetMapWidthInPixelsScaled_m2351779916(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_7;
		memset(&L_7, 0, sizeof(L_7));
		Vector3__ctor_m2720820983(&L_7, L_6, (0.0f), /*hidden argument*/NULL);
		Vector3_t2243707580  L_8 = V_0;
		Vector3_t2243707580  L_9 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_7, L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		float L_10 = TiledMap_GetMapWidthInPixelsScaled_m2351779916(__this, /*hidden argument*/NULL);
		float L_11 = TiledMap_GetMapHeightInPixelsScaled_m737105483(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_12;
		memset(&L_12, 0, sizeof(L_12));
		Vector3__ctor_m2720820983(&L_12, L_10, ((-L_11)), /*hidden argument*/NULL);
		Vector3_t2243707580  L_13 = V_0;
		Vector3_t2243707580  L_14 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_12, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		float L_15 = TiledMap_GetMapHeightInPixelsScaled_m737105483(__this, /*hidden argument*/NULL);
		Vector3_t2243707580  L_16;
		memset(&L_16, 0, sizeof(L_16));
		Vector3__ctor_m2720820983(&L_16, (0.0f), ((-L_15)), /*hidden argument*/NULL);
		Vector3_t2243707580  L_17 = V_0;
		Vector3_t2243707580  L_18 = Vector3_op_Addition_m3146764857(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		int32_t L_19 = __this->get_NumLayers_6();
		V_5 = ((float)((float)(-1.0f)*(float)(((float)((float)L_19)))));
		Vector3_t2243707580 * L_20 = (&V_0);
		float L_21 = L_20->get_z_3();
		float L_22 = V_5;
		L_20->set_z_3(((float)((float)L_21+(float)L_22)));
		Vector3_t2243707580 * L_23 = (&V_1);
		float L_24 = L_23->get_z_3();
		float L_25 = V_5;
		L_23->set_z_3(((float)((float)L_24+(float)L_25)));
		Vector3_t2243707580 * L_26 = (&V_2);
		float L_27 = L_26->get_z_3();
		float L_28 = V_5;
		L_26->set_z_3(((float)((float)L_27+(float)L_28)));
		Vector3_t2243707580 * L_29 = (&V_3);
		float L_30 = L_29->get_z_3();
		float L_31 = V_5;
		L_29->set_z_3(((float)((float)L_30+(float)L_31)));
		Vector3_t2243707580 * L_32 = (&V_4);
		float L_33 = L_32->get_z_3();
		float L_34 = V_5;
		L_32->set_z_3(((float)((float)L_33+(float)L_34)));
		Color_t2020392075  L_35 = Color_get_blue_m4180825090(NULL /*static, unused*/, /*hidden argument*/NULL);
		Gizmos_set_color_m494992840(NULL /*static, unused*/, L_35, /*hidden argument*/NULL);
		Vector3_t2243707580  L_36 = V_1;
		Vector3_t2243707580  L_37 = V_2;
		Gizmos_DrawLine_m1315654064(NULL /*static, unused*/, L_36, L_37, /*hidden argument*/NULL);
		Vector3_t2243707580  L_38 = V_2;
		Vector3_t2243707580  L_39 = V_3;
		Gizmos_DrawLine_m1315654064(NULL /*static, unused*/, L_38, L_39, /*hidden argument*/NULL);
		Vector3_t2243707580  L_40 = V_3;
		Vector3_t2243707580  L_41 = V_4;
		Gizmos_DrawLine_m1315654064(NULL /*static, unused*/, L_40, L_41, /*hidden argument*/NULL);
		Vector3_t2243707580  L_42 = V_4;
		Vector3_t2243707580  L_43 = V_1;
		Gizmos_DrawLine_m1315654064(NULL /*static, unused*/, L_42, L_43, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
