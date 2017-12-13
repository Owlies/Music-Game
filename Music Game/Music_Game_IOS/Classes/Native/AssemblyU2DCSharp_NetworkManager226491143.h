#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Net.Sockets.TcpClient
struct TcpClient_t408947970;
// System.Net.Sockets.NetworkStream
struct NetworkStream_t581172200;
// NetworkManager
struct NetworkManager_t226491143;
// System.Threading.Thread
struct Thread_t241561612;
// CircularBuffer`1<Protocol>
struct CircularBuffer_1_t1586745557;
// System.Collections.Generic.Dictionary`2<System.Int32,NetworkManager/PacketHadleInfo>
struct Dictionary_2_t265606587;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// NetworkManager
struct  NetworkManager_t226491143  : public Il2CppObject
{
public:
	// System.Net.Sockets.TcpClient NetworkManager::mClient
	TcpClient_t408947970 * ___mClient_0;
	// System.Net.Sockets.NetworkStream NetworkManager::mStream
	NetworkStream_t581172200 * ___mStream_1;
	// System.Threading.Thread NetworkManager::mRecvThread
	Thread_t241561612 * ___mRecvThread_3;
	// System.Threading.Thread NetworkManager::mSendThread
	Thread_t241561612 * ___mSendThread_4;
	// System.Boolean NetworkManager::mThreadRunning
	bool ___mThreadRunning_5;
	// CircularBuffer`1<Protocol> NetworkManager::mSendBuffer
	CircularBuffer_1_t1586745557 * ___mSendBuffer_8;
	// CircularBuffer`1<Protocol> NetworkManager::mRecvBuffer
	CircularBuffer_1_t1586745557 * ___mRecvBuffer_9;
	// System.Collections.Generic.Dictionary`2<System.Int32,NetworkManager/PacketHadleInfo> NetworkManager::_packetHandleDic
	Dictionary_2_t265606587 * ____packetHandleDic_10;

public:
	inline static int32_t get_offset_of_mClient_0() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___mClient_0)); }
	inline TcpClient_t408947970 * get_mClient_0() const { return ___mClient_0; }
	inline TcpClient_t408947970 ** get_address_of_mClient_0() { return &___mClient_0; }
	inline void set_mClient_0(TcpClient_t408947970 * value)
	{
		___mClient_0 = value;
		Il2CppCodeGenWriteBarrier(&___mClient_0, value);
	}

	inline static int32_t get_offset_of_mStream_1() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___mStream_1)); }
	inline NetworkStream_t581172200 * get_mStream_1() const { return ___mStream_1; }
	inline NetworkStream_t581172200 ** get_address_of_mStream_1() { return &___mStream_1; }
	inline void set_mStream_1(NetworkStream_t581172200 * value)
	{
		___mStream_1 = value;
		Il2CppCodeGenWriteBarrier(&___mStream_1, value);
	}

	inline static int32_t get_offset_of_mRecvThread_3() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___mRecvThread_3)); }
	inline Thread_t241561612 * get_mRecvThread_3() const { return ___mRecvThread_3; }
	inline Thread_t241561612 ** get_address_of_mRecvThread_3() { return &___mRecvThread_3; }
	inline void set_mRecvThread_3(Thread_t241561612 * value)
	{
		___mRecvThread_3 = value;
		Il2CppCodeGenWriteBarrier(&___mRecvThread_3, value);
	}

	inline static int32_t get_offset_of_mSendThread_4() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___mSendThread_4)); }
	inline Thread_t241561612 * get_mSendThread_4() const { return ___mSendThread_4; }
	inline Thread_t241561612 ** get_address_of_mSendThread_4() { return &___mSendThread_4; }
	inline void set_mSendThread_4(Thread_t241561612 * value)
	{
		___mSendThread_4 = value;
		Il2CppCodeGenWriteBarrier(&___mSendThread_4, value);
	}

	inline static int32_t get_offset_of_mThreadRunning_5() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___mThreadRunning_5)); }
	inline bool get_mThreadRunning_5() const { return ___mThreadRunning_5; }
	inline bool* get_address_of_mThreadRunning_5() { return &___mThreadRunning_5; }
	inline void set_mThreadRunning_5(bool value)
	{
		___mThreadRunning_5 = value;
	}

	inline static int32_t get_offset_of_mSendBuffer_8() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___mSendBuffer_8)); }
	inline CircularBuffer_1_t1586745557 * get_mSendBuffer_8() const { return ___mSendBuffer_8; }
	inline CircularBuffer_1_t1586745557 ** get_address_of_mSendBuffer_8() { return &___mSendBuffer_8; }
	inline void set_mSendBuffer_8(CircularBuffer_1_t1586745557 * value)
	{
		___mSendBuffer_8 = value;
		Il2CppCodeGenWriteBarrier(&___mSendBuffer_8, value);
	}

	inline static int32_t get_offset_of_mRecvBuffer_9() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ___mRecvBuffer_9)); }
	inline CircularBuffer_1_t1586745557 * get_mRecvBuffer_9() const { return ___mRecvBuffer_9; }
	inline CircularBuffer_1_t1586745557 ** get_address_of_mRecvBuffer_9() { return &___mRecvBuffer_9; }
	inline void set_mRecvBuffer_9(CircularBuffer_1_t1586745557 * value)
	{
		___mRecvBuffer_9 = value;
		Il2CppCodeGenWriteBarrier(&___mRecvBuffer_9, value);
	}

	inline static int32_t get_offset_of__packetHandleDic_10() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143, ____packetHandleDic_10)); }
	inline Dictionary_2_t265606587 * get__packetHandleDic_10() const { return ____packetHandleDic_10; }
	inline Dictionary_2_t265606587 ** get_address_of__packetHandleDic_10() { return &____packetHandleDic_10; }
	inline void set__packetHandleDic_10(Dictionary_2_t265606587 * value)
	{
		____packetHandleDic_10 = value;
		Il2CppCodeGenWriteBarrier(&____packetHandleDic_10, value);
	}
};

struct NetworkManager_t226491143_StaticFields
{
public:
	// NetworkManager NetworkManager::instance
	NetworkManager_t226491143 * ___instance_2;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(NetworkManager_t226491143_StaticFields, ___instance_2)); }
	inline NetworkManager_t226491143 * get_instance_2() const { return ___instance_2; }
	inline NetworkManager_t226491143 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(NetworkManager_t226491143 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
