#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Tiled2Unity.ImportBehaviour
struct  ImportBehaviour_t1918973942  : public MonoBehaviour_t1158329972
{
public:
	// System.String Tiled2Unity.ImportBehaviour::ImportName
	String_t* ___ImportName_2;

public:
	inline static int32_t get_offset_of_ImportName_2() { return static_cast<int32_t>(offsetof(ImportBehaviour_t1918973942, ___ImportName_2)); }
	inline String_t* get_ImportName_2() const { return ___ImportName_2; }
	inline String_t** get_address_of_ImportName_2() { return &___ImportName_2; }
	inline void set_ImportName_2(String_t* value)
	{
		___ImportName_2 = value;
		Il2CppCodeGenWriteBarrier(&___ImportName_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
