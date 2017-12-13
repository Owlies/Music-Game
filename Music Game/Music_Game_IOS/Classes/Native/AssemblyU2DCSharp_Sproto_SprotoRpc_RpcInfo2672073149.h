#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_ValueType3507792607.h"
#include "AssemblyU2DCSharp_Sproto_SprotoRpc_RpcType662557403.h"
#include "mscorlib_System_Nullable_1_gen3467111648.h"
#include "mscorlib_System_Nullable_1_gen334943763.h"

// Sproto.SprotoTypeBase
struct SprotoTypeBase_t1094420418;
// Sproto.SprotoRpc/ResponseFunction
struct ResponseFunction_t52508803;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Sproto.SprotoRpc/RpcInfo
struct  RpcInfo_t2672073149 
{
public:
	// Sproto.SprotoRpc/RpcType Sproto.SprotoRpc/RpcInfo::type
	int32_t ___type_0;
	// System.Nullable`1<System.Int64> Sproto.SprotoRpc/RpcInfo::session
	Nullable_1_t3467111648  ___session_1;
	// System.Nullable`1<System.Int32> Sproto.SprotoRpc/RpcInfo::tag
	Nullable_1_t334943763  ___tag_2;
	// Sproto.SprotoTypeBase Sproto.SprotoRpc/RpcInfo::requestObj
	SprotoTypeBase_t1094420418 * ___requestObj_3;
	// Sproto.SprotoTypeBase Sproto.SprotoRpc/RpcInfo::responseObj
	SprotoTypeBase_t1094420418 * ___responseObj_4;
	// Sproto.SprotoRpc/ResponseFunction Sproto.SprotoRpc/RpcInfo::Response
	ResponseFunction_t52508803 * ___Response_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(RpcInfo_t2672073149, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_session_1() { return static_cast<int32_t>(offsetof(RpcInfo_t2672073149, ___session_1)); }
	inline Nullable_1_t3467111648  get_session_1() const { return ___session_1; }
	inline Nullable_1_t3467111648 * get_address_of_session_1() { return &___session_1; }
	inline void set_session_1(Nullable_1_t3467111648  value)
	{
		___session_1 = value;
	}

	inline static int32_t get_offset_of_tag_2() { return static_cast<int32_t>(offsetof(RpcInfo_t2672073149, ___tag_2)); }
	inline Nullable_1_t334943763  get_tag_2() const { return ___tag_2; }
	inline Nullable_1_t334943763 * get_address_of_tag_2() { return &___tag_2; }
	inline void set_tag_2(Nullable_1_t334943763  value)
	{
		___tag_2 = value;
	}

	inline static int32_t get_offset_of_requestObj_3() { return static_cast<int32_t>(offsetof(RpcInfo_t2672073149, ___requestObj_3)); }
	inline SprotoTypeBase_t1094420418 * get_requestObj_3() const { return ___requestObj_3; }
	inline SprotoTypeBase_t1094420418 ** get_address_of_requestObj_3() { return &___requestObj_3; }
	inline void set_requestObj_3(SprotoTypeBase_t1094420418 * value)
	{
		___requestObj_3 = value;
		Il2CppCodeGenWriteBarrier(&___requestObj_3, value);
	}

	inline static int32_t get_offset_of_responseObj_4() { return static_cast<int32_t>(offsetof(RpcInfo_t2672073149, ___responseObj_4)); }
	inline SprotoTypeBase_t1094420418 * get_responseObj_4() const { return ___responseObj_4; }
	inline SprotoTypeBase_t1094420418 ** get_address_of_responseObj_4() { return &___responseObj_4; }
	inline void set_responseObj_4(SprotoTypeBase_t1094420418 * value)
	{
		___responseObj_4 = value;
		Il2CppCodeGenWriteBarrier(&___responseObj_4, value);
	}

	inline static int32_t get_offset_of_Response_5() { return static_cast<int32_t>(offsetof(RpcInfo_t2672073149, ___Response_5)); }
	inline ResponseFunction_t52508803 * get_Response_5() const { return ___Response_5; }
	inline ResponseFunction_t52508803 ** get_address_of_Response_5() { return &___Response_5; }
	inline void set_Response_5(ResponseFunction_t52508803 * value)
	{
		___Response_5 = value;
		Il2CppCodeGenWriteBarrier(&___Response_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Sproto.SprotoRpc/RpcInfo
struct RpcInfo_t2672073149_marshaled_pinvoke
{
	int32_t ___type_0;
	Nullable_1_t3467111648  ___session_1;
	Nullable_1_t334943763  ___tag_2;
	SprotoTypeBase_t1094420418 * ___requestObj_3;
	SprotoTypeBase_t1094420418 * ___responseObj_4;
	Il2CppMethodPointer ___Response_5;
};
// Native definition for COM marshalling of Sproto.SprotoRpc/RpcInfo
struct RpcInfo_t2672073149_marshaled_com
{
	int32_t ___type_0;
	Nullable_1_t3467111648  ___session_1;
	Nullable_1_t334943763  ___tag_2;
	SprotoTypeBase_t1094420418 * ___requestObj_3;
	SprotoTypeBase_t1094420418 * ___responseObj_4;
	Il2CppMethodPointer ___Response_5;
};
