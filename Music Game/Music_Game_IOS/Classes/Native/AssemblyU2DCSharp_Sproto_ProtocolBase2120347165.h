#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Sproto.ProtocolFunctionDictionary
struct ProtocolFunctionDictionary_t822241574;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.ProtocolBase
struct  ProtocolBase_t2120347165  : public Il2CppObject
{
public:
	// Sproto.ProtocolFunctionDictionary Sproto.ProtocolBase::_Protocol
	ProtocolFunctionDictionary_t822241574 * ____Protocol_0;

public:
	inline static int32_t get_offset_of__Protocol_0() { return static_cast<int32_t>(offsetof(ProtocolBase_t2120347165, ____Protocol_0)); }
	inline ProtocolFunctionDictionary_t822241574 * get__Protocol_0() const { return ____Protocol_0; }
	inline ProtocolFunctionDictionary_t822241574 ** get_address_of__Protocol_0() { return &____Protocol_0; }
	inline void set__Protocol_0(ProtocolFunctionDictionary_t822241574 * value)
	{
		____Protocol_0 = value;
		Il2CppCodeGenWriteBarrier(&____Protocol_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
