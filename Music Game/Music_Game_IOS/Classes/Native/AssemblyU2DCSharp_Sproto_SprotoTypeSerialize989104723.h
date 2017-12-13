#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Sproto.SprotoStream
struct SprotoStream_t259342069;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.SprotoTypeSerialize
struct  SprotoTypeSerialize_t989104723  : public Il2CppObject
{
public:
	// System.Int32 Sproto.SprotoTypeSerialize::header_idx
	int32_t ___header_idx_0;
	// System.Int32 Sproto.SprotoTypeSerialize::header_sz
	int32_t ___header_sz_1;
	// System.Int32 Sproto.SprotoTypeSerialize::header_cap
	int32_t ___header_cap_2;
	// Sproto.SprotoStream Sproto.SprotoTypeSerialize::data
	SprotoStream_t259342069 * ___data_3;
	// System.Int32 Sproto.SprotoTypeSerialize::data_idx
	int32_t ___data_idx_4;
	// System.Int32 Sproto.SprotoTypeSerialize::lasttag
	int32_t ___lasttag_5;
	// System.Int32 Sproto.SprotoTypeSerialize::index
	int32_t ___index_6;

public:
	inline static int32_t get_offset_of_header_idx_0() { return static_cast<int32_t>(offsetof(SprotoTypeSerialize_t989104723, ___header_idx_0)); }
	inline int32_t get_header_idx_0() const { return ___header_idx_0; }
	inline int32_t* get_address_of_header_idx_0() { return &___header_idx_0; }
	inline void set_header_idx_0(int32_t value)
	{
		___header_idx_0 = value;
	}

	inline static int32_t get_offset_of_header_sz_1() { return static_cast<int32_t>(offsetof(SprotoTypeSerialize_t989104723, ___header_sz_1)); }
	inline int32_t get_header_sz_1() const { return ___header_sz_1; }
	inline int32_t* get_address_of_header_sz_1() { return &___header_sz_1; }
	inline void set_header_sz_1(int32_t value)
	{
		___header_sz_1 = value;
	}

	inline static int32_t get_offset_of_header_cap_2() { return static_cast<int32_t>(offsetof(SprotoTypeSerialize_t989104723, ___header_cap_2)); }
	inline int32_t get_header_cap_2() const { return ___header_cap_2; }
	inline int32_t* get_address_of_header_cap_2() { return &___header_cap_2; }
	inline void set_header_cap_2(int32_t value)
	{
		___header_cap_2 = value;
	}

	inline static int32_t get_offset_of_data_3() { return static_cast<int32_t>(offsetof(SprotoTypeSerialize_t989104723, ___data_3)); }
	inline SprotoStream_t259342069 * get_data_3() const { return ___data_3; }
	inline SprotoStream_t259342069 ** get_address_of_data_3() { return &___data_3; }
	inline void set_data_3(SprotoStream_t259342069 * value)
	{
		___data_3 = value;
		Il2CppCodeGenWriteBarrier(&___data_3, value);
	}

	inline static int32_t get_offset_of_data_idx_4() { return static_cast<int32_t>(offsetof(SprotoTypeSerialize_t989104723, ___data_idx_4)); }
	inline int32_t get_data_idx_4() const { return ___data_idx_4; }
	inline int32_t* get_address_of_data_idx_4() { return &___data_idx_4; }
	inline void set_data_idx_4(int32_t value)
	{
		___data_idx_4 = value;
	}

	inline static int32_t get_offset_of_lasttag_5() { return static_cast<int32_t>(offsetof(SprotoTypeSerialize_t989104723, ___lasttag_5)); }
	inline int32_t get_lasttag_5() const { return ___lasttag_5; }
	inline int32_t* get_address_of_lasttag_5() { return &___lasttag_5; }
	inline void set_lasttag_5(int32_t value)
	{
		___lasttag_5 = value;
	}

	inline static int32_t get_offset_of_index_6() { return static_cast<int32_t>(offsetof(SprotoTypeSerialize_t989104723, ___index_6)); }
	inline int32_t get_index_6() const { return ___index_6; }
	inline int32_t* get_address_of_index_6() { return &___index_6; }
	inline void set_index_6(int32_t value)
	{
		___index_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
