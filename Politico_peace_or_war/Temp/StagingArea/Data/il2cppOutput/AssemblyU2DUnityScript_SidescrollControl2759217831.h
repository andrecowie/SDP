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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SidescrollControl
struct  SidescrollControl_t2759217831  : public MonoBehaviour_t1158329972
{
public:
	// Joystick SidescrollControl::moveTouchPad
	Joystick_t549888914 * ___moveTouchPad_2;
	// Joystick SidescrollControl::jumpTouchPad
	Joystick_t549888914 * ___jumpTouchPad_3;
	// System.Single SidescrollControl::forwardSpeed
	float ___forwardSpeed_4;
	// System.Single SidescrollControl::backwardSpeed
	float ___backwardSpeed_5;
	// System.Single SidescrollControl::jumpSpeed
	float ___jumpSpeed_6;
	// System.Single SidescrollControl::inAirMultiplier
	float ___inAirMultiplier_7;
	// UnityEngine.Transform SidescrollControl::thisTransform
	Transform_t3275118058 * ___thisTransform_8;
	// UnityEngine.CharacterController SidescrollControl::character
	CharacterController_t4094781467 * ___character_9;
	// UnityEngine.Vector3 SidescrollControl::velocity
	Vector3_t2243707580  ___velocity_10;
	// System.Boolean SidescrollControl::canJump
	bool ___canJump_11;

public:
	inline static int32_t get_offset_of_moveTouchPad_2() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___moveTouchPad_2)); }
	inline Joystick_t549888914 * get_moveTouchPad_2() const { return ___moveTouchPad_2; }
	inline Joystick_t549888914 ** get_address_of_moveTouchPad_2() { return &___moveTouchPad_2; }
	inline void set_moveTouchPad_2(Joystick_t549888914 * value)
	{
		___moveTouchPad_2 = value;
		Il2CppCodeGenWriteBarrier(&___moveTouchPad_2, value);
	}

	inline static int32_t get_offset_of_jumpTouchPad_3() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___jumpTouchPad_3)); }
	inline Joystick_t549888914 * get_jumpTouchPad_3() const { return ___jumpTouchPad_3; }
	inline Joystick_t549888914 ** get_address_of_jumpTouchPad_3() { return &___jumpTouchPad_3; }
	inline void set_jumpTouchPad_3(Joystick_t549888914 * value)
	{
		___jumpTouchPad_3 = value;
		Il2CppCodeGenWriteBarrier(&___jumpTouchPad_3, value);
	}

	inline static int32_t get_offset_of_forwardSpeed_4() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___forwardSpeed_4)); }
	inline float get_forwardSpeed_4() const { return ___forwardSpeed_4; }
	inline float* get_address_of_forwardSpeed_4() { return &___forwardSpeed_4; }
	inline void set_forwardSpeed_4(float value)
	{
		___forwardSpeed_4 = value;
	}

	inline static int32_t get_offset_of_backwardSpeed_5() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___backwardSpeed_5)); }
	inline float get_backwardSpeed_5() const { return ___backwardSpeed_5; }
	inline float* get_address_of_backwardSpeed_5() { return &___backwardSpeed_5; }
	inline void set_backwardSpeed_5(float value)
	{
		___backwardSpeed_5 = value;
	}

	inline static int32_t get_offset_of_jumpSpeed_6() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___jumpSpeed_6)); }
	inline float get_jumpSpeed_6() const { return ___jumpSpeed_6; }
	inline float* get_address_of_jumpSpeed_6() { return &___jumpSpeed_6; }
	inline void set_jumpSpeed_6(float value)
	{
		___jumpSpeed_6 = value;
	}

	inline static int32_t get_offset_of_inAirMultiplier_7() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___inAirMultiplier_7)); }
	inline float get_inAirMultiplier_7() const { return ___inAirMultiplier_7; }
	inline float* get_address_of_inAirMultiplier_7() { return &___inAirMultiplier_7; }
	inline void set_inAirMultiplier_7(float value)
	{
		___inAirMultiplier_7 = value;
	}

	inline static int32_t get_offset_of_thisTransform_8() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___thisTransform_8)); }
	inline Transform_t3275118058 * get_thisTransform_8() const { return ___thisTransform_8; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_8() { return &___thisTransform_8; }
	inline void set_thisTransform_8(Transform_t3275118058 * value)
	{
		___thisTransform_8 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_8, value);
	}

	inline static int32_t get_offset_of_character_9() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___character_9)); }
	inline CharacterController_t4094781467 * get_character_9() const { return ___character_9; }
	inline CharacterController_t4094781467 ** get_address_of_character_9() { return &___character_9; }
	inline void set_character_9(CharacterController_t4094781467 * value)
	{
		___character_9 = value;
		Il2CppCodeGenWriteBarrier(&___character_9, value);
	}

	inline static int32_t get_offset_of_velocity_10() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___velocity_10)); }
	inline Vector3_t2243707580  get_velocity_10() const { return ___velocity_10; }
	inline Vector3_t2243707580 * get_address_of_velocity_10() { return &___velocity_10; }
	inline void set_velocity_10(Vector3_t2243707580  value)
	{
		___velocity_10 = value;
	}

	inline static int32_t get_offset_of_canJump_11() { return static_cast<int32_t>(offsetof(SidescrollControl_t2759217831, ___canJump_11)); }
	inline bool get_canJump_11() const { return ___canJump_11; }
	inline bool* get_address_of_canJump_11() { return &___canJump_11; }
	inline void set_canJump_11(bool value)
	{
		___canJump_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
