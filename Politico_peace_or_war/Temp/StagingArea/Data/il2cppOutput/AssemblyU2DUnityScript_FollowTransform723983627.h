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

// FollowTransform
struct  FollowTransform_t723983627  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform FollowTransform::targetTransform
	Transform_t3275118058 * ___targetTransform_2;
	// System.Boolean FollowTransform::faceForward
	bool ___faceForward_3;
	// UnityEngine.Transform FollowTransform::thisTransform
	Transform_t3275118058 * ___thisTransform_4;

public:
	inline static int32_t get_offset_of_targetTransform_2() { return static_cast<int32_t>(offsetof(FollowTransform_t723983627, ___targetTransform_2)); }
	inline Transform_t3275118058 * get_targetTransform_2() const { return ___targetTransform_2; }
	inline Transform_t3275118058 ** get_address_of_targetTransform_2() { return &___targetTransform_2; }
	inline void set_targetTransform_2(Transform_t3275118058 * value)
	{
		___targetTransform_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetTransform_2, value);
	}

	inline static int32_t get_offset_of_faceForward_3() { return static_cast<int32_t>(offsetof(FollowTransform_t723983627, ___faceForward_3)); }
	inline bool get_faceForward_3() const { return ___faceForward_3; }
	inline bool* get_address_of_faceForward_3() { return &___faceForward_3; }
	inline void set_faceForward_3(bool value)
	{
		___faceForward_3 = value;
	}

	inline static int32_t get_offset_of_thisTransform_4() { return static_cast<int32_t>(offsetof(FollowTransform_t723983627, ___thisTransform_4)); }
	inline Transform_t3275118058 * get_thisTransform_4() const { return ___thisTransform_4; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_4() { return &___thisTransform_4; }
	inline void set_thisTransform_4(Transform_t3275118058 * value)
	{
		___thisTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
