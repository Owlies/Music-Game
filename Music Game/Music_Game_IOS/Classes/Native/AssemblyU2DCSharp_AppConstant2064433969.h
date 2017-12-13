#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Owlies_Core_Singleton_1_gen1264411038.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AppConstant
struct  AppConstant_t2064433969  : public Singleton_1_t1264411038
{
public:
	// System.String AppConstant::APP_NAME
	String_t* ___APP_NAME_5;
	// System.String AppConstant::APP_VERSION
	String_t* ___APP_VERSION_6;

public:
	inline static int32_t get_offset_of_APP_NAME_5() { return static_cast<int32_t>(offsetof(AppConstant_t2064433969, ___APP_NAME_5)); }
	inline String_t* get_APP_NAME_5() const { return ___APP_NAME_5; }
	inline String_t** get_address_of_APP_NAME_5() { return &___APP_NAME_5; }
	inline void set_APP_NAME_5(String_t* value)
	{
		___APP_NAME_5 = value;
		Il2CppCodeGenWriteBarrier(&___APP_NAME_5, value);
	}

	inline static int32_t get_offset_of_APP_VERSION_6() { return static_cast<int32_t>(offsetof(AppConstant_t2064433969, ___APP_VERSION_6)); }
	inline String_t* get_APP_VERSION_6() const { return ___APP_VERSION_6; }
	inline String_t** get_address_of_APP_VERSION_6() { return &___APP_VERSION_6; }
	inline void set_APP_VERSION_6(String_t* value)
	{
		___APP_VERSION_6 = value;
		Il2CppCodeGenWriteBarrier(&___APP_VERSION_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
