#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Joystick
struct Joystick_t549888914;
// UnityEngine.Transform
struct Transform_t3275118058;
// UnityEngine.CharacterController
struct CharacterController_t4094781467;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraRelativeControl
struct  CameraRelativeControl_t2148727564  : public MonoBehaviour_t1158329972
{
public:
	// Joystick CameraRelativeControl::moveJoystick
	Joystick_t549888914 * ___moveJoystick_2;
	// Joystick CameraRelativeControl::rotateJoystick
	Joystick_t549888914 * ___rotateJoystick_3;
	// UnityEngine.Transform CameraRelativeControl::cameraPivot
	Transform_t3275118058 * ___cameraPivot_4;
	// UnityEngine.Transform CameraRelativeControl::cameraTransform
	Transform_t3275118058 * ___cameraTransform_5;
	// System.Single CameraRelativeControl::speed
	float ___speed_6;
	// System.Single CameraRelativeControl::jumpSpeed
	float ___jumpSpeed_7;
	// System.Single CameraRelativeControl::inAirMultiplier
	float ___inAirMultiplier_8;
	// UnityEngine.Vector2 CameraRelativeControl::rotationSpeed
	Vector2_t2243707579  ___rotationSpeed_9;
	// UnityEngine.Transform CameraRelativeControl::thisTransform
	Transform_t3275118058 * ___thisTransform_10;
	// UnityEngine.CharacterController CameraRelativeControl::character
	CharacterController_t4094781467 * ___character_11;
	// UnityEngine.Vector3 CameraRelativeControl::velocity
	Vector3_t2243707580  ___velocity_12;
	// System.Boolean CameraRelativeControl::canJump
	bool ___canJump_13;

public:
	inline static int32_t get_offset_of_moveJoystick_2() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___moveJoystick_2)); }
	inline Joystick_t549888914 * get_moveJoystick_2() const { return ___moveJoystick_2; }
	inline Joystick_t549888914 ** get_address_of_moveJoystick_2() { return &___moveJoystick_2; }
	inline void set_moveJoystick_2(Joystick_t549888914 * value)
	{
		___moveJoystick_2 = value;
		Il2CppCodeGenWriteBarrier(&___moveJoystick_2, value);
	}

	inline static int32_t get_offset_of_rotateJoystick_3() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___rotateJoystick_3)); }
	inline Joystick_t549888914 * get_rotateJoystick_3() const { return ___rotateJoystick_3; }
	inline Joystick_t549888914 ** get_address_of_rotateJoystick_3() { return &___rotateJoystick_3; }
	inline void set_rotateJoystick_3(Joystick_t549888914 * value)
	{
		___rotateJoystick_3 = value;
		Il2CppCodeGenWriteBarrier(&___rotateJoystick_3, value);
	}

	inline static int32_t get_offset_of_cameraPivot_4() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___cameraPivot_4)); }
	inline Transform_t3275118058 * get_cameraPivot_4() const { return ___cameraPivot_4; }
	inline Transform_t3275118058 ** get_address_of_cameraPivot_4() { return &___cameraPivot_4; }
	inline void set_cameraPivot_4(Transform_t3275118058 * value)
	{
		___cameraPivot_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraPivot_4, value);
	}

	inline static int32_t get_offset_of_cameraTransform_5() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___cameraTransform_5)); }
	inline Transform_t3275118058 * get_cameraTransform_5() const { return ___cameraTransform_5; }
	inline Transform_t3275118058 ** get_address_of_cameraTransform_5() { return &___cameraTransform_5; }
	inline void set_cameraTransform_5(Transform_t3275118058 * value)
	{
		___cameraTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___cameraTransform_5, value);
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_7() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___jumpSpeed_7)); }
	inline float get_jumpSpeed_7() const { return ___jumpSpeed_7; }
	inline float* get_address_of_jumpSpeed_7() { return &___jumpSpeed_7; }
	inline void set_jumpSpeed_7(float value)
	{
		___jumpSpeed_7 = value;
	}

	inline static int32_t get_offset_of_inAirMultiplier_8() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___inAirMultiplier_8)); }
	inline float get_inAirMultiplier_8() const { return ___inAirMultiplier_8; }
	inline float* get_address_of_inAirMultiplier_8() { return &___inAirMultiplier_8; }
	inline void set_inAirMultiplier_8(float value)
	{
		___inAirMultiplier_8 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_9() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___rotationSpeed_9)); }
	inline Vector2_t2243707579  get_rotationSpeed_9() const { return ___rotationSpeed_9; }
	inline Vector2_t2243707579 * get_address_of_rotationSpeed_9() { return &___rotationSpeed_9; }
	inline void set_rotationSpeed_9(Vector2_t2243707579  value)
	{
		___rotationSpeed_9 = value;
	}

	inline static int32_t get_offset_of_thisTransform_10() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___thisTransform_10)); }
	inline Transform_t3275118058 * get_thisTransform_10() const { return ___thisTransform_10; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_10() { return &___thisTransform_10; }
	inline void set_thisTransform_10(Transform_t3275118058 * value)
	{
		___thisTransform_10 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_10, value);
	}

	inline static int32_t get_offset_of_character_11() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___character_11)); }
	inline CharacterController_t4094781467 * get_character_11() const { return ___character_11; }
	inline CharacterController_t4094781467 ** get_address_of_character_11() { return &___character_11; }
	inline void set_character_11(CharacterController_t4094781467 * value)
	{
		___character_11 = value;
		Il2CppCodeGenWriteBarrier(&___character_11, value);
	}

	inline static int32_t get_offset_of_velocity_12() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___velocity_12)); }
	inline Vector3_t2243707580  get_velocity_12() const { return ___velocity_12; }
	inline Vector3_t2243707580 * get_address_of_velocity_12() { return &___velocity_12; }
	inline void set_velocity_12(Vector3_t2243707580  value)
	{
		___velocity_12 = value;
	}

	inline static int32_t get_offset_of_canJump_13() { return static_cast<int32_t>(offsetof(CameraRelativeControl_t2148727564, ___canJump_13)); }
	inline bool get_canJump_13() const { return ___canJump_13; }
	inline bool* get_address_of_canJump_13() { return &___canJump_13; }
	inline void set_canJump_13(bool value)
	{
		___canJump_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
