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

// FirstPersonControl
struct  FirstPersonControl_t3938618808  : public MonoBehaviour_t1158329972
{
public:
	// Joystick FirstPersonControl::moveTouchPad
	Joystick_t549888914 * ___moveTouchPad_2;
	// Joystick FirstPersonControl::rotateTouchPad
	Joystick_t549888914 * ___rotateTouchPad_3;
	// UnityEngine.Transform FirstPersonControl::cameraPivot
	Transform_t3275118058 * ___cameraPivot_4;
	// System.Single FirstPersonControl::forwardSpeed
	float ___forwardSpeed_5;
	// System.Single FirstPersonControl::backwardSpeed
	float ___backwardSpeed_6;
	// System.Single FirstPersonControl::sidestepSpeed
	float ___sidestepSpeed_7;
	// System.Single FirstPersonControl::jumpSpeed
	float ___jumpSpeed_8;
	// System.Single FirstPersonControl::inAirMultiplier
	float ___inAirMultiplier_9;
	// UnityEngine.Vector2 FirstPersonControl::rotationSpeed
	Vector2_t2243707579  ___rotationSpeed_10;
	// System.Single FirstPersonControl::tiltPositiveYAxis
	float ___tiltPositiveYAxis_11;
	// System.Single FirstPersonControl::tiltNegativeYAxis
	float ___tiltNegativeYAxis_12;
	// System.Single FirstPersonControl::tiltXAxisMinimum
	float ___tiltXAxisMinimum_13;
	// UnityEngine.Transform FirstPersonControl::thisTransform
	Transform_t3275118058 * ___thisTransform_14;
	// UnityEngine.CharacterController FirstPersonControl::character
	CharacterController_t4094781467 * ___character_15;
	// UnityEngine.Vector3 FirstPersonControl::cameraVelocity
	Vector3_t2243707580  ___cameraVelocity_16;
	// UnityEngine.Vector3 FirstPersonControl::velocity
	Vector3_t2243707580  ___velocity_17;
	// System.Boolean FirstPersonControl::canJump
	bool ___canJump_18;

public:
	inline static int32_t get_offset_of_moveTouchPad_2() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___moveTouchPad_2)); }
	inline Joystick_t549888914 * get_moveTouchPad_2() const { return ___moveTouchPad_2; }
	inline Joystick_t549888914 ** get_address_of_moveTouchPad_2() { return &___moveTouchPad_2; }
	inline void set_moveTouchPad_2(Joystick_t549888914 * value)
	{
		___moveTouchPad_2 = value;
		Il2CppCodeGenWriteBarrier(&___moveTouchPad_2, value);
	}

	inline static int32_t get_offset_of_rotateTouchPad_3() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___rotateTouchPad_3)); }
	inline Joystick_t549888914 * get_rotateTouchPad_3() const { return ___rotateTouchPad_3; }
	inline Joystick_t549888914 ** get_address_of_rotateTouchPad_3() { return &___rotateTouchPad_3; }
	inline void set_rotateTouchPad_3(Joystick_t549888914 * value)
	{
		___rotateTouchPad_3 = value;
		Il2CppCodeGenWriteBarrier(&___rotateTouchPad_3, value);
	}

	inline static int32_t get_offset_of_cameraPivot_4() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___cameraPivot_4)); }
	inline Transform_t3275118058 * get_cameraPivot_4() const { return ___cameraPivot_4; }
	inline Transform_t3275118058 ** get_address_of_cameraPivot_4() { return &___cameraPivot_4; }
	inline void set_cameraPivot_4(Transform_t3275118058 * value)
	{
		___cameraPivot_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraPivot_4, value);
	}

	inline static int32_t get_offset_of_forwardSpeed_5() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___forwardSpeed_5)); }
	inline float get_forwardSpeed_5() const { return ___forwardSpeed_5; }
	inline float* get_address_of_forwardSpeed_5() { return &___forwardSpeed_5; }
	inline void set_forwardSpeed_5(float value)
	{
		___forwardSpeed_5 = value;
	}

	inline static int32_t get_offset_of_backwardSpeed_6() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___backwardSpeed_6)); }
	inline float get_backwardSpeed_6() const { return ___backwardSpeed_6; }
	inline float* get_address_of_backwardSpeed_6() { return &___backwardSpeed_6; }
	inline void set_backwardSpeed_6(float value)
	{
		___backwardSpeed_6 = value;
	}

	inline static int32_t get_offset_of_sidestepSpeed_7() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___sidestepSpeed_7)); }
	inline float get_sidestepSpeed_7() const { return ___sidestepSpeed_7; }
	inline float* get_address_of_sidestepSpeed_7() { return &___sidestepSpeed_7; }
	inline void set_sidestepSpeed_7(float value)
	{
		___sidestepSpeed_7 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_8() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___jumpSpeed_8)); }
	inline float get_jumpSpeed_8() const { return ___jumpSpeed_8; }
	inline float* get_address_of_jumpSpeed_8() { return &___jumpSpeed_8; }
	inline void set_jumpSpeed_8(float value)
	{
		___jumpSpeed_8 = value;
	}

	inline static int32_t get_offset_of_inAirMultiplier_9() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___inAirMultiplier_9)); }
	inline float get_inAirMultiplier_9() const { return ___inAirMultiplier_9; }
	inline float* get_address_of_inAirMultiplier_9() { return &___inAirMultiplier_9; }
	inline void set_inAirMultiplier_9(float value)
	{
		___inAirMultiplier_9 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_10() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___rotationSpeed_10)); }
	inline Vector2_t2243707579  get_rotationSpeed_10() const { return ___rotationSpeed_10; }
	inline Vector2_t2243707579 * get_address_of_rotationSpeed_10() { return &___rotationSpeed_10; }
	inline void set_rotationSpeed_10(Vector2_t2243707579  value)
	{
		___rotationSpeed_10 = value;
	}

	inline static int32_t get_offset_of_tiltPositiveYAxis_11() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___tiltPositiveYAxis_11)); }
	inline float get_tiltPositiveYAxis_11() const { return ___tiltPositiveYAxis_11; }
	inline float* get_address_of_tiltPositiveYAxis_11() { return &___tiltPositiveYAxis_11; }
	inline void set_tiltPositiveYAxis_11(float value)
	{
		___tiltPositiveYAxis_11 = value;
	}

	inline static int32_t get_offset_of_tiltNegativeYAxis_12() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___tiltNegativeYAxis_12)); }
	inline float get_tiltNegativeYAxis_12() const { return ___tiltNegativeYAxis_12; }
	inline float* get_address_of_tiltNegativeYAxis_12() { return &___tiltNegativeYAxis_12; }
	inline void set_tiltNegativeYAxis_12(float value)
	{
		___tiltNegativeYAxis_12 = value;
	}

	inline static int32_t get_offset_of_tiltXAxisMinimum_13() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___tiltXAxisMinimum_13)); }
	inline float get_tiltXAxisMinimum_13() const { return ___tiltXAxisMinimum_13; }
	inline float* get_address_of_tiltXAxisMinimum_13() { return &___tiltXAxisMinimum_13; }
	inline void set_tiltXAxisMinimum_13(float value)
	{
		___tiltXAxisMinimum_13 = value;
	}

	inline static int32_t get_offset_of_thisTransform_14() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___thisTransform_14)); }
	inline Transform_t3275118058 * get_thisTransform_14() const { return ___thisTransform_14; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_14() { return &___thisTransform_14; }
	inline void set_thisTransform_14(Transform_t3275118058 * value)
	{
		___thisTransform_14 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_14, value);
	}

	inline static int32_t get_offset_of_character_15() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___character_15)); }
	inline CharacterController_t4094781467 * get_character_15() const { return ___character_15; }
	inline CharacterController_t4094781467 ** get_address_of_character_15() { return &___character_15; }
	inline void set_character_15(CharacterController_t4094781467 * value)
	{
		___character_15 = value;
		Il2CppCodeGenWriteBarrier(&___character_15, value);
	}

	inline static int32_t get_offset_of_cameraVelocity_16() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___cameraVelocity_16)); }
	inline Vector3_t2243707580  get_cameraVelocity_16() const { return ___cameraVelocity_16; }
	inline Vector3_t2243707580 * get_address_of_cameraVelocity_16() { return &___cameraVelocity_16; }
	inline void set_cameraVelocity_16(Vector3_t2243707580  value)
	{
		___cameraVelocity_16 = value;
	}

	inline static int32_t get_offset_of_velocity_17() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___velocity_17)); }
	inline Vector3_t2243707580  get_velocity_17() const { return ___velocity_17; }
	inline Vector3_t2243707580 * get_address_of_velocity_17() { return &___velocity_17; }
	inline void set_velocity_17(Vector3_t2243707580  value)
	{
		___velocity_17 = value;
	}

	inline static int32_t get_offset_of_canJump_18() { return static_cast<int32_t>(offsetof(FirstPersonControl_t3938618808, ___canJump_18)); }
	inline bool get_canJump_18() const { return ___canJump_18; }
	inline bool* get_address_of_canJump_18() { return &___canJump_18; }
	inline void set_canJump_18(bool value)
	{
		___canJump_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
