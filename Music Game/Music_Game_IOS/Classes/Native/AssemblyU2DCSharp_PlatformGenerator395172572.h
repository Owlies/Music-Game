#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Owlies_Core_Singleton_1_gen3890116937.h"

// System.Collections.Generic.List`1<GeneratorConfig>
struct List_1_t4128051159;
// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlatformGenerator
struct  PlatformGenerator_t395172572  : public Singleton_1_t3890116937
{
public:
	// System.Collections.Generic.List`1<GeneratorConfig> PlatformGenerator::configs
	List_1_t4128051159 * ___configs_5;
	// System.String PlatformGenerator::GREEN_PLATFORM_TAG
	String_t* ___GREEN_PLATFORM_TAG_6;
	// System.String PlatformGenerator::RED_PLATFORM_TAG
	String_t* ___RED_PLATFORM_TAG_7;

public:
	inline static int32_t get_offset_of_configs_5() { return static_cast<int32_t>(offsetof(PlatformGenerator_t395172572, ___configs_5)); }
	inline List_1_t4128051159 * get_configs_5() const { return ___configs_5; }
	inline List_1_t4128051159 ** get_address_of_configs_5() { return &___configs_5; }
	inline void set_configs_5(List_1_t4128051159 * value)
	{
		___configs_5 = value;
		Il2CppCodeGenWriteBarrier(&___configs_5, value);
	}

	inline static int32_t get_offset_of_GREEN_PLATFORM_TAG_6() { return static_cast<int32_t>(offsetof(PlatformGenerator_t395172572, ___GREEN_PLATFORM_TAG_6)); }
	inline String_t* get_GREEN_PLATFORM_TAG_6() const { return ___GREEN_PLATFORM_TAG_6; }
	inline String_t** get_address_of_GREEN_PLATFORM_TAG_6() { return &___GREEN_PLATFORM_TAG_6; }
	inline void set_GREEN_PLATFORM_TAG_6(String_t* value)
	{
		___GREEN_PLATFORM_TAG_6 = value;
		Il2CppCodeGenWriteBarrier(&___GREEN_PLATFORM_TAG_6, value);
	}

	inline static int32_t get_offset_of_RED_PLATFORM_TAG_7() { return static_cast<int32_t>(offsetof(PlatformGenerator_t395172572, ___RED_PLATFORM_TAG_7)); }
	inline String_t* get_RED_PLATFORM_TAG_7() const { return ___RED_PLATFORM_TAG_7; }
	inline String_t** get_address_of_RED_PLATFORM_TAG_7() { return &___RED_PLATFORM_TAG_7; }
	inline void set_RED_PLATFORM_TAG_7(String_t* value)
	{
		___RED_PLATFORM_TAG_7 = value;
		Il2CppCodeGenWriteBarrier(&___RED_PLATFORM_TAG_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
