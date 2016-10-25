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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// System.Int32 PlayerMovement::walkingSpeed
	int32_t ___walkingSpeed_2;
	// UnityEngine.Rigidbody2D PlayerMovement::rb
	Rigidbody2D_t502193897 * ___rb_3;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t69676727 * ___anim_4;

public:
	inline static int32_t get_offset_of_walkingSpeed_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___walkingSpeed_2)); }
	inline int32_t get_walkingSpeed_2() const { return ___walkingSpeed_2; }
	inline int32_t* get_address_of_walkingSpeed_2() { return &___walkingSpeed_2; }
	inline void set_walkingSpeed_2(int32_t value)
	{
		___walkingSpeed_2 = value;
	}

	inline static int32_t get_offset_of_rb_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___rb_3)); }
	inline Rigidbody2D_t502193897 * get_rb_3() const { return ___rb_3; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_3() { return &___rb_3; }
	inline void set_rb_3(Rigidbody2D_t502193897 * value)
	{
		___rb_3 = value;
		Il2CppCodeGenWriteBarrier(&___rb_3, value);
	}

	inline static int32_t get_offset_of_anim_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___anim_4)); }
	inline Animator_t69676727 * get_anim_4() const { return ___anim_4; }
	inline Animator_t69676727 ** get_address_of_anim_4() { return &___anim_4; }
	inline void set_anim_4(Animator_t69676727 * value)
	{
		___anim_4 = value;
		Il2CppCodeGenWriteBarrier(&___anim_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
