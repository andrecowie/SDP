#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RollABall
struct  RollABall_t3064894505  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector3 RollABall::tilt
	Vector3_t2243707580  ___tilt_2;
	// System.Single RollABall::speed
	float ___speed_3;
	// System.Single RollABall::circ
	float ___circ_4;
	// UnityEngine.Vector3 RollABall::previousPosition
	Vector3_t2243707580  ___previousPosition_5;

public:
	inline static int32_t get_offset_of_tilt_2() { return static_cast<int32_t>(offsetof(RollABall_t3064894505, ___tilt_2)); }
	inline Vector3_t2243707580  get_tilt_2() const { return ___tilt_2; }
	inline Vector3_t2243707580 * get_address_of_tilt_2() { return &___tilt_2; }
	inline void set_tilt_2(Vector3_t2243707580  value)
	{
		___tilt_2 = value;
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(RollABall_t3064894505, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_circ_4() { return static_cast<int32_t>(offsetof(RollABall_t3064894505, ___circ_4)); }
	inline float get_circ_4() const { return ___circ_4; }
	inline float* get_address_of_circ_4() { return &___circ_4; }
	inline void set_circ_4(float value)
	{
		___circ_4 = value;
	}

	inline static int32_t get_offset_of_previousPosition_5() { return static_cast<int32_t>(offsetof(RollABall_t3064894505, ___previousPosition_5)); }
	inline Vector3_t2243707580  get_previousPosition_5() const { return ___previousPosition_5; }
	inline Vector3_t2243707580 * get_address_of_previousPosition_5() { return &___previousPosition_5; }
	inline void set_previousPosition_5(Vector3_t2243707580  value)
	{
		___previousPosition_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
