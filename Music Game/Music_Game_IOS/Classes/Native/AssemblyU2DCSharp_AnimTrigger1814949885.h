#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "AssemblyU2DCSharp_AnimTrigger_Layer3644309693.h"

// UnityEngine.Animation
struct Animation_t2068071072;
// MusicController
struct MusicController_t4192593383;
// PlayerController
struct PlayerController_t4148409433;
// UnityEngine.GameObject
struct GameObject_t1756533147;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// AnimTrigger
struct  AnimTrigger_t1814949885  : public MonoBehaviour_t1158329972
{
public:
	// System.Single AnimTrigger::timeToTrigger
	float ___timeToTrigger_2;
	// UnityEngine.Animation AnimTrigger::anim
	Animation_t2068071072 * ___anim_3;
	// MusicController AnimTrigger::musicCtrl
	MusicController_t4192593383 * ___musicCtrl_4;
	// PlayerController AnimTrigger::playerCtrl
	PlayerController_t4148409433 * ___playerCtrl_5;
	// UnityEngine.GameObject AnimTrigger::player
	GameObject_t1756533147 * ___player_6;
	// AnimTrigger/Layer AnimTrigger::layer
	int32_t ___layer_7;
	// System.Single AnimTrigger::backLayerSpeed
	float ___backLayerSpeed_8;
	// System.Boolean AnimTrigger::triggered
	bool ___triggered_9;

public:
	inline static int32_t get_offset_of_timeToTrigger_2() { return static_cast<int32_t>(offsetof(AnimTrigger_t1814949885, ___timeToTrigger_2)); }
	inline float get_timeToTrigger_2() const { return ___timeToTrigger_2; }
	inline float* get_address_of_timeToTrigger_2() { return &___timeToTrigger_2; }
	inline void set_timeToTrigger_2(float value)
	{
		___timeToTrigger_2 = value;
	}

	inline static int32_t get_offset_of_anim_3() { return static_cast<int32_t>(offsetof(AnimTrigger_t1814949885, ___anim_3)); }
	inline Animation_t2068071072 * get_anim_3() const { return ___anim_3; }
	inline Animation_t2068071072 ** get_address_of_anim_3() { return &___anim_3; }
	inline void set_anim_3(Animation_t2068071072 * value)
	{
		___anim_3 = value;
		Il2CppCodeGenWriteBarrier(&___anim_3, value);
	}

	inline static int32_t get_offset_of_musicCtrl_4() { return static_cast<int32_t>(offsetof(AnimTrigger_t1814949885, ___musicCtrl_4)); }
	inline MusicController_t4192593383 * get_musicCtrl_4() const { return ___musicCtrl_4; }
	inline MusicController_t4192593383 ** get_address_of_musicCtrl_4() { return &___musicCtrl_4; }
	inline void set_musicCtrl_4(MusicController_t4192593383 * value)
	{
		___musicCtrl_4 = value;
		Il2CppCodeGenWriteBarrier(&___musicCtrl_4, value);
	}

	inline static int32_t get_offset_of_playerCtrl_5() { return static_cast<int32_t>(offsetof(AnimTrigger_t1814949885, ___playerCtrl_5)); }
	inline PlayerController_t4148409433 * get_playerCtrl_5() const { return ___playerCtrl_5; }
	inline PlayerController_t4148409433 ** get_address_of_playerCtrl_5() { return &___playerCtrl_5; }
	inline void set_playerCtrl_5(PlayerController_t4148409433 * value)
	{
		___playerCtrl_5 = value;
		Il2CppCodeGenWriteBarrier(&___playerCtrl_5, value);
	}

	inline static int32_t get_offset_of_player_6() { return static_cast<int32_t>(offsetof(AnimTrigger_t1814949885, ___player_6)); }
	inline GameObject_t1756533147 * get_player_6() const { return ___player_6; }
	inline GameObject_t1756533147 ** get_address_of_player_6() { return &___player_6; }
	inline void set_player_6(GameObject_t1756533147 * value)
	{
		___player_6 = value;
		Il2CppCodeGenWriteBarrier(&___player_6, value);
	}

	inline static int32_t get_offset_of_layer_7() { return static_cast<int32_t>(offsetof(AnimTrigger_t1814949885, ___layer_7)); }
	inline int32_t get_layer_7() const { return ___layer_7; }
	inline int32_t* get_address_of_layer_7() { return &___layer_7; }
	inline void set_layer_7(int32_t value)
	{
		___layer_7 = value;
	}

	inline static int32_t get_offset_of_backLayerSpeed_8() { return static_cast<int32_t>(offsetof(AnimTrigger_t1814949885, ___backLayerSpeed_8)); }
	inline float get_backLayerSpeed_8() const { return ___backLayerSpeed_8; }
	inline float* get_address_of_backLayerSpeed_8() { return &___backLayerSpeed_8; }
	inline void set_backLayerSpeed_8(float value)
	{
		___backLayerSpeed_8 = value;
	}

	inline static int32_t get_offset_of_triggered_9() { return static_cast<int32_t>(offsetof(AnimTrigger_t1814949885, ___triggered_9)); }
	inline bool get_triggered_9() const { return ___triggered_9; }
	inline bool* get_address_of_triggered_9() { return &___triggered_9; }
	inline void set_triggered_9(bool value)
	{
		___triggered_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
