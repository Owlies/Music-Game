#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// SprotoType.Package
struct Package_t787121224;
// Sproto.SprotoStream
struct SprotoStream_t259342069;
// Sproto.SprotoPack
struct SprotoPack_t241546854;
// Sproto.ProtocolFunctionDictionary
struct ProtocolFunctionDictionary_t822241574;
// Sproto.SprotoRpc
struct SprotoRpc_t3084056758;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.SprotoRpc/RpcRequest
struct  RpcRequest_t448966476  : public Il2CppObject
{
public:
	// SprotoType.Package Sproto.SprotoRpc/RpcRequest::package
	Package_t787121224 * ___package_0;
	// Sproto.SprotoStream Sproto.SprotoRpc/RpcRequest::stream
	SprotoStream_t259342069 * ___stream_1;
	// Sproto.SprotoPack Sproto.SprotoRpc/RpcRequest::spack
	SprotoPack_t241546854 * ___spack_2;
	// Sproto.ProtocolFunctionDictionary Sproto.SprotoRpc/RpcRequest::protocol
	ProtocolFunctionDictionary_t822241574 * ___protocol_3;
	// Sproto.SprotoRpc Sproto.SprotoRpc/RpcRequest::rpc
	SprotoRpc_t3084056758 * ___rpc_4;

public:
	inline static int32_t get_offset_of_package_0() { return static_cast<int32_t>(offsetof(RpcRequest_t448966476, ___package_0)); }
	inline Package_t787121224 * get_package_0() const { return ___package_0; }
	inline Package_t787121224 ** get_address_of_package_0() { return &___package_0; }
	inline void set_package_0(Package_t787121224 * value)
	{
		___package_0 = value;
		Il2CppCodeGenWriteBarrier(&___package_0, value);
	}

	inline static int32_t get_offset_of_stream_1() { return static_cast<int32_t>(offsetof(RpcRequest_t448966476, ___stream_1)); }
	inline SprotoStream_t259342069 * get_stream_1() const { return ___stream_1; }
	inline SprotoStream_t259342069 ** get_address_of_stream_1() { return &___stream_1; }
	inline void set_stream_1(SprotoStream_t259342069 * value)
	{
		___stream_1 = value;
		Il2CppCodeGenWriteBarrier(&___stream_1, value);
	}

	inline static int32_t get_offset_of_spack_2() { return static_cast<int32_t>(offsetof(RpcRequest_t448966476, ___spack_2)); }
	inline SprotoPack_t241546854 * get_spack_2() const { return ___spack_2; }
	inline SprotoPack_t241546854 ** get_address_of_spack_2() { return &___spack_2; }
	inline void set_spack_2(SprotoPack_t241546854 * value)
	{
		___spack_2 = value;
		Il2CppCodeGenWriteBarrier(&___spack_2, value);
	}

	inline static int32_t get_offset_of_protocol_3() { return static_cast<int32_t>(offsetof(RpcRequest_t448966476, ___protocol_3)); }
	inline ProtocolFunctionDictionary_t822241574 * get_protocol_3() const { return ___protocol_3; }
	inline ProtocolFunctionDictionary_t822241574 ** get_address_of_protocol_3() { return &___protocol_3; }
	inline void set_protocol_3(ProtocolFunctionDictionary_t822241574 * value)
	{
		___protocol_3 = value;
		Il2CppCodeGenWriteBarrier(&___protocol_3, value);
	}

	inline static int32_t get_offset_of_rpc_4() { return static_cast<int32_t>(offsetof(RpcRequest_t448966476, ___rpc_4)); }
	inline SprotoRpc_t3084056758 * get_rpc_4() const { return ___rpc_4; }
	inline SprotoRpc_t3084056758 ** get_address_of_rpc_4() { return &___rpc_4; }
	inline void set_rpc_4(SprotoRpc_t3084056758 * value)
	{
		___rpc_4 = value;
		Il2CppCodeGenWriteBarrier(&___rpc_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
