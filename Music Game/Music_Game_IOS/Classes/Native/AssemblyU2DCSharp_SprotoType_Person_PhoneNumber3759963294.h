#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Sproto_SprotoTypeBase1094420418.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SprotoType.Person/PhoneNumber
struct  PhoneNumber_t3759963294  : public SprotoTypeBase_t1094420418
{
public:
	// System.String SprotoType.Person/PhoneNumber::_number
	String_t* ____number_4;
	// System.Int64 SprotoType.Person/PhoneNumber::_type
	int64_t ____type_5;

public:
	inline static int32_t get_offset_of__number_4() { return static_cast<int32_t>(offsetof(PhoneNumber_t3759963294, ____number_4)); }
	inline String_t* get__number_4() const { return ____number_4; }
	inline String_t** get_address_of__number_4() { return &____number_4; }
	inline void set__number_4(String_t* value)
	{
		____number_4 = value;
		Il2CppCodeGenWriteBarrier(&____number_4, value);
	}

	inline static int32_t get_offset_of__type_5() { return static_cast<int32_t>(offsetof(PhoneNumber_t3759963294, ____type_5)); }
	inline int64_t get__type_5() const { return ____type_5; }
	inline int64_t* get_address_of__type_5() { return &____type_5; }
	inline void set__type_5(int64_t value)
	{
		____type_5 = value;
	}
};

struct PhoneNumber_t3759963294_StaticFields
{
public:
	// System.Int32 SprotoType.Person/PhoneNumber::max_field_count
	int32_t ___max_field_count_3;

public:
	inline static int32_t get_offset_of_max_field_count_3() { return static_cast<int32_t>(offsetof(PhoneNumber_t3759963294_StaticFields, ___max_field_count_3)); }
	inline int32_t get_max_field_count_3() const { return ___max_field_count_3; }
	inline int32_t* get_address_of_max_field_count_3() { return &___max_field_count_3; }
	inline void set_max_field_count_3(int32_t value)
	{
		___max_field_count_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
