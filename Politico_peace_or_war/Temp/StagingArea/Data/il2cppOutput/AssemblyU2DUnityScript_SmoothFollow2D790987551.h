#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SmoothFollow2D
struct  SmoothFollow2D_t790987551  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform SmoothFollow2D::target
	Transform_t3275118058 * ___target_2;
	// System.Single SmoothFollow2D::smoothTime
	float ___smoothTime_3;
	// UnityEngine.Transform SmoothFollow2D::thisTransform
	Transform_t3275118058 * ___thisTransform_4;
	// UnityEngine.Vector2 SmoothFollow2D::velocity
	Vector2_t2243707579  ___velocity_5;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(SmoothFollow2D_t790987551, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_smoothTime_3() { return static_cast<int32_t>(offsetof(SmoothFollow2D_t790987551, ___smoothTime_3)); }
	inline float get_smoothTime_3() const { return ___smoothTime_3; }
	inline float* get_address_of_smoothTime_3() { return &___smoothTime_3; }
	inline void set_smoothTime_3(float value)
	{
		___smoothTime_3 = value;
	}

	inline static int32_t get_offset_of_thisTransform_4() { return static_cast<int32_t>(offsetof(SmoothFollow2D_t790987551, ___thisTransform_4)); }
	inline Transform_t3275118058 * get_thisTransform_4() const { return ___thisTransform_4; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_4() { return &___thisTransform_4; }
	inline void set_thisTransform_4(Transform_t3275118058 * value)
	{
		___thisTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_4, value);
	}

	inline static int32_t get_offset_of_velocity_5() { return static_cast<int32_t>(offsetof(SmoothFollow2D_t790987551, ___velocity_5)); }
	inline Vector2_t2243707579  get_velocity_5() const { return ___velocity_5; }
	inline Vector2_t2243707579 * get_address_of_velocity_5() { return &___velocity_5; }
	inline void set_velocity_5(Vector2_t2243707579  value)
	{
		___velocity_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
