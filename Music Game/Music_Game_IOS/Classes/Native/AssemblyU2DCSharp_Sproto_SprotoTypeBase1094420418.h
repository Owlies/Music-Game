#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Sproto.SprotoTypeFieldOP
struct SprotoTypeFieldOP_t613962042;
// Sproto.SprotoTypeSerialize
struct SprotoTypeSerialize_t989104723;
// Sproto.SprotoTypeDeserialize
struct SprotoTypeDeserialize_t94428588;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.SprotoTypeBase
struct  SprotoTypeBase_t1094420418  : public Il2CppObject
{
public:
	// Sproto.SprotoTypeFieldOP Sproto.SprotoTypeBase::has_field
	SprotoTypeFieldOP_t613962042 * ___has_field_0;
	// Sproto.SprotoTypeSerialize Sproto.SprotoTypeBase::serialize
	SprotoTypeSerialize_t989104723 * ___serialize_1;
	// Sproto.SprotoTypeDeserialize Sproto.SprotoTypeBase::deserialize
	SprotoTypeDeserialize_t94428588 * ___deserialize_2;

public:
	inline static int32_t get_offset_of_has_field_0() { return static_cast<int32_t>(offsetof(SprotoTypeBase_t1094420418, ___has_field_0)); }
	inline SprotoTypeFieldOP_t613962042 * get_has_field_0() const { return ___has_field_0; }
	inline SprotoTypeFieldOP_t613962042 ** get_address_of_has_field_0() { return &___has_field_0; }
	inline void set_has_field_0(SprotoTypeFieldOP_t613962042 * value)
	{
		___has_field_0 = value;
		Il2CppCodeGenWriteBarrier(&___has_field_0, value);
	}

	inline static int32_t get_offset_of_serialize_1() { return static_cast<int32_t>(offsetof(SprotoTypeBase_t1094420418, ___serialize_1)); }
	inline SprotoTypeSerialize_t989104723 * get_serialize_1() const { return ___serialize_1; }
	inline SprotoTypeSerialize_t989104723 ** get_address_of_serialize_1() { return &___serialize_1; }
	inline void set_serialize_1(SprotoTypeSerialize_t989104723 * value)
	{
		___serialize_1 = value;
		Il2CppCodeGenWriteBarrier(&___serialize_1, value);
	}

	inline static int32_t get_offset_of_deserialize_2() { return static_cast<int32_t>(offsetof(SprotoTypeBase_t1094420418, ___deserialize_2)); }
	inline SprotoTypeDeserialize_t94428588 * get_deserialize_2() const { return ___deserialize_2; }
	inline SprotoTypeDeserialize_t94428588 ** get_address_of_deserialize_2() { return &___deserialize_2; }
	inline void set_deserialize_2(SprotoTypeDeserialize_t94428588 * value)
	{
		___deserialize_2 = value;
		Il2CppCodeGenWriteBarrier(&___deserialize_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
