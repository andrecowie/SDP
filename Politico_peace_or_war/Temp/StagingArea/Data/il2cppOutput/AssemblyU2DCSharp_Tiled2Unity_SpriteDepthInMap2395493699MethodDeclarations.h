#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Tiled2Unity.SpriteDepthInMap
struct SpriteDepthInMap_t2395493699;
// Tiled2Unity.TiledMap
struct TiledMap_t4203693682;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Tiled2Unity_TiledMap4203693682.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

// System.Void Tiled2Unity.SpriteDepthInMap::.ctor()
extern "C"  void SpriteDepthInMap__ctor_m1376091147 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Tiled2Unity.TiledMap Tiled2Unity.SpriteDepthInMap::get_AttachedMap()
extern "C"  TiledMap_t4203693682 * SpriteDepthInMap_get_AttachedMap_m1356298740 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tiled2Unity.SpriteDepthInMap::set_AttachedMap(Tiled2Unity.TiledMap)
extern "C"  void SpriteDepthInMap_set_AttachedMap_m892988967 (SpriteDepthInMap_t2395493699 * __this, TiledMap_t4203693682 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tiled2Unity.SpriteDepthInMap::Start()
extern "C"  void SpriteDepthInMap_Start_m1494404799 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tiled2Unity.SpriteDepthInMap::AttachedMapChanged()
extern "C"  void SpriteDepthInMap_AttachedMapChanged_m1886987523 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Tiled2Unity.SpriteDepthInMap::Update()
extern "C"  void SpriteDepthInMap_Update_m719055644 (SpriteDepthInMap_t2395493699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::FindGridCoordinates(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  SpriteDepthInMap_FindGridCoordinates_m3393281566 (SpriteDepthInMap_t2395493699 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::ScreenToIsometric(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  SpriteDepthInMap_ScreenToIsometric_m4228889462 (SpriteDepthInMap_t2395493699 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Tiled2Unity.SpriteDepthInMap::ScreenToStaggered(UnityEngine.Vector2)
extern "C"  Vector2_t2243707579  SpriteDepthInMap_ScreenToStaggered_m4236816887 (SpriteDepthInMap_t2395493699 * __this, Vector2_t2243707579  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
