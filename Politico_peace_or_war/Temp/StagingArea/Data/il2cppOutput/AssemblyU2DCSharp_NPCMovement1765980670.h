#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;
// UnityEngine.Animator
struct Animator_t69676727;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NPCMovement
struct  NPCMovement_t1765980670  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 NPCMovement::walkingSpeed
	int32_t ___walkingSpeed_2;
	// System.Single NPCMovement::maxDistanceFromStartPoint
	float ___maxDistanceFromStartPoint_3;
	// System.Int32 NPCMovement::timeToWait
	int32_t ___timeToWait_4;
	// System.Boolean NPCMovement::isTalking
	bool ___isTalking_5;
	// System.Int32 NPCMovement::delayCounter
	int32_t ___delayCounter_6;
	// System.Single NPCMovement::distanceToWalk
	float ___distanceToWalk_7;
	// System.Int32 NPCMovement::currentDirection
	int32_t ___currentDirection_8;
	// System.Single NPCMovement::startingX
	float ___startingX_9;
	// System.Single NPCMovement::startingY
	float ___startingY_10;
	// UnityEngine.Rigidbody2D NPCMovement::rigidbody
	Rigidbody2D_t502193897 * ___rigidbody_11;
	// UnityEngine.Animator NPCMovement::anim
	Animator_t69676727 * ___anim_12;
	// UnityEngine.Vector2 NPCMovement::movementVector
	Vector2_t2243707579  ___movementVector_13;

public:
	inline static int32_t get_offset_of_walkingSpeed_2() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___walkingSpeed_2)); }
	inline int32_t get_walkingSpeed_2() const { return ___walkingSpeed_2; }
	inline int32_t* get_address_of_walkingSpeed_2() { return &___walkingSpeed_2; }
	inline void set_walkingSpeed_2(int32_t value)
	{
		___walkingSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxDistanceFromStartPoint_3() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___maxDistanceFromStartPoint_3)); }
	inline float get_maxDistanceFromStartPoint_3() const { return ___maxDistanceFromStartPoint_3; }
	inline float* get_address_of_maxDistanceFromStartPoint_3() { return &___maxDistanceFromStartPoint_3; }
	inline void set_maxDistanceFromStartPoint_3(float value)
	{
		___maxDistanceFromStartPoint_3 = value;
	}

	inline static int32_t get_offset_of_timeToWait_4() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___timeToWait_4)); }
	inline int32_t get_timeToWait_4() const { return ___timeToWait_4; }
	inline int32_t* get_address_of_timeToWait_4() { return &___timeToWait_4; }
	inline void set_timeToWait_4(int32_t value)
	{
		___timeToWait_4 = value;
	}

	inline static int32_t get_offset_of_isTalking_5() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___isTalking_5)); }
	inline bool get_isTalking_5() const { return ___isTalking_5; }
	inline bool* get_address_of_isTalking_5() { return &___isTalking_5; }
	inline void set_isTalking_5(bool value)
	{
		___isTalking_5 = value;
	}

	inline static int32_t get_offset_of_delayCounter_6() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___delayCounter_6)); }
	inline int32_t get_delayCounter_6() const { return ___delayCounter_6; }
	inline int32_t* get_address_of_delayCounter_6() { return &___delayCounter_6; }
	inline void set_delayCounter_6(int32_t value)
	{
		___delayCounter_6 = value;
	}

	inline static int32_t get_offset_of_distanceToWalk_7() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___distanceToWalk_7)); }
	inline float get_distanceToWalk_7() const { return ___distanceToWalk_7; }
	inline float* get_address_of_distanceToWalk_7() { return &___distanceToWalk_7; }
	inline void set_distanceToWalk_7(float value)
	{
		___distanceToWalk_7 = value;
	}

	inline static int32_t get_offset_of_currentDirection_8() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___currentDirection_8)); }
	inline int32_t get_currentDirection_8() const { return ___currentDirection_8; }
	inline int32_t* get_address_of_currentDirection_8() { return &___currentDirection_8; }
	inline void set_currentDirection_8(int32_t value)
	{
		___currentDirection_8 = value;
	}

	inline static int32_t get_offset_of_startingX_9() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___startingX_9)); }
	inline float get_startingX_9() const { return ___startingX_9; }
	inline float* get_address_of_startingX_9() { return &___startingX_9; }
	inline void set_startingX_9(float value)
	{
		___startingX_9 = value;
	}

	inline static int32_t get_offset_of_startingY_10() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___startingY_10)); }
	inline float get_startingY_10() const { return ___startingY_10; }
	inline float* get_address_of_startingY_10() { return &___startingY_10; }
	inline void set_startingY_10(float value)
	{
		___startingY_10 = value;
	}

	inline static int32_t get_offset_of_rigidbody_11() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___rigidbody_11)); }
	inline Rigidbody2D_t502193897 * get_rigidbody_11() const { return ___rigidbody_11; }
	inline Rigidbody2D_t502193897 ** get_address_of_rigidbody_11() { return &___rigidbody_11; }
	inline void set_rigidbody_11(Rigidbody2D_t502193897 * value)
	{
		___rigidbody_11 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbody_11, value);
	}

	inline static int32_t get_offset_of_anim_12() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___anim_12)); }
	inline Animator_t69676727 * get_anim_12() const { return ___anim_12; }
	inline Animator_t69676727 ** get_address_of_anim_12() { return &___anim_12; }
	inline void set_anim_12(Animator_t69676727 * value)
	{
		___anim_12 = value;
		Il2CppCodeGenWriteBarrier(&___anim_12, value);
	}

	inline static int32_t get_offset_of_movementVector_13() { return static_cast<int32_t>(offsetof(NPCMovement_t1765980670, ___movementVector_13)); }
	inline Vector2_t2243707579  get_movementVector_13() const { return ___movementVector_13; }
	inline Vector2_t2243707579 * get_address_of_movementVector_13() { return &___movementVector_13; }
	inline void set_movementVector_13(Vector2_t2243707579  value)
	{
		___movementVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
