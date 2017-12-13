#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Collections.Generic.Dictionary`2<System.Int32,Sproto.ProtocolFunctionDictionary/MetaInfo>
struct Dictionary_2_t3651266796;
// System.Collections.Generic.Dictionary`2<System.Type,System.Int32>
struct Dictionary_2_t4009235345;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.ProtocolFunctionDictionary
struct  ProtocolFunctionDictionary_t822241574  : public Il2CppObject
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Sproto.ProtocolFunctionDictionary/MetaInfo> Sproto.ProtocolFunctionDictionary::MetaDictionary
	Dictionary_2_t3651266796 * ___MetaDictionary_0;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Int32> Sproto.ProtocolFunctionDictionary::ProtocolDictionary
	Dictionary_2_t4009235345 * ___ProtocolDictionary_1;

public:
	inline static int32_t get_offset_of_MetaDictionary_0() { return static_cast<int32_t>(offsetof(ProtocolFunctionDictionary_t822241574, ___MetaDictionary_0)); }
	inline Dictionary_2_t3651266796 * get_MetaDictionary_0() const { return ___MetaDictionary_0; }
	inline Dictionary_2_t3651266796 ** get_address_of_MetaDictionary_0() { return &___MetaDictionary_0; }
	inline void set_MetaDictionary_0(Dictionary_2_t3651266796 * value)
	{
		___MetaDictionary_0 = value;
		Il2CppCodeGenWriteBarrier(&___MetaDictionary_0, value);
	}

	inline static int32_t get_offset_of_ProtocolDictionary_1() { return static_cast<int32_t>(offsetof(ProtocolFunctionDictionary_t822241574, ___ProtocolDictionary_1)); }
	inline Dictionary_2_t4009235345 * get_ProtocolDictionary_1() const { return ___ProtocolDictionary_1; }
	inline Dictionary_2_t4009235345 ** get_address_of_ProtocolDictionary_1() { return &___ProtocolDictionary_1; }
	inline void set_ProtocolDictionary_1(Dictionary_2_t4009235345 * value)
	{
		___ProtocolDictionary_1 = value;
		Il2CppCodeGenWriteBarrier(&___ProtocolDictionary_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
