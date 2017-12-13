#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Sproto.SprotoTypeReader
struct SprotoTypeReader_t525442686;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.SprotoTypeDeserialize
struct  SprotoTypeDeserialize_t94428588  : public Il2CppObject
{
public:
	// Sproto.SprotoTypeReader Sproto.SprotoTypeDeserialize::reader
	SprotoTypeReader_t525442686 * ___reader_0;
	// System.Int32 Sproto.SprotoTypeDeserialize::begin_data_pos
	int32_t ___begin_data_pos_1;
	// System.Int32 Sproto.SprotoTypeDeserialize::cur_field_pos
	int32_t ___cur_field_pos_2;
	// System.Int32 Sproto.SprotoTypeDeserialize::fn
	int32_t ___fn_3;
	// System.Int32 Sproto.SprotoTypeDeserialize::tag
	int32_t ___tag_4;
	// System.Int32 Sproto.SprotoTypeDeserialize::value
	int32_t ___value_5;

public:
	inline static int32_t get_offset_of_reader_0() { return static_cast<int32_t>(offsetof(SprotoTypeDeserialize_t94428588, ___reader_0)); }
	inline SprotoTypeReader_t525442686 * get_reader_0() const { return ___reader_0; }
	inline SprotoTypeReader_t525442686 ** get_address_of_reader_0() { return &___reader_0; }
	inline void set_reader_0(SprotoTypeReader_t525442686 * value)
	{
		___reader_0 = value;
		Il2CppCodeGenWriteBarrier(&___reader_0, value);
	}

	inline static int32_t get_offset_of_begin_data_pos_1() { return static_cast<int32_t>(offsetof(SprotoTypeDeserialize_t94428588, ___begin_data_pos_1)); }
	inline int32_t get_begin_data_pos_1() const { return ___begin_data_pos_1; }
	inline int32_t* get_address_of_begin_data_pos_1() { return &___begin_data_pos_1; }
	inline void set_begin_data_pos_1(int32_t value)
	{
		___begin_data_pos_1 = value;
	}

	inline static int32_t get_offset_of_cur_field_pos_2() { return static_cast<int32_t>(offsetof(SprotoTypeDeserialize_t94428588, ___cur_field_pos_2)); }
	inline int32_t get_cur_field_pos_2() const { return ___cur_field_pos_2; }
	inline int32_t* get_address_of_cur_field_pos_2() { return &___cur_field_pos_2; }
	inline void set_cur_field_pos_2(int32_t value)
	{
		___cur_field_pos_2 = value;
	}

	inline static int32_t get_offset_of_fn_3() { return static_cast<int32_t>(offsetof(SprotoTypeDeserialize_t94428588, ___fn_3)); }
	inline int32_t get_fn_3() const { return ___fn_3; }
	inline int32_t* get_address_of_fn_3() { return &___fn_3; }
	inline void set_fn_3(int32_t value)
	{
		___fn_3 = value;
	}

	inline static int32_t get_offset_of_tag_4() { return static_cast<int32_t>(offsetof(SprotoTypeDeserialize_t94428588, ___tag_4)); }
	inline int32_t get_tag_4() const { return ___tag_4; }
	inline int32_t* get_address_of_tag_4() { return &___tag_4; }
	inline void set_tag_4(int32_t value)
	{
		___tag_4 = value;
	}

	inline static int32_t get_offset_of_value_5() { return static_cast<int32_t>(offsetof(SprotoTypeDeserialize_t94428588, ___value_5)); }
	inline int32_t get_value_5() const { return ___value_5; }
	inline int32_t* get_address_of_value_5() { return &___value_5; }
	inline void set_value_5(int32_t value)
	{
		___value_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
