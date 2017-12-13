#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.AudioSource
struct AudioSource_t1135106623;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MusicController
struct  MusicController_t4192593383  : public MonoBehaviour_t1158329972
{
public:
	// System.Single MusicController::startDelay
	float ___startDelay_2;
	// UnityEngine.AudioSource MusicController::mAudioSource
	AudioSource_t1135106623 * ___mAudioSource_3;

public:
	inline static int32_t get_offset_of_startDelay_2() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___startDelay_2)); }
	inline float get_startDelay_2() const { return ___startDelay_2; }
	inline float* get_address_of_startDelay_2() { return &___startDelay_2; }
	inline void set_startDelay_2(float value)
	{
		___startDelay_2 = value;
	}

	inline static int32_t get_offset_of_mAudioSource_3() { return static_cast<int32_t>(offsetof(MusicController_t4192593383, ___mAudioSource_3)); }
	inline AudioSource_t1135106623 * get_mAudioSource_3() const { return ___mAudioSource_3; }
	inline AudioSource_t1135106623 ** get_address_of_mAudioSource_3() { return &___mAudioSource_3; }
	inline void set_mAudioSource_3(AudioSource_t1135106623 * value)
	{
		___mAudioSource_3 = value;
		Il2CppCodeGenWriteBarrier(&___mAudioSource_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
