#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"

// PacketHandle
struct PacketHandle_t289251786;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkManager/PacketHadleInfo
struct  PacketHadleInfo_t1257780952 
{
public:
	// PacketHandle NetworkManager/PacketHadleInfo::packetHandle
	PacketHandle_t289251786 * ___packetHandle_0;
	// System.Int32 NetworkManager/PacketHadleInfo::interstResult
	int32_t ___interstResult_1;

public:
	inline static int32_t get_offset_of_packetHandle_0() { return static_cast<int32_t>(offsetof(PacketHadleInfo_t1257780952, ___packetHandle_0)); }
	inline PacketHandle_t289251786 * get_packetHandle_0() const { return ___packetHandle_0; }
	inline PacketHandle_t289251786 ** get_address_of_packetHandle_0() { return &___packetHandle_0; }
	inline void set_packetHandle_0(PacketHandle_t289251786 * value)
	{
		___packetHandle_0 = value;
		Il2CppCodeGenWriteBarrier(&___packetHandle_0, value);
	}

	inline static int32_t get_offset_of_interstResult_1() { return static_cast<int32_t>(offsetof(PacketHadleInfo_t1257780952, ___interstResult_1)); }
	inline int32_t get_interstResult_1() const { return ___interstResult_1; }
	inline int32_t* get_address_of_interstResult_1() { return &___interstResult_1; }
	inline void set_interstResult_1(int32_t value)
	{
		___interstResult_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of NetworkManager/PacketHadleInfo
struct PacketHadleInfo_t1257780952_marshaled_pinvoke
{
	Il2CppMethodPointer ___packetHandle_0;
	int32_t ___interstResult_1;
};
// Native definition for COM marshalling of NetworkManager/PacketHadleInfo
struct PacketHadleInfo_t1257780952_marshaled_com
{
	Il2CppMethodPointer ___packetHandle_0;
	int32_t ___interstResult_1;
};
