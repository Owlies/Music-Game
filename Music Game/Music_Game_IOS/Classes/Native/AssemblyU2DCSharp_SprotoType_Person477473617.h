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
// System.Collections.Generic.List`1<SprotoType.Person/PhoneNumber>
struct List_1_t3129084426;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SprotoType.Person
struct  Person_t477473617  : public SprotoTypeBase_t1094420418
{
public:
	// System.String SprotoType.Person::_name
	String_t* ____name_4;
	// System.Int64 SprotoType.Person::_id
	int64_t ____id_5;
	// System.String SprotoType.Person::_email
	String_t* ____email_6;
	// System.Collections.Generic.List`1<SprotoType.Person/PhoneNumber> SprotoType.Person::_phone
	List_1_t3129084426 * ____phone_7;

public:
	inline static int32_t get_offset_of__name_4() { return static_cast<int32_t>(offsetof(Person_t477473617, ____name_4)); }
	inline String_t* get__name_4() const { return ____name_4; }
	inline String_t** get_address_of__name_4() { return &____name_4; }
	inline void set__name_4(String_t* value)
	{
		____name_4 = value;
		Il2CppCodeGenWriteBarrier(&____name_4, value);
	}

	inline static int32_t get_offset_of__id_5() { return static_cast<int32_t>(offsetof(Person_t477473617, ____id_5)); }
	inline int64_t get__id_5() const { return ____id_5; }
	inline int64_t* get_address_of__id_5() { return &____id_5; }
	inline void set__id_5(int64_t value)
	{
		____id_5 = value;
	}

	inline static int32_t get_offset_of__email_6() { return static_cast<int32_t>(offsetof(Person_t477473617, ____email_6)); }
	inline String_t* get__email_6() const { return ____email_6; }
	inline String_t** get_address_of__email_6() { return &____email_6; }
	inline void set__email_6(String_t* value)
	{
		____email_6 = value;
		Il2CppCodeGenWriteBarrier(&____email_6, value);
	}

	inline static int32_t get_offset_of__phone_7() { return static_cast<int32_t>(offsetof(Person_t477473617, ____phone_7)); }
	inline List_1_t3129084426 * get__phone_7() const { return ____phone_7; }
	inline List_1_t3129084426 ** get_address_of__phone_7() { return &____phone_7; }
	inline void set__phone_7(List_1_t3129084426 * value)
	{
		____phone_7 = value;
		Il2CppCodeGenWriteBarrier(&____phone_7, value);
	}
};

struct Person_t477473617_StaticFields
{
public:
	// System.Int32 SprotoType.Person::max_field_count
	int32_t ___max_field_count_3;

public:
	inline static int32_t get_offset_of_max_field_count_3() { return static_cast<int32_t>(offsetof(Person_t477473617_StaticFields, ___max_field_count_3)); }
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
