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

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ObliqueNear
struct  ObliqueNear_t2030148723  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ObliqueNear::plane
	Transform_t3275118058 * ___plane_2;

public:
	inline static int32_t get_offset_of_plane_2() { return static_cast<int32_t>(offsetof(ObliqueNear_t2030148723, ___plane_2)); }
	inline Transform_t3275118058 * get_plane_2() const { return ___plane_2; }
	inline Transform_t3275118058 ** get_address_of_plane_2() { return &___plane_2; }
	inline void set_plane_2(Transform_t3275118058 * value)
	{
		___plane_2 = value;
		Il2CppCodeGenWriteBarrier(&___plane_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
