#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.GUITexture
struct GUITexture_t1909122990;
// ZoomCamera
struct ZoomCamera_t1774768672;
// UnityEngine.Camera
struct Camera_t189460977;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;
// System.Int32[]
struct Int32U5BU5D_t3030399641;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t686124026;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "AssemblyU2DUnityScript_ControlState460326334.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// tapcontrol
struct  tapcontrol_t1074770770  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject tapcontrol::cameraObject
	GameObject_t1756533147 * ___cameraObject_2;
	// UnityEngine.Transform tapcontrol::cameraPivot
	Transform_t3275118058 * ___cameraPivot_3;
	// UnityEngine.GUITexture tapcontrol::jumpButton
	GUITexture_t1909122990 * ___jumpButton_4;
	// System.Single tapcontrol::speed
	float ___speed_5;
	// System.Single tapcontrol::jumpSpeed
	float ___jumpSpeed_6;
	// System.Single tapcontrol::inAirMultiplier
	float ___inAirMultiplier_7;
	// System.Single tapcontrol::minimumDistanceToMove
	float ___minimumDistanceToMove_8;
	// System.Single tapcontrol::minimumTimeUntilMove
	float ___minimumTimeUntilMove_9;
	// System.Boolean tapcontrol::zoomEnabled
	bool ___zoomEnabled_10;
	// System.Single tapcontrol::zoomEpsilon
	float ___zoomEpsilon_11;
	// System.Single tapcontrol::zoomRate
	float ___zoomRate_12;
	// System.Boolean tapcontrol::rotateEnabled
	bool ___rotateEnabled_13;
	// System.Single tapcontrol::rotateEpsilon
	float ___rotateEpsilon_14;
	// ZoomCamera tapcontrol::zoomCamera
	ZoomCamera_t1774768672 * ___zoomCamera_15;
	// UnityEngine.Camera tapcontrol::cam
	Camera_t189460977 * ___cam_16;
	// UnityEngine.Transform tapcontrol::thisTransform
	Transform_t3275118058 * ___thisTransform_17;
	// UnityEngine.CharacterController tapcontrol::character
	CharacterController_t4094781467 * ___character_18;
	// UnityEngine.Vector3 tapcontrol::targetLocation
	Vector3_t2243707580  ___targetLocation_19;
	// System.Boolean tapcontrol::moving
	bool ___moving_20;
	// System.Single tapcontrol::rotationTarget
	float ___rotationTarget_21;
	// System.Single tapcontrol::rotationVelocity
	float ___rotationVelocity_22;
	// UnityEngine.Vector3 tapcontrol::velocity
	Vector3_t2243707580  ___velocity_23;
	// ControlState tapcontrol::state
	int32_t ___state_24;
	// System.Int32[] tapcontrol::fingerDown
	Int32U5BU5D_t3030399641* ___fingerDown_25;
	// UnityEngine.Vector2[] tapcontrol::fingerDownPosition
	Vector2U5BU5D_t686124026* ___fingerDownPosition_26;
	// System.Int32[] tapcontrol::fingerDownFrame
	Int32U5BU5D_t3030399641* ___fingerDownFrame_27;
	// System.Single tapcontrol::firstTouchTime
	float ___firstTouchTime_28;

