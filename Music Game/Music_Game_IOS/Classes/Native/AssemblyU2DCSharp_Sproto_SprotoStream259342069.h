#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Byte[]
struct ByteU5BU5D_t3397334013;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.SprotoStream
struct  SprotoStream_t259342069  : public Il2CppObject
{
public:
	// System.Int32 Sproto.SprotoStream::size
	int32_t ___size_0;
	// System.Int32 Sproto.SprotoStream::pos
	int32_t ___pos_1;
	// System.Byte[] Sproto.SprotoStream::buffer
	ByteU5BU5D_t3397334013* ___buffer_2;

public:
	inline static int32_t get_offset_of_size_0() { return static_cast<int32_t>(offsetof(SprotoStream_t259342069, ___size_0)); }
	inline int32_t get_size_0() const { return ___size_0; }
	inline int32_t* get_address_of_size_0() { return &___size_0; }
	inline void set_size_0(int32_t value)
	{
		___size_0 = value;
	}

	inline static int32_t get_offset_of_pos_1() { return static_cast<int32_t>(offsetof(SprotoStream_t259342069, ___pos_1)); }
	inline int32_t get_pos_1() const { return ___pos_1; }
	inline int32_t* get_address_of_pos_1() { return &___pos_1; }
	inline void set_pos_1(int32_t value)
	{
		___pos_1 = value;
	}

	inline static int32_t get_offset_of_buffer_2() { return static_cast<int32_t>(offsetof(SprotoStream_t259342069, ___buffer_2)); }
	inline ByteU5BU5D_t3397334013* get_buffer_2() const { return ___buffer_2; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_2() { return &___buffer_2; }
	inline void set_buffer_2(ByteU5BU5D_t3397334013* value)
	{
		___buffer_2 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
