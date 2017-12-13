#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Owlies_Core_Singleton_1_gen1459947242.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UserInfo
struct  UserInfo_t2259970173  : public Singleton_1_t1459947242
{
public:
	// System.String UserInfo::userId
	String_t* ___userId_5;
	// System.String UserInfo::userAccount
	String_t* ___userAccount_6;

public:
	inline static int32_t get_offset_of_userId_5() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___userId_5)); }
	inline String_t* get_userId_5() const { return ___userId_5; }
	inline String_t** get_address_of_userId_5() { return &___userId_5; }
	inline void set_userId_5(String_t* value)
	{
		___userId_5 = value;
		Il2CppCodeGenWriteBarrier(&___userId_5, value);
	}

	inline static int32_t get_offset_of_userAccount_6() { return static_cast<int32_t>(offsetof(UserInfo_t2259970173, ___userAccount_6)); }
	inline String_t* get_userAccount_6() const { return ___userAccount_6; }
	inline String_t** get_address_of_userAccount_6() { return &___userAccount_6; }
	inline void set_userAccount_6(String_t* value)
	{
		___userAccount_6 = value;
		Il2CppCodeGenWriteBarrier(&___userAccount_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
