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
// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.SprotoPack
struct  SprotoPack_t241546854  : public Il2CppObject
{
public:
	// System.IO.MemoryStream Sproto.SprotoPack::buffer
	MemoryStream_t743994179 * ___buffer_0;
	// System.Byte[] Sproto.SprotoPack::tmp
	ByteU5BU5D_t3397334013* ___tmp_1;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(SprotoPack_t241546854, ___buffer_0)); }
	inline MemoryStream_t743994179 * get_buffer_0() const { return ___buffer_0; }
	inline MemoryStream_t743994179 ** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(MemoryStream_t743994179 * value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_tmp_1() { return static_cast<int32_t>(offsetof(SprotoPack_t241546854, ___tmp_1)); }
	inline ByteU5BU5D_t3397334013* get_tmp_1() const { return ___tmp_1; }
	inline ByteU5BU5D_t3397334013** get_address_of_tmp_1() { return &___tmp_1; }
	inline void set_tmp_1(ByteU5BU5D_t3397334013* value)
	{
		___tmp_1 = value;
		Il2CppCodeGenWriteBarrier(&___tmp_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
