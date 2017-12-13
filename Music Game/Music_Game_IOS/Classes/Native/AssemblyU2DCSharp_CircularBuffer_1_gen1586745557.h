#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Protocol[]
struct ProtocolU5BU5D_t116500161;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CircularBuffer`1<Protocol>
struct  CircularBuffer_1_t1586745557  : public Il2CppObject
{
public:
	// T[] CircularBuffer`1::_buffer
	ProtocolU5BU5D_t116500161* ____buffer_0;
	// System.Int32 CircularBuffer`1::_start
	int32_t ____start_1;
	// System.Int32 CircularBuffer`1::_end
	int32_t ____end_2;
	// System.Int32 CircularBuffer`1::_size
	int32_t ____size_3;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(CircularBuffer_1_t1586745557, ____buffer_0)); }
	inline ProtocolU5BU5D_t116500161* get__buffer_0() const { return ____buffer_0; }
	inline ProtocolU5BU5D_t116500161** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(ProtocolU5BU5D_t116500161* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier(&____buffer_0, value);
	}

	inline static int32_t get_offset_of__start_1() { return static_cast<int32_t>(offsetof(CircularBuffer_1_t1586745557, ____start_1)); }
	inline int32_t get__start_1() const { return ____start_1; }
	inline int32_t* get_address_of__start_1() { return &____start_1; }
	inline void set__start_1(int32_t value)
	{
		____start_1 = value;
	}

	inline static int32_t get_offset_of__end_2() { return static_cast<int32_t>(offsetof(CircularBuffer_1_t1586745557, ____end_2)); }
	inline int32_t get__end_2() const { return ____end_2; }
	inline int32_t* get_address_of__end_2() { return &____end_2; }
	inline void set__end_2(int32_t value)
	{
		____end_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(CircularBuffer_1_t1586745557, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
