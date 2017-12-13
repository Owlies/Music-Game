#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// Sproto.SprotoStream
struct SprotoStream_t259342069;
// Sproto.SprotoPack
struct SprotoPack_t241546854;
// System.Collections.Generic.Dictionary`2<System.Int64,Sproto.ProtocolFunctionDictionary/typeFunc>
struct Dictionary_2_t1829775250;
// Sproto.ProtocolFunctionDictionary
struct ProtocolFunctionDictionary_t822241574;
// SprotoType.Package
struct Package_t787121224;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.SprotoRpc
struct  SprotoRpc_t3084056758  : public Il2CppObject
{
public:
	// Sproto.SprotoStream Sproto.SprotoRpc::stream
	SprotoStream_t259342069 * ___stream_0;
	// Sproto.SprotoPack Sproto.SprotoRpc::spack
	SprotoPack_t241546854 * ___spack_1;
	// System.Collections.Generic.Dictionary`2<System.Int64,Sproto.ProtocolFunctionDictionary/typeFunc> Sproto.SprotoRpc::sessionDictionary
	Dictionary_2_t1829775250 * ___sessionDictionary_2;
	// Sproto.ProtocolFunctionDictionary Sproto.SprotoRpc::protocol
	ProtocolFunctionDictionary_t822241574 * ___protocol_3;
	// SprotoType.Package Sproto.SprotoRpc::package
	Package_t787121224 * ___package_4;

public:
	inline static int32_t get_offset_of_stream_0() { return static_cast<int32_t>(offsetof(SprotoRpc_t3084056758, ___stream_0)); }
	inline SprotoStream_t259342069 * get_stream_0() const { return ___stream_0; }
	inline SprotoStream_t259342069 ** get_address_of_stream_0() { return &___stream_0; }
	inline void set_stream_0(SprotoStream_t259342069 * value)
	{
		___stream_0 = value;
		Il2CppCodeGenWriteBarrier(&___stream_0, value);
	}

	inline static int32_t get_offset_of_spack_1() { return static_cast<int32_t>(offsetof(SprotoRpc_t3084056758, ___spack_1)); }
	inline SprotoPack_t241546854 * get_spack_1() const { return ___spack_1; }
	inline SprotoPack_t241546854 ** get_address_of_spack_1() { return &___spack_1; }
	inline void set_spack_1(SprotoPack_t241546854 * value)
	{
		___spack_1 = value;
		Il2CppCodeGenWriteBarrier(&___spack_1, value);
	}

	inline static int32_t get_offset_of_sessionDictionary_2() { return static_cast<int32_t>(offsetof(SprotoRpc_t3084056758, ___sessionDictionary_2)); }
	inline Dictionary_2_t1829775250 * get_sessionDictionary_2() const { return ___sessionDictionary_2; }
	inline Dictionary_2_t1829775250 ** get_address_of_sessionDictionary_2() { return &___sessionDictionary_2; }
	inline void set_sessionDictionary_2(Dictionary_2_t1829775250 * value)
	{
		___sessionDictionary_2 = value;
		Il2CppCodeGenWriteBarrier(&___sessionDictionary_2, value);
	}

	inline static int32_t get_offset_of_protocol_3() { return static_cast<int32_t>(offsetof(SprotoRpc_t3084056758, ___protocol_3)); }
	inline ProtocolFunctionDictionary_t822241574 * get_protocol_3() const { return ___protocol_3; }
	inline ProtocolFunctionDictionary_t822241574 ** get_address_of_protocol_3() { return &___protocol_3; }
	inline void set_protocol_3(ProtocolFunctionDictionary_t822241574 * value)
	{
		___protocol_3 = value;
		Il2CppCodeGenWriteBarrier(&___protocol_3, value);
	}

	inline static int32_t get_offset_of_package_4() { return static_cast<int32_t>(offsetof(SprotoRpc_t3084056758, ___package_4)); }
	inline Package_t787121224 * get_package_4() const { return ___package_4; }
	inline Package_t787121224 ** get_address_of_package_4() { return &___package_4; }
	inline void set_package_4(Package_t787121224 * value)
	{
		___package_4 = value;
		Il2CppCodeGenWriteBarrier(&___package_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
