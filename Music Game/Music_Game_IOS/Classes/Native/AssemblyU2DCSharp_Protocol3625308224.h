#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.IO.MemoryStream
struct MemoryStream_t743994179;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Protocol
struct  Protocol_t3625308224  : public Il2CppObject
{
public:
	// System.Int32 Protocol::msgno
	int32_t ___msgno_0;
	// System.IO.MemoryStream Protocol::stream
	MemoryStream_t743994179 * ___stream_1;

public:
	inline static int32_t get_offset_of_msgno_0() { return static_cast<int32_t>(offsetof(Protocol_t3625308224, ___msgno_0)); }
	inline int32_t get_msgno_0() const { return ___msgno_0; }
	inline int32_t* get_address_of_msgno_0() { return &___msgno_0; }
	inline void set_msgno_0(int32_t value)
	{
		___msgno_0 = value;
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(Protocol_t3625308224, ___stream_1)); }
	inline MemoryStream_t743994179 * get_stream_1() const { return ___stream_1; }
	inline MemoryStream_t743994179 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(MemoryStream_t743994179 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
