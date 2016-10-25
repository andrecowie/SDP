#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// Joystick
struct Joystick_t549888914;

#include "mscorlib_System_Array3829468939.h"
#include "AssemblyU2DUnityScript_Joystick549888914.h"

#pragma once
// Joystick[]
struct JoystickU5BU5D_t1912885735  : public Il2CppArray
{
public:
	ALIGN_FIELD (8) Joystick_t549888914 * m_Items[1];

public:
	inline Joystick_t549888914 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline Joystick_t549888914 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, Joystick_t549888914 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
