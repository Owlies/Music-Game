#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Sproto_SprotoTypeBase1094420418.h"

// System.Collections.Generic.List`1<SprotoType.Person>
struct List_1_t4141562045;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SprotoType.AddressBook
struct  AddressBook_t2298878339  : public SprotoTypeBase_t1094420418
{
public:
	// System.Collections.Generic.List`1<SprotoType.Person> SprotoType.AddressBook::_person
	List_1_t4141562045 * ____person_4;

public:
	inline static int32_t get_offset_of__person_4() { return static_cast<int32_t>(offsetof(AddressBook_t2298878339, ____person_4)); }
	inline List_1_t4141562045 * get__person_4() const { return ____person_4; }
	inline List_1_t4141562045 ** get_address_of__person_4() { return &____person_4; }
	inline void set__person_4(List_1_t4141562045 * value)
	{
		____person_4 = value;
		Il2CppCodeGenWriteBarrier(&____person_4, value);
	}
};

struct AddressBook_t2298878339_StaticFields
{
public:
	// System.Int32 SprotoType.AddressBook::max_field_count
	int32_t ___max_field_count_3;

public:
	inline static int32_t get_offset_of_max_field_count_3() { return static_cast<int32_t>(offsetof(AddressBook_t2298878339_StaticFields, ___max_field_count_3)); }
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
