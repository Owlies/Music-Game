#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Owlies_Core_Singleton_1_gen1795473326.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// APIManager
struct  APIManager_t2595496257  : public Singleton_1_t1795473326
{
public:
	// System.String APIManager::serverIpAddress
	String_t* ___serverIpAddress_5;
	// System.Int32 APIManager::port
	int32_t ___port_6;
	// System.Int32 APIManager::session
	int32_t ___session_7;

public:
	inline static int32_t get_offset_of_serverIpAddress_5() { return static_cast<int32_t>(offsetof(APIManager_t2595496257, ___serverIpAddress_5)); }
	inline String_t* get_serverIpAddress_5() const { return ___serverIpAddress_5; }
	inline String_t** get_address_of_serverIpAddress_5() { return &___serverIpAddress_5; }
	inline void set_serverIpAddress_5(String_t* value)
	{
		___serverIpAddress_5 = value;
		Il2CppCodeGenWriteBarrier(&___serverIpAddress_5, value);
	}

	inline static int32_t get_offset_of_port_6() { return static_cast<int32_t>(offsetof(APIManager_t2595496257, ___port_6)); }
	inline int32_t get_port_6() const { return ___port_6; }
	inline int32_t* get_address_of_port_6() { return &___port_6; }
	inline void set_port_6(int32_t value)
	{
		___port_6 = value;
	}

	inline static int32_t get_offset_of_session_7() { return static_cast<int32_t>(offsetof(APIManager_t2595496257, ___session_7)); }
	inline int32_t get_session_7() const { return ___session_7; }
	inline int32_t* get_address_of_session_7() { return &___session_7; }
	inline void set_session_7(int32_t value)
	{
		___session_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
