#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Transform
struct Transform_t3275118058;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// CameraController
struct  CameraController_t3555666667  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Transform CameraController::target
	Transform_t3275118058 * ___target_2;
	// System.Single CameraController::offsetX
	float ___offsetX_3;
	// System.Single CameraController::offsetY
	float ___offsetY_4;

public:
	inline static int32_t get_offset_of_target_2() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___target_2)); }
	inline Transform_t3275118058 * get_target_2() const { return ___target_2; }
	inline Transform_t3275118058 ** get_address_of_target_2() { return &___target_2; }
	inline void set_target_2(Transform_t3275118058 * value)
	{
		___target_2 = value;
		Il2CppCodeGenWriteBarrier(&___target_2, value);
	}

	inline static int32_t get_offset_of_offsetX_3() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___offsetX_3)); }
	inline float get_offsetX_3() const { return ___offsetX_3; }
	inline float* get_address_of_offsetX_3() { return &___offsetX_3; }
	inline void set_offsetX_3(float value)
	{
		___offsetX_3 = value;
	}

	inline static int32_t get_offset_of_offsetY_4() { return static_cast<int32_t>(offsetof(CameraController_t3555666667, ___offsetY_4)); }
	inline float get_offsetY_4() const { return ___offsetY_4; }
	inline float* get_address_of_offsetY_4() { return &___offsetY_4; }
	inline void set_offsetY_4(float value)
	{
		___offsetY_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
