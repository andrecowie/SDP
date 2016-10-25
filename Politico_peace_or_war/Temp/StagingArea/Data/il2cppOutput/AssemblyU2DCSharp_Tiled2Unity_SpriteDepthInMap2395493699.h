#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Tiled2Unity.TiledMap
struct TiledMap_t4203693682;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.SpriteDepthInMap
struct  SpriteDepthInMap_t2395493699  : public MonoBehaviour_t1158329972
{
public:
	// Tiled2Unity.TiledMap Tiled2Unity.SpriteDepthInMap::_AttachedMap
	TiledMap_t4203693682 * ____AttachedMap_2;
	// System.Int32 Tiled2Unity.SpriteDepthInMap::PlacedOnLayerIndex
	int32_t ___PlacedOnLayerIndex_3;
	// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::StaggerPositionOffset
	Vector2_t2243707579  ___StaggerPositionOffset_4;
	// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::SeparationPoint1
	Vector2_t2243707579  ___SeparationPoint1_5;
	// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::SeparationPoint2
	Vector2_t2243707579  ___SeparationPoint2_6;
	// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::SeparationAxis1
	Vector2_t2243707579  ___SeparationAxis1_7;
	// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::SeparationAxis2
	Vector2_t2243707579  ___SeparationAxis2_8;

public:
	inline static int32_t get_offset_of__AttachedMap_2() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ____AttachedMap_2)); }
	inline TiledMap_t4203693682 * get__AttachedMap_2() const { return ____AttachedMap_2; }
	inline TiledMap_t4203693682 ** get_address_of__AttachedMap_2() { return &____AttachedMap_2; }
	inline void set__AttachedMap_2(TiledMap_t4203693682 * value)
	{
		____AttachedMap_2 = value;
		Il2CppCodeGenWriteBarrier(&____AttachedMap_2, value);
	}

	inline static int32_t get_offset_of_PlacedOnLayerIndex_3() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___PlacedOnLayerIndex_3)); }
	inline int32_t get_PlacedOnLayerIndex_3() const { return ___PlacedOnLayerIndex_3; }
	inline int32_t* get_address_of_PlacedOnLayerIndex_3() { return &___PlacedOnLayerIndex_3; }
	inline void set_PlacedOnLayerIndex_3(int32_t value)
	{
		___PlacedOnLayerIndex_3 = value;
	}

	inline static int32_t get_offset_of_StaggerPositionOffset_4() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___StaggerPositionOffset_4)); }
	inline Vector2_t2243707579  get_StaggerPositionOffset_4() const { return ___StaggerPositionOffset_4; }
	inline Vector2_t2243707579 * get_address_of_StaggerPositionOffset_4() { return &___StaggerPositionOffset_4; }
	inline void set_StaggerPositionOffset_4(Vector2_t2243707579  value)
	{
		___StaggerPositionOffset_4 = value;
	}

	inline static int32_t get_offset_of_SeparationPoint1_5() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___SeparationPoint1_5)); }
	inline Vector2_t2243707579  get_SeparationPoint1_5() const { return ___SeparationPoint1_5; }
	inline Vector2_t2243707579 * get_address_of_SeparationPoint1_5() { return &___SeparationPoint1_5; }
	inline void set_SeparationPoint1_5(Vector2_t2243707579  value)
	{
		___SeparationPoint1_5 = value;
	}

	inline static int32_t get_offset_of_SeparationPoint2_6() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___SeparationPoint2_6)); }
	inline Vector2_t2243707579  get_SeparationPoint2_6() const { return ___SeparationPoint2_6; }
	inline Vector2_t2243707579 * get_address_of_SeparationPoint2_6() { return &___SeparationPoint2_6; }
	inline void set_SeparationPoint2_6(Vector2_t2243707579  value)
	{
		___SeparationPoint2_6 = value;
	}

	inline static int32_t get_offset_of_SeparationAxis1_7() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___SeparationAxis1_7)); }
	inline Vector2_t2243707579  get_SeparationAxis1_7() const { return ___SeparationAxis1_7; }
	inline Vector2_t2243707579 * get_address_of_SeparationAxis1_7() { return &___SeparationAxis1_7; }
	inline void set_SeparationAxis1_7(Vector2_t2243707579  value)
	{
		___SeparationAxis1_7 = value;
	}

	inline static int32_t get_offset_of_SeparationAxis2_8() { return static_cast<int32_t>(offsetof(SpriteDepthInMap_t2395493699, ___SeparationAxis2_8)); }
	inline Vector2_t2243707579  get_SeparationAxis2_8() const { return ___SeparationAxis2_8; }
	inline Vector2_t2243707579 * get_address_of_SeparationAxis2_8() { return &___SeparationAxis2_8; }
	inline void set_SeparationAxis2_8(Vector2_t2243707579  value)
	{
		___SeparationAxis2_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
