#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_PadController_ControlType650934207.h"





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PadController
struct  PadController_t833032991  : public MonoBehaviour_t1158329972
{
public:
	// PadController/ControlType PadController::controlType
	int32_t ___controlType_2;
	// System.Boolean PadController::jumpEnabled
	bool ___jumpEnabled_3;

public:
	inline static int32_t get_offset_of_controlType_2() { return static_cast<int32_t>(offsetof(PadController_t833032991, ___controlType_2)); }
	inline int32_t get_controlType_2() const { return ___controlType_2; }
	inline int32_t* get_address_of_controlType_2() { return &___controlType_2; }
	inline void set_controlType_2(int32_t value)
	{
		___controlType_2 = value;
	}

	inline static int32_t get_offset_of_jumpEnabled_3() { return static_cast<int32_t>(offsetof(PadController_t833032991, ___jumpEnabled_3)); }
	inline bool get_jumpEnabled_3() const { return ___jumpEnabled_3; }
	inline bool* get_address_of_jumpEnabled_3() { return &___jumpEnabled_3; }
	inline void set_jumpEnabled_3(bool value)
	{
		___jumpEnabled_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
