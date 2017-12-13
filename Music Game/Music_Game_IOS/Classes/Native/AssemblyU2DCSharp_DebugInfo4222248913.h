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
// MusicController
struct MusicController_t4192593383;
// PlayerController
struct PlayerController_t4148409433;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DebugInfo
struct  DebugInfo_t4222248913  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.AudioSource DebugInfo::audioSource
	AudioSource_t1135106623 * ___audioSource_2;
	// MusicController DebugInfo::musicCtrl
	MusicController_t4192593383 * ___musicCtrl_3;
	// PlayerController DebugInfo::playerCtrl
	PlayerController_t4148409433 * ___playerCtrl_4;

public:
	inline static int32_t get_offset_of_audioSource_2() { return static_cast<int32_t>(offsetof(DebugInfo_t4222248913, ___audioSource_2)); }
	inline AudioSource_t1135106623 * get_audioSource_2() const { return ___audioSource_2; }
	inline AudioSource_t1135106623 ** get_address_of_audioSource_2() { return &___audioSource_2; }
	inline void set_audioSource_2(AudioSource_t1135106623 * value)
	{
		___audioSource_2 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_2, value);
	}

	inline static int32_t get_offset_of_musicCtrl_3() { return static_cast<int32_t>(offsetof(DebugInfo_t4222248913, ___musicCtrl_3)); }
	inline MusicController_t4192593383 * get_musicCtrl_3() const { return ___musicCtrl_3; }
	inline MusicController_t4192593383 ** get_address_of_musicCtrl_3() { return &___musicCtrl_3; }
	inline void set_musicCtrl_3(MusicController_t4192593383 * value)
	{
		___musicCtrl_3 = value;
		Il2CppCodeGenWriteBarrier(&___musicCtrl_3, value);
	}

	inline static int32_t get_offset_of_playerCtrl_4() { return static_cast<int32_t>(offsetof(DebugInfo_t4222248913, ___playerCtrl_4)); }
	inline PlayerController_t4148409433 * get_playerCtrl_4() const { return ___playerCtrl_4; }
	inline PlayerController_t4148409433 ** get_address_of_playerCtrl_4() { return &___playerCtrl_4; }
	inline void set_playerCtrl_4(PlayerController_t4148409433 * value)
	{
		___playerCtrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerCtrl_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
