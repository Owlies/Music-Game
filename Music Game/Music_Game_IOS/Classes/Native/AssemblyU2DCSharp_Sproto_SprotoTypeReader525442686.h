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

// Sproto.SprotoTypeReader
struct  SprotoTypeReader_t525442686  : public Il2CppObject
{
public:
	// System.Byte[] Sproto.SprotoTypeReader::buffer
	ByteU5BU5D_t3397334013* ___buffer_0;
	// System.Int32 Sproto.SprotoTypeReader::begin
	int32_t ___begin_1;
	// System.Int32 Sproto.SprotoTypeReader::pos
	int32_t ___pos_2;
	// System.Int32 Sproto.SprotoTypeReader::size
	int32_t ___size_3;

public:
	inline static int32_t get_offset_of_buffer_0() { return static_cast<int32_t>(offsetof(SprotoTypeReader_t525442686, ___buffer_0)); }
	inline ByteU5BU5D_t3397334013* get_buffer_0() const { return ___buffer_0; }
	inline ByteU5BU5D_t3397334013** get_address_of_buffer_0() { return &___buffer_0; }
	inline void set_buffer_0(ByteU5BU5D_t3397334013* value)
	{
		___buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&___buffer_0, value);
	}

	inline static int32_t get_offset_of_begin_1() { return static_cast<int32_t>(offsetof(SprotoTypeReader_t525442686, ___begin_1)); }
	inline int32_t get_begin_1() const { return ___begin_1; }
	inline int32_t* get_address_of_begin_1() { return &___begin_1; }
	inline void set_begin_1(int32_t value)
	{
		___begin_1 = value;
	}

	inline static int32_t get_offset_of_pos_2() { return static_cast<int32_t>(offsetof(SprotoTypeReader_t525442686, ___pos_2)); }
	inline int32_t get_pos_2() const { return ___pos_2; }
	inline int32_t* get_address_of_pos_2() { return &___pos_2; }
	inline void set_pos_2(int32_t value)
	{
		___pos_2 = value;
	}

	inline static int32_t get_offset_of_size_3() { return static_cast<int32_t>(offsetof(SprotoTypeReader_t525442686, ___size_3)); }
	inline int32_t get_size_3() const { return ___size_3; }
	inline int32_t* get_address_of_size_3() { return &___size_3; }
	inline void set_size_3(int32_t value)
	{
		___size_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
