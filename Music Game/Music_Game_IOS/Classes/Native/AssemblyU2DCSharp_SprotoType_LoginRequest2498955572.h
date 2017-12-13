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

// SprotoType.LoginRequest
struct  LoginRequest_t2498955572  : public SprotoTypeBase_t1094420418
{
public:
	// System.String SprotoType.LoginRequest::_timestamp
	String_t* ____timestamp_4;
	// System.String SprotoType.LoginRequest::_user_id
	String_t* ____user_id_5;
	// System.String SprotoType.LoginRequest::_user_account
	String_t* ____user_account_6;
	// System.String SprotoType.LoginRequest::_device_identifier
	String_t* ____device_identifier_7;
	// System.String SprotoType.LoginRequest::_client_version
	String_t* ____client_version_8;
	// System.String SprotoType.LoginRequest::_client_app_name
	String_t* ____client_app_name_9;

public:
	inline static int32_t get_offset_of__timestamp_4() { return static_cast<int32_t>(offsetof(LoginRequest_t2498955572, ____timestamp_4)); }
	inline String_t* get__timestamp_4() const { return ____timestamp_4; }
	inline String_t** get_address_of__timestamp_4() { return &____timestamp_4; }
	inline void set__timestamp_4(String_t* value)
	{
		____timestamp_4 = value;
		Il2CppCodeGenWriteBarrier(&____timestamp_4, value);
	}

	inline static int32_t get_offset_of__user_id_5() { return static_cast<int32_t>(offsetof(LoginRequest_t2498955572, ____user_id_5)); }
	inline String_t* get__user_id_5() const { return ____user_id_5; }
	inline String_t** get_address_of__user_id_5() { return &____user_id_5; }
	inline void set__user_id_5(String_t* value)
	{
		____user_id_5 = value;
		Il2CppCodeGenWriteBarrier(&____user_id_5, value);
	}

	inline static int32_t get_offset_of__user_account_6() { return static_cast<int32_t>(offsetof(LoginRequest_t2498955572, ____user_account_6)); }
	inline String_t* get__user_account_6() const { return ____user_account_6; }
	inline String_t** get_address_of__user_account_6() { return &____user_account_6; }
	inline void set__user_account_6(String_t* value)
	{
		____user_account_6 = value;
		Il2CppCodeGenWriteBarrier(&____user_account_6, value);
	}

	inline static int32_t get_offset_of__device_identifier_7() { return static_cast<int32_t>(offsetof(LoginRequest_t2498955572, ____device_identifier_7)); }
	inline String_t* get__device_identifier_7() const { return ____device_identifier_7; }
	inline String_t** get_address_of__device_identifier_7() { return &____device_identifier_7; }
	inline void set__device_identifier_7(String_t* value)
	{
		____device_identifier_7 = value;
		Il2CppCodeGenWriteBarrier(&____device_identifier_7, value);
	}

	inline static int32_t get_offset_of__client_version_8() { return static_cast<int32_t>(offsetof(LoginRequest_t2498955572, ____client_version_8)); }
	inline String_t* get__client_version_8() const { return ____client_version_8; }
	inline String_t** get_address_of__client_version_8() { return &____client_version_8; }
	inline void set__client_version_8(String_t* value)
	{
		____client_version_8 = value;
		Il2CppCodeGenWriteBarrier(&____client_version_8, value);
	}

	inline static int32_t get_offset_of__client_app_name_9() { return static_cast<int32_t>(offsetof(LoginRequest_t2498955572, ____client_app_name_9)); }
	inline String_t* get__client_app_name_9() const { return ____client_app_name_9; }
	inline String_t** get_address_of__client_app_name_9() { return &____client_app_name_9; }
	inline void set__client_app_name_9(String_t* value)
	{
		____client_app_name_9 = value;
		Il2CppCodeGenWriteBarrier(&____client_app_name_9, value);
	}
};

struct LoginRequest_t2498955572_StaticFields
{
public:
	// System.Int32 SprotoType.LoginRequest::max_field_count
	int32_t ___max_field_count_3;

public:
	inline static int32_t get_offset_of_max_field_count_3() { return static_cast<int32_t>(offsetof(LoginRequest_t2498955572_StaticFields, ___max_field_count_3)); }
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
