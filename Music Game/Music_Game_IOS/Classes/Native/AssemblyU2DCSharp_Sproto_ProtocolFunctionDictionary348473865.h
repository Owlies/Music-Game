#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_534959967.h"

// System.Type
struct Type_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.ProtocolFunctionDictionary/MetaInfo
struct  MetaInfo_t348473865  : public Il2CppObject
{
public:
	// System.Type Sproto.ProtocolFunctionDictionary/MetaInfo::ProtocolType
	Type_t * ___ProtocolType_0;
	// System.Collections.Generic.KeyValuePair`2<System.Type,Sproto.ProtocolFunctionDictionary/typeFunc> Sproto.ProtocolFunctionDictionary/MetaInfo::Request
	KeyValuePair_2_t534959967  ___Request_1;
	// System.Collections.Generic.KeyValuePair`2<System.Type,Sproto.ProtocolFunctionDictionary/typeFunc> Sproto.ProtocolFunctionDictionary/MetaInfo::Response
	KeyValuePair_2_t534959967  ___Response_2;

public:
	inline static int32_t get_offset_of_ProtocolType_0() { return static_cast<int32_t>(offsetof(MetaInfo_t348473865, ___ProtocolType_0)); }
	inline Type_t * get_ProtocolType_0() const { return ___ProtocolType_0; }
	inline Type_t ** get_address_of_ProtocolType_0() { return &___ProtocolType_0; }
	inline void set_ProtocolType_0(Type_t * value)
	{
		___ProtocolType_0 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolType_0, value);
	}

	inline static int32_t get_offset_of_Request_1() { return static_cast<int32_t>(offsetof(MetaInfo_t348473865, ___Request_1)); }
	inline KeyValuePair_2_t534959967  get_Request_1() const { return ___Request_1; }
	inline KeyValuePair_2_t534959967 * get_address_of_Request_1() { return &___Request_1; }
	inline void set_Request_1(KeyValuePair_2_t534959967  value)
	{
		___Request_1 = value;
	}

	inline static int32_t get_offset_of_Response_2() { return static_cast<int32_t>(offsetof(MetaInfo_t348473865, ___Response_2)); }
	inline KeyValuePair_2_t534959967  get_Response_2() const { return ___Response_2; }
	inline KeyValuePair_2_t534959967 * get_address_of_Response_2() { return &___Response_2; }
	inline void set_Response_2(KeyValuePair_2_t534959967  value)
	{
		___Response_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
