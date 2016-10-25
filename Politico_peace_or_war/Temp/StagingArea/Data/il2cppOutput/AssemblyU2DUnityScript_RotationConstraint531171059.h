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
#include "AssemblyU2DUnityScript_ConstraintAxis2656714838.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"
#include "UnityEngine_UnityEngine_Quaternion4030073918.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RotationConstraint
struct  RotationConstraint_t531171059  : public MonoBehaviour_t1158329972
{
public:
	// ConstraintAxis RotationConstraint::axis
	int32_t ___axis_2;
	// System.Single RotationConstraint::min
	float ___min_3;
	// System.Single RotationConstraint::max
	float ___max_4;
	// UnityEngine.Transform RotationConstraint::thisTransform
	Transform_t3275118058 * ___thisTransform_5;
	// UnityEngine.Vector3 RotationConstraint::rotateAround
	Vector3_t2243707580  ___rotateAround_6;
	// UnityEngine.Quaternion RotationConstraint::minQuaternion
	Quaternion_t4030073918  ___minQuaternion_7;
	// UnityEngine.Quaternion RotationConstraint::maxQuaternion
	Quaternion_t4030073918  ___maxQuaternion_8;
	// System.Single RotationConstraint::range
	float ___range_9;

public:
	inline static int32_t get_offset_of_axis_2() { return static_cast<int32_t>(offsetof(RotationConstraint_t531171059, ___axis_2)); }
	inline int32_t get_axis_2() const { return ___axis_2; }
	inline int32_t* get_address_of_axis_2() { return &___axis_2; }
	inline void set_axis_2(int32_t value)
	{
		___axis_2 = value;
	}

	inline static int32_t get_offset_of_min_3() { return static_cast<int32_t>(offsetof(RotationConstraint_t531171059, ___min_3)); }
	inline float get_min_3() const { return ___min_3; }
	inline float* get_address_of_min_3() { return &___min_3; }
	inline void set_min_3(float value)
	{
		___min_3 = value;
	}

	inline static int32_t get_offset_of_max_4() { return static_cast<int32_t>(offsetof(RotationConstraint_t531171059, ___max_4)); }
	inline float get_max_4() const { return ___max_4; }
	inline float* get_address_of_max_4() { return &___max_4; }
	inline void set_max_4(float value)
	{
		___max_4 = value;
	}

	inline static int32_t get_offset_of_thisTransform_5() { return static_cast<int32_t>(offsetof(RotationConstraint_t531171059, ___thisTransform_5)); }
	inline Transform_t3275118058 * get_thisTransform_5() const { return ___thisTransform_5; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_5() { return &___thisTransform_5; }
	inline void set_thisTransform_5(Transform_t3275118058 * value)
	{
		___thisTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_5, value);
	}

	inline static int32_t get_offset_of_rotateAround_6() { return static_cast<int32_t>(offsetof(RotationConstraint_t531171059, ___rotateAround_6)); }
	inline Vector3_t2243707580  get_rotateAround_6() const { return ___rotateAround_6; }
	inline Vector3_t2243707580 * get_address_of_rotateAround_6() { return &___rotateAround_6; }
	inline void set_rotateAround_6(Vector3_t2243707580  value)
	{
		___rotateAround_6 = value;
	}

	inline static int32_t get_offset_of_minQuaternion_7() { return static_cast<int32_t>(offsetof(RotationConstraint_t531171059, ___minQuaternion_7)); }
	inline Quaternion_t4030073918  get_minQuaternion_7() const { return ___minQuaternion_7; }
	inline Quaternion_t4030073918 * get_address_of_minQuaternion_7() { return &___minQuaternion_7; }
	inline void set_minQuaternion_7(Quaternion_t4030073918  value)
	{
		___minQuaternion_7 = value;
	}

	inline static int32_t get_offset_of_maxQuaternion_8() { return static_cast<int32_t>(offsetof(RotationConstraint_t531171059, ___maxQuaternion_8)); }
	inline Quaternion_t4030073918  get_maxQuaternion_8() const { return ___maxQuaternion_8; }
	inline Quaternion_t4030073918 * get_address_of_maxQuaternion_8() { return &___maxQuaternion_8; }
	inline void set_maxQuaternion_8(Quaternion_t4030073918  value)
	{
		___maxQuaternion_8 = value;
	}

	inline static int32_t get_offset_of_range_9() { return static_cast<int32_t>(offsetof(RotationConstraint_t531171059, ___range_9)); }
	inline float get_range_9() const { return ___range_9; }
	inline float* get_address_of_range_9() { return &___range_9; }
	inline void set_range_9(float value)
	{
		___range_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
