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
// UnityEngine.Camera
struct Camera_t189460977;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraFollow
struct  CameraFollow_t1493855402  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CameraFollow::target
	Transform_t3275118058 * ___target_2;
	// System.Single CameraFollow::cameraSpeed
	float ___cameraSpeed_3;
	// UnityEngine.Camera CameraFollow::camera
	Camera_t189460977 * ___camera_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_cameraSpeed_3() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___cameraSpeed_3)); }
	inline float get_cameraSpeed_3() const { return ___cameraSpeed_3; }
	inline float* get_address_of_cameraSpeed_3() { return &___cameraSpeed_3; }
	inline void set_cameraSpeed_3(float value)
	{
		___cameraSpeed_3 = value;
	}

	inline static int32_t get_offset_of_camera_4() { return static_cast<int32_t>(offsetof(CameraFollow_t1493855402, ___camera_4)); }
	inline Camera_t189460977 * get_camera_4() const { return ___camera_4; }
	inline Camera_t189460977 ** get_address_of_camera_4() { return &___camera_4; }
	inline void set_camera_4(Camera_t189460977 * value)
	{
		___camera_4 = value;
		Il2CppCodeGenWriteBarrier(&___camera_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
