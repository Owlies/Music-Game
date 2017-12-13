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

// SprotoType.LoginResponse
struct  LoginResponse_t1707231414  : public SprotoTypeBase_t1094420418
{
public:
	// System.String SprotoType.LoginResponse::_user_id
	String_t* ____user_id_4;
	// System.Int64 SprotoType.LoginResponse::_energy
	int64_t ____energy_5;

public:
	inline static int32_t get_offset_of__user_id_4() { return static_cast<int32_t>(offsetof(LoginResponse_t1707231414, ____user_id_4)); }
	inline String_t* get__user_id_4() const { return ____user_id_4; }
	inline String_t** get_address_of__user_id_4() { return &____user_id_4; }
	inline void set__user_id_4(String_t* value)
	{
		____user_id_4 = value;
		Il2CppCodeGenWriteBarrier(&____user_id_4, value);
	}

	inline static int32_t get_offset_of__energy_5() { return static_cast<int32_t>(offsetof(LoginResponse_t1707231414, ____energy_5)); }
	inline int64_t get__energy_5() const { return ____energy_5; }
	inline int64_t* get_address_of__energy_5() { return &____energy_5; }
	inline void set__energy_5(int64_t value)
	{
		____energy_5 = value;
	}
};

struct LoginResponse_t1707231414_StaticFields
{
public:
	// System.Int32 SprotoType.LoginResponse::max_field_count
	int32_t ___max_field_count_3;

public:
	inline static int32_t get_offset_of_max_field_count_3() { return static_cast<int32_t>(offsetof(LoginResponse_t1707231414_StaticFields, ___max_field_count_3)); }
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
