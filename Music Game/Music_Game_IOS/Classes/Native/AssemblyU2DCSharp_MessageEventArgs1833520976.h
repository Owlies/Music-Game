#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_EventArgs3289624707.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MessageEventArgs
struct  MessageEventArgs_t1833520976  : public EventArgs_t3289624707
{
public:
	// System.Object MessageEventArgs::data
	Il2CppObject * ___data_1;

public:
	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(MessageEventArgs_t1833520976, ___data_1)); }
	inline Il2CppObject * get_data_1() const { return ___data_1; }
	inline Il2CppObject ** get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Il2CppObject * value)
	{
		___data_1 = value;
		Il2CppCodeGenWriteBarrier(&___data_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
