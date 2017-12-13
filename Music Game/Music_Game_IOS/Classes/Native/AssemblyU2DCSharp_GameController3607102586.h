#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "AssemblyU2DCSharp_Owlies_Core_Singleton_1_gen2807079655.h"

// UnityEngine.GameObject
struct GameObject_t1756533147;
// PlayerController
struct PlayerController_t4148409433;
// MusicController
struct MusicController_t4192593383;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t1445631064;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController
struct  GameController_t3607102586  : public Singleton_1_t2807079655
{
public:
	// UnityEngine.GameObject GameController::player
	GameObject_t1756533147 * ___player_5;
	// PlayerController GameController::playerCtrl
	PlayerController_t4148409433 * ___playerCtrl_6;
	// MusicController GameController::musicCtrl
	MusicController_t4192593383 * ___musicCtrl_7;
	// UnityEngine.GameObject GameController::debugInfo
	GameObject_t1756533147 * ___debugInfo_8;
	// System.Collections.Generic.List`1<System.Single> GameController::onsetList
	List_1_t1445631064 * ___onsetList_9;

public:
	inline static int32_t get_offset_of_player_5() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___player_5)); }
	inline GameObject_t1756533147 * get_player_5() const { return ___player_5; }
	inline GameObject_t1756533147 ** get_address_of_player_5() { return &___player_5; }
	inline void set_player_5(GameObject_t1756533147 * value)
	{
		___player_5 = value;
		Il2CppCodeGenWriteBarrier(&___player_5, value);
	}

	inline static int32_t get_offset_of_playerCtrl_6() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___playerCtrl_6)); }
	inline PlayerController_t4148409433 * get_playerCtrl_6() const { return ___playerCtrl_6; }
	inline PlayerController_t4148409433 ** get_address_of_playerCtrl_6() { return &___playerCtrl_6; }
	inline void set_playerCtrl_6(PlayerController_t4148409433 * value)
	{
		___playerCtrl_6 = value;
		Il2CppCodeGenWriteBarrier(&___playerCtrl_6, value);
	}

	inline static int32_t get_offset_of_musicCtrl_7() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___musicCtrl_7)); }
	inline MusicController_t4192593383 * get_musicCtrl_7() const { return ___musicCtrl_7; }
	inline MusicController_t4192593383 ** get_address_of_musicCtrl_7() { return &___musicCtrl_7; }
	inline void set_musicCtrl_7(MusicController_t4192593383 * value)
	{
		___musicCtrl_7 = value;
		Il2CppCodeGenWriteBarrier(&___musicCtrl_7, value);
	}

	inline static int32_t get_offset_of_debugInfo_8() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___debugInfo_8)); }
	inline GameObject_t1756533147 * get_debugInfo_8() const { return ___debugInfo_8; }
	inline GameObject_t1756533147 ** get_address_of_debugInfo_8() { return &___debugInfo_8; }
	inline void set_debugInfo_8(GameObject_t1756533147 * value)
	{
		___debugInfo_8 = value;
		Il2CppCodeGenWriteBarrier(&___debugInfo_8, value);
	}

	inline static int32_t get_offset_of_onsetList_9() { return static_cast<int32_t>(offsetof(GameController_t3607102586, ___onsetList_9)); }
	inline List_1_t1445631064 * get_onsetList_9() const { return ___onsetList_9; }
	inline List_1_t1445631064 ** get_address_of_onsetList_9() { return &___onsetList_9; }
	inline void set_onsetList_9(List_1_t1445631064 * value)
	{
		___onsetList_9 = value;
		Il2CppCodeGenWriteBarrier(&___onsetList_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