public:
	inline static int32_t get_offset_of_cameraObject_2() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___cameraObject_2)); }
	inline GameObject_t1756533147 * get_cameraObject_2() const { return ___cameraObject_2; }
	inline GameObject_t1756533147 ** get_address_of_cameraObject_2() { return &___cameraObject_2; }
	inline void set_cameraObject_2(GameObject_t1756533147 * value)
	{
		___cameraObject_2 = value;
		Il2CppCodeGenWriteBarrier(&___cameraObject_2, value);
	}

	inline static int32_t get_offset_of_cameraPivot_3() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___cameraPivot_3)); }
	inline Transform_t3275118058 * get_cameraPivot_3() const { return ___cameraPivot_3; }
	inline Transform_t3275118058 ** get_address_of_cameraPivot_3() { return &___cameraPivot_3; }
	inline void set_cameraPivot_3(Transform_t3275118058 * value)
	{
		___cameraPivot_3 = value;
		Il2CppCodeGenWriteBarrier(&___cameraPivot_3, value);
	}

	inline static int32_t get_offset_of_jumpButton_4() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___jumpButton_4)); }
	inline GUITexture_t1909122990 * get_jumpButton_4() const { return ___jumpButton_4; }
	inline GUITexture_t1909122990 ** get_address_of_jumpButton_4() { return &___jumpButton_4; }
	inline void set_jumpButton_4(GUITexture_t1909122990 * value)
	{
		___jumpButton_4 = value;
		Il2CppCodeGenWriteBarrier(&___jumpButton_4, value);
	}

	inline static int32_t get_offset_of_speed_5() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___speed_5)); }
	inline float get_speed_5() const { return ___speed_5; }
	inline float* get_address_of_speed_5() { return &___speed_5; }
	inline void set_speed_5(float value)
	{
		___speed_5 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_6() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___jumpSpeed_6)); }
	inline float get_jumpSpeed_6() const { return ___jumpSpeed_6; }
	inline float* get_address_of_jumpSpeed_6() { return &___jumpSpeed_6; }
	inline void set_jumpSpeed_6(float value)
	{
		___jumpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_inAirMultiplier_7() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___inAirMultiplier_7)); }
	inline float get_inAirMultiplier_7() const { return ___inAirMultiplier_7; }
	inline float* get_address_of_inAirMultiplier_7() { return &___inAirMultiplier_7; }
	inline void set_inAirMultiplier_7(float value)
	{
		___inAirMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_minimumDistanceToMove_8() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___minimumDistanceToMove_8)); }
	inline float get_minimumDistanceToMove_8() const { return ___minimumDistanceToMove_8; }
	inline float* get_address_of_minimumDistanceToMove_8() { return &___minimumDistanceToMove_8; }
	inline void set_minimumDistanceToMove_8(float value)
	{
		___minimumDistanceToMove_8 = value;
	}

	inline static int32_t get_offset_of_minimumTimeUntilMove_9() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___minimumTimeUntilMove_9)); }
	inline float get_minimumTimeUntilMove_9() const { return ___minimumTimeUntilMove_9; }
	inline float* get_address_of_minimumTimeUntilMove_9() { return &___minimumTimeUntilMove_9; }
	inline void set_minimumTimeUntilMove_9(float value)
	{
		___minimumTimeUntilMove_9 = value;
	}

	inline static int32_t get_offset_of_zoomEnabled_10() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___zoomEnabled_10)); }
	inline bool get_zoomEnabled_10() const { return ___zoomEnabled_10; }
	inline bool* get_address_of_zoomEnabled_10() { return &___zoomEnabled_10; }
	inline void set_zoomEnabled_10(bool value)
	{
		___zoomEnabled_10 = value;
	}

	inline static int32_t get_offset_of_zoomEpsilon_11() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___zoomEpsilon_11)); }
	inline float get_zoomEpsilon_11() const { return ___zoomEpsilon_11; }
	inline float* get_address_of_zoomEpsilon_11() { return &___zoomEpsilon_11; }
	inline void set_zoomEpsilon_11(float value)
	{
		___zoomEpsilon_11 = value;
	}

	inline static int32_t get_offset_of_zoomRate_12() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___zoomRate_12)); }
	inline float get_zoomRate_12() const { return ___zoomRate_12; }
	inline float* get_address_of_zoomRate_12() { return &___zoomRate_12; }
	inline void set_zoomRate_12(float value)
	{
		___zoomRate_12 = value;
	}

	inline static int32_t get_offset_of_rotateEnabled_13() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___rotateEnabled_13)); }
	inline bool get_rotateEnabled_13() const { return ___rotateEnabled_13; }
	inline bool* get_address_of_rotateEnabled_13() { return &___rotateEnabled_13; }
	inline void set_rotateEnabled_13(bool value)
	{
		___rotateEnabled_13 = value;
	}

	inline static int32_t get_offset_of_rotateEpsilon_14() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___rotateEpsilon_14)); }
	inline float get_rotateEpsilon_14() const { return ___rotateEpsilon_14; }
	inline float* get_address_of_rotateEpsilon_14() { return &___rotateEpsilon_14; }
	inline void set_rotateEpsilon_14(float value)
	{
		___rotateEpsilon_14 = value;
	}

	inline static int32_t get_offset_of_zoomCamera_15() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___zoomCamera_15)); }
	inline ZoomCamera_t1774768672 * get_zoomCamera_15() const { return ___zoomCamera_15; }
	inline ZoomCamera_t1774768672 ** get_address_of_zoomCamera_15() { return &___zoomCamera_15; }
	inline void set_zoomCamera_15(ZoomCamera_t1774768672 * value)
	{
		___zoomCamera_15 = value;
		Il2CppCodeGenWriteBarrier(&___zoomCamera_15, value);
	}

	inline static int32_t get_offset_of_cam_16() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___cam_16)); }
	inline Camera_t189460977 * get_cam_16() const { return ___cam_16; }
	inline Camera_t189460977 ** get_address_of_cam_16() { return &___cam_16; }
	inline void set_cam_16(Camera_t189460977 * value)
	{
		___cam_16 = value;
		Il2CppCodeGenWriteBarrier(&___cam_16, value);
	}

	inline static int32_t get_offset_of_thisTransform_17() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___thisTransform_17)); }
	inline Transform_t3275118058 * get_thisTransform_17() const { return ___thisTransform_17; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_17() { return &___thisTransform_17; }
	inline void set_thisTransform_17(Transform_t3275118058 * value)
	{
		___thisTransform_17 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_17, value);
	}

	inline static int32_t get_offset_of_character_18() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___character_18)); }
	inline CharacterController_t4094781467 * get_character_18() const { return ___character_18; }
	inline CharacterController_t4094781467 ** get_address_of_character_18() { return &___character_18; }
	inline void set_character_18(CharacterController_t4094781467 * value)
	{
		___character_18 = value;
		Il2CppCodeGenWriteBarrier(&___character_18, value);
	}

	inline static int32_t get_offset_of_targetLocation_19() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___targetLocation_19)); }
	inline Vector3_t2243707580  get_targetLocation_19() const { return ___targetLocation_19; }
	inline Vector3_t2243707580 * get_address_of_targetLocation_19() { return &___targetLocation_19; }
	inline void set_targetLocation_19(Vector3_t2243707580  value)
	{
		___targetLocation_19 = value;
	}

	inline static int32_t get_offset_of_moving_20() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___moving_20)); }
	inline bool get_moving_20() const { return ___moving_20; }
	inline bool* get_address_of_moving_20() { return &___moving_20; }
	inline void set_moving_20(bool value)
	{
		___moving_20 = value;
	}

	inline static int32_t get_offset_of_rotationTarget_21() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___rotationTarget_21)); }
	inline float get_rotationTarget_21() const { return ___rotationTarget_21; }
	inline float* get_address_of_rotationTarget_21() { return &___rotationTarget_21; }
	inline void set_rotationTarget_21(float value)
	{
		___rotationTarget_21 = value;
	}

	inline static int32_t get_offset_of_rotationVelocity_22() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___rotationVelocity_22)); }
	inline float get_rotationVelocity_22() const { return ___rotationVelocity_22; }
	inline float* get_address_of_rotationVelocity_22() { return &___rotationVelocity_22; }
	inline void set_rotationVelocity_22(float value)
	{
		___rotationVelocity_22 = value;
	}

	inline static int32_t get_offset_of_velocity_23() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___velocity_23)); }
	inline Vector3_t2243707580  get_velocity_23() const { return ___velocity_23; }
	inline Vector3_t2243707580 * get_address_of_velocity_23() { return &___velocity_23; }
	inline void set_velocity_23(Vector3_t2243707580  value)
	{
		___velocity_23 = value;
	}

	inline static int32_t get_offset_of_state_24() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___state_24)); }
	inline int32_t get_state_24() const { return ___state_24; }
	inline int32_t* get_address_of_state_24() { return &___state_24; }
	inline void set_state_24(int32_t value)
	{
		___state_24 = value;
	}

	inline static int32_t get_offset_of_fingerDown_25() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___fingerDown_25)); }
	inline Int32U5BU5D_t3030399641* get_fingerDown_25() const { return ___fingerDown_25; }
	inline Int32U5BU5D_t3030399641** get_address_of_fingerDown_25() { return &___fingerDown_25; }
	inline void set_fingerDown_25(Int32U5BU5D_t3030399641* value)
	{
		___fingerDown_25 = value;
		Il2CppCodeGenWriteBarrier(&___fingerDown_25, value);
	}

	inline static int32_t get_offset_of_fingerDownPosition_26() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___fingerDownPosition_26)); }
	inline Vector2U5BU5D_t686124026* get_fingerDownPosition_26() const { return ___fingerDownPosition_26; }
	inline Vector2U5BU5D_t686124026** get_address_of_fingerDownPosition_26() { return &___fingerDownPosition_26; }
	inline void set_fingerDownPosition_26(Vector2U5BU5D_t686124026* value)
	{
		___fingerDownPosition_26 = value;
		Il2CppCodeGenWriteBarrier(&___fingerDownPosition_26, value);
	}

	inline static int32_t get_offset_of_fingerDownFrame_27() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___fingerDownFrame_27)); }
	inline Int32U5BU5D_t3030399641* get_fingerDownFrame_27() const { return ___fingerDownFrame_27; }
	inline Int32U5BU5D_t3030399641** get_address_of_fingerDownFrame_27() { return &___fingerDownFrame_27; }
	inline void set_fingerDownFrame_27(Int32U5BU5D_t3030399641* value)
	{
		___fingerDownFrame_27 = value;
		Il2CppCodeGenWriteBarrier(&___fingerDownFrame_27, value);
	}

	inline static int32_t get_offset_of_firstTouchTime_28() { return static_cast<int32_t>(offsetof(tapcontrol_t1074770770, ___firstTouchTime_28)); }
	inline float get_firstTouchTime_28() const { return ___firstTouchTime_28; }
	inline float* get_address_of_firstTouchTime_28() { return &___firstTouchTime_28; }
	inline void set_firstTouchTime_28(float value)
	{
		___firstTouchTime_28 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
