﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// Owlies.Core.ConnectionManager
struct ConnectionManager_t3412412609;
// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Owlies.Core.Singleton`1<Owlies.Core.ConnectionManager>
struct  Singleton_1_t2612389678  : public MonoBehaviour_t1158329972
{
public:

public:
};

struct Singleton_1_t2612389678_StaticFields
{
public:
	// T Owlies.Core.Singleton`1::_instance
	ConnectionManager_t3412412609 * ____instance_2;
	// System.Object Owlies.Core.Singleton`1::_lock
	Il2CppObject * ____lock_3;
	// System.Boolean Owlies.Core.Singleton`1::applicationIsQuitting
	bool ___applicationIsQuitting_4;

public:
	inline static int32_t get_offset_of__instance_2() { return static_cast<int32_t>(offsetof(Singleton_1_t2612389678_StaticFields, ____instance_2)); }
	inline ConnectionManager_t3412412609 * get__instance_2() const { return ____instance_2; }
	inline ConnectionManager_t3412412609 ** get_address_of__instance_2() { return &____instance_2; }
	inline void set__instance_2(ConnectionManager_t3412412609 * value)
	{
		____instance_2 = value;
		Il2CppCodeGenWriteBarrier(&____instance_2, value);
	}

	inline static int32_t get_offset_of__lock_3() { return static_cast<int32_t>(offsetof(Singleton_1_t2612389678_StaticFields, ____lock_3)); }
	inline Il2CppObject * get__lock_3() const { return ____lock_3; }
	inline Il2CppObject ** get_address_of__lock_3() { return &____lock_3; }
	inline void set__lock_3(Il2CppObject * value)
	{
		____lock_3 = value;
		Il2CppCodeGenWriteBarrier(&____lock_3, value);
	}

	inline static int32_t get_offset_of_applicationIsQuitting_4() { return static_cast<int32_t>(offsetof(Singleton_1_t2612389678_StaticFields, ___applicationIsQuitting_4)); }
	inline bool get_applicationIsQuitting_4() const { return ___applicationIsQuitting_4; }
	inline bool* get_address_of_applicationIsQuitting_4() { return &___applicationIsQuitting_4; }
	inline void set_applicationIsQuitting_4(bool value)
	{
		___applicationIsQuitting_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif