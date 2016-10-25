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

// PlayerRelativeControl
struct  PlayerRelativeControl_t3563042974  : public MonoBehaviour_t1158329972
{
public:
	// Joystick PlayerRelativeControl::moveJoystick
	Joystick_t549888914 * ___moveJoystick_2;
	// Joystick PlayerRelativeControl::rotateJoystick
	Joystick_t549888914 * ___rotateJoystick_3;
	// UnityEngine.Transform PlayerRelativeControl::cameraPivot
	Transform_t3275118058 * ___cameraPivot_4;
	// System.Single PlayerRelativeControl::forwardSpeed
	float ___forwardSpeed_5;
	// System.Single PlayerRelativeControl::backwardSpeed
	float ___backwardSpeed_6;
	// System.Single PlayerRelativeControl::sidestepSpeed
	float ___sidestepSpeed_7;
	// System.Single PlayerRelativeControl::jumpSpeed
	float ___jumpSpeed_8;
	// System.Single PlayerRelativeControl::inAirMultiplier
	float ___inAirMultiplier_9;
	// UnityEngine.Vector2 PlayerRelativeControl::rotationSpeed
	Vector2_t2243707579  ___rotationSpeed_10;
	// UnityEngine.Transform PlayerRelativeControl::thisTransform
	Transform_t3275118058 * ___thisTransform_11;
	// UnityEngine.CharacterController PlayerRelativeControl::character
	CharacterController_t4094781467 * ___character_12;
	// UnityEngine.Vector3 PlayerRelativeControl::cameraVelocity
	Vector3_t2243707580  ___cameraVelocity_13;
	// UnityEngine.Vector3 PlayerRelativeControl::velocity
	Vector3_t2243707580  ___velocity_14;

public:
	inline static int32_t get_offset_of_moveJoystick_2() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___moveJoystick_2)); }
	inline Joystick_t549888914 * get_moveJoystick_2() const { return ___moveJoystick_2; }
	inline Joystick_t549888914 ** get_address_of_moveJoystick_2() { return &___moveJoystick_2; }
	inline void set_moveJoystick_2(Joystick_t549888914 * value)
	{
		___moveJoystick_2 = value;
		Il2CppCodeGenWriteBarrier(&___moveJoystick_2, value);
	}

	inline static int32_t get_offset_of_rotateJoystick_3() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___rotateJoystick_3)); }
	inline Joystick_t549888914 * get_rotateJoystick_3() const { return ___rotateJoystick_3; }
	inline Joystick_t549888914 ** get_address_of_rotateJoystick_3() { return &___rotateJoystick_3; }
	inline void set_rotateJoystick_3(Joystick_t549888914 * value)
	{
		___rotateJoystick_3 = value;
		Il2CppCodeGenWriteBarrier(&___rotateJoystick_3, value);
	}

	inline static int32_t get_offset_of_cameraPivot_4() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___cameraPivot_4)); }
	inline Transform_t3275118058 * get_cameraPivot_4() const { return ___cameraPivot_4; }
	inline Transform_t3275118058 ** get_address_of_cameraPivot_4() { return &___cameraPivot_4; }
	inline void set_cameraPivot_4(Transform_t3275118058 * value)
	{
		___cameraPivot_4 = value;
		Il2CppCodeGenWriteBarrier(&___cameraPivot_4, value);
	}

	inline static int32_t get_offset_of_forwardSpeed_5() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___forwardSpeed_5)); }
	inline float get_forwardSpeed_5() const { return ___forwardSpeed_5; }
	inline float* get_address_of_forwardSpeed_5() { return &___forwardSpeed_5; }
	inline void set_forwardSpeed_5(float value)
	{
		___forwardSpeed_5 = value;
	}

	inline static int32_t get_offset_of_backwardSpeed_6() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___backwardSpeed_6)); }
	inline float get_backwardSpeed_6() const { return ___backwardSpeed_6; }
	inline float* get_address_of_backwardSpeed_6() { return &___backwardSpeed_6; }
	inline void set_backwardSpeed_6(float value)
	{
		___backwardSpeed_6 = value;
	}

	inline static int32_t get_offset_of_sidestepSpeed_7() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___sidestepSpeed_7)); }
	inline float get_sidestepSpeed_7() const { return ___sidestepSpeed_7; }
	inline float* get_address_of_sidestepSpeed_7() { return &___sidestepSpeed_7; }
	inline void set_sidestepSpeed_7(float value)
	{
		___sidestepSpeed_7 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_8() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___jumpSpeed_8)); }
	inline float get_jumpSpeed_8() const { return ___jumpSpeed_8; }
	inline float* get_address_of_jumpSpeed_8() { return &___jumpSpeed_8; }
	inline void set_jumpSpeed_8(float value)
	{
		___jumpSpeed_8 = value;
	}

	inline static int32_t get_offset_of_inAirMultiplier_9() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___inAirMultiplier_9)); }
	inline float get_inAirMultiplier_9() const { return ___inAirMultiplier_9; }
	inline float* get_address_of_inAirMultiplier_9() { return &___inAirMultiplier_9; }
	inline void set_inAirMultiplier_9(float value)
	{
		___inAirMultiplier_9 = value;
	}

	inline static int32_t get_offset_of_rotationSpeed_10() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___rotationSpeed_10)); }
	inline Vector2_t2243707579  get_rotationSpeed_10() const { return ___rotationSpeed_10; }
	inline Vector2_t2243707579 * get_address_of_rotationSpeed_10() { return &___rotationSpeed_10; }
	inline void set_rotationSpeed_10(Vector2_t2243707579  value)
	{
		___rotationSpeed_10 = value;
	}

	inline static int32_t get_offset_of_thisTransform_11() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___thisTransform_11)); }
	inline Transform_t3275118058 * get_thisTransform_11() const { return ___thisTransform_11; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_11() { return &___thisTransform_11; }
	inline void set_thisTransform_11(Transform_t3275118058 * value)
	{
		___thisTransform_11 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_11, value);
	}

	inline static int32_t get_offset_of_character_12() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___character_12)); }
	inline CharacterController_t4094781467 * get_character_12() const { return ___character_12; }
	inline CharacterController_t4094781467 ** get_address_of_character_12() { return &___character_12; }
	inline void set_character_12(CharacterController_t4094781467 * value)
	{
		___character_12 = value;
		Il2CppCodeGenWriteBarrier(&___character_12, value);
	}

	inline static int32_t get_offset_of_cameraVelocity_13() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___cameraVelocity_13)); }
	inline Vector3_t2243707580  get_cameraVelocity_13() const { return ___cameraVelocity_13; }
	inline Vector3_t2243707580 * get_address_of_cameraVelocity_13() { return &___cameraVelocity_13; }
	inline void set_cameraVelocity_13(Vector3_t2243707580  value)
	{
		___cameraVelocity_13 = value;
	}

	inline static int32_t get_offset_of_velocity_14() { return static_cast<int32_t>(offsetof(PlayerRelativeControl_t3563042974, ___velocity_14)); }
	inline Vector3_t2243707580  get_velocity_14() const { return ___velocity_14; }
	inline Vector3_t2243707580 * get_address_of_velocity_14() { return &___velocity_14; }
	inline void set_velocity_14(Vector3_t2243707580  value)
	{
		___velocity_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
