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
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ZoomCamera
struct  ZoomCamera_t1774768672  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform ZoomCamera::origin
	Transform_t3275118058 * ___origin_2;
	// System.Single ZoomCamera::zoom
	float ___zoom_3;
	// System.Single ZoomCamera::zoomMin
	float ___zoomMin_4;
	// System.Single ZoomCamera::zoomMax
	float ___zoomMax_5;
	// System.Single ZoomCamera::seekTime
	float ___seekTime_6;
	// System.Boolean ZoomCamera::smoothZoomIn
	bool ___smoothZoomIn_7;
	// UnityEngine.Vector3 ZoomCamera::defaultLocalPosition
	Vector3_t2243707580  ___defaultLocalPosition_8;
	// UnityEngine.Transform ZoomCamera::thisTransform
	Transform_t3275118058 * ___thisTransform_9;
	// System.Single ZoomCamera::currentZoom
	float ___currentZoom_10;
	// System.Single ZoomCamera::targetZoom
	float ___targetZoom_11;
	// System.Single ZoomCamera::zoomVelocity
	float ___zoomVelocity_12;

public:
	inline static int32_t get_offset_of_origin_2() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___origin_2)); }
	inline Transform_t3275118058 * get_origin_2() const { return ___origin_2; }
	inline Transform_t3275118058 ** get_address_of_origin_2() { return &___origin_2; }
	inline void set_origin_2(Transform_t3275118058 * value)
	{
		___origin_2 = value;
		Il2CppCodeGenWriteBarrier(&___origin_2, value);
	}

	inline static int32_t get_offset_of_zoom_3() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___zoom_3)); }
	inline float get_zoom_3() const { return ___zoom_3; }
	inline float* get_address_of_zoom_3() { return &___zoom_3; }
	inline void set_zoom_3(float value)
	{
		___zoom_3 = value;
	}

	inline static int32_t get_offset_of_zoomMin_4() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___zoomMin_4)); }
	inline float get_zoomMin_4() const { return ___zoomMin_4; }
	inline float* get_address_of_zoomMin_4() { return &___zoomMin_4; }
	inline void set_zoomMin_4(float value)
	{
		___zoomMin_4 = value;
	}

	inline static int32_t get_offset_of_zoomMax_5() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___zoomMax_5)); }
	inline float get_zoomMax_5() const { return ___zoomMax_5; }
	inline float* get_address_of_zoomMax_5() { return &___zoomMax_5; }
	inline void set_zoomMax_5(float value)
	{
		___zoomMax_5 = value;
	}

	inline static int32_t get_offset_of_seekTime_6() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___seekTime_6)); }
	inline float get_seekTime_6() const { return ___seekTime_6; }
	inline float* get_address_of_seekTime_6() { return &___seekTime_6; }
	inline void set_seekTime_6(float value)
	{
		___seekTime_6 = value;
	}

	inline static int32_t get_offset_of_smoothZoomIn_7() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___smoothZoomIn_7)); }
	inline bool get_smoothZoomIn_7() const { return ___smoothZoomIn_7; }
	inline bool* get_address_of_smoothZoomIn_7() { return &___smoothZoomIn_7; }
	inline void set_smoothZoomIn_7(bool value)
	{
		___smoothZoomIn_7 = value;
	}

	inline static int32_t get_offset_of_defaultLocalPosition_8() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___defaultLocalPosition_8)); }
	inline Vector3_t2243707580  get_defaultLocalPosition_8() const { return ___defaultLocalPosition_8; }
	inline Vector3_t2243707580 * get_address_of_defaultLocalPosition_8() { return &___defaultLocalPosition_8; }
	inline void set_defaultLocalPosition_8(Vector3_t2243707580  value)
	{
		___defaultLocalPosition_8 = value;
	}

	inline static int32_t get_offset_of_thisTransform_9() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___thisTransform_9)); }
	inline Transform_t3275118058 * get_thisTransform_9() const { return ___thisTransform_9; }
	inline Transform_t3275118058 ** get_address_of_thisTransform_9() { return &___thisTransform_9; }
	inline void set_thisTransform_9(Transform_t3275118058 * value)
	{
		___thisTransform_9 = value;
		Il2CppCodeGenWriteBarrier(&___thisTransform_9, value);
	}

	inline static int32_t get_offset_of_currentZoom_10() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___currentZoom_10)); }
	inline float get_currentZoom_10() const { return ___currentZoom_10; }
	inline float* get_address_of_currentZoom_10() { return &___currentZoom_10; }
	inline void set_currentZoom_10(float value)
	{
		___currentZoom_10 = value;
	}

	inline static int32_t get_offset_of_targetZoom_11() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___targetZoom_11)); }
	inline float get_targetZoom_11() const { return ___targetZoom_11; }
	inline float* get_address_of_targetZoom_11() { return &___targetZoom_11; }
	inline void set_targetZoom_11(float value)
	{
		___targetZoom_11 = value;
	}

	inline static int32_t get_offset_of_zoomVelocity_12() { return static_cast<int32_t>(offsetof(ZoomCamera_t1774768672, ___zoomVelocity_12)); }
	inline float get_zoomVelocity_12() const { return ___zoomVelocity_12; }
	inline float* get_address_of_zoomVelocity_12() { return &___zoomVelocity_12; }
	inline void set_zoomVelocity_12(float value)
	{
		___zoomVelocity_12 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
