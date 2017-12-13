#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4148409433  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Rigidbody2D PlayerController::mRigidbody
	Rigidbody2D_t502193897 * ___mRigidbody_2;
	// System.Single PlayerController::horizontalSpeed
	float ___horizontalSpeed_3;
	// System.Single PlayerController::verticalSpeed
	float ___verticalSpeed_4;
	// System.Int32 PlayerController::isLeftJumpEnabled
	int32_t ___isLeftJumpEnabled_5;
	// System.Int32 PlayerController::isRightJumpEnabled
	int32_t ___isRightJumpEnabled_6;
	// System.Boolean PlayerController::isJumping
	bool ___isJumping_7;
	// System.Boolean PlayerController::isDead
	bool ___isDead_8;

public:
	inline static int32_t get_offset_of_mRigidbody_2() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___mRigidbody_2)); }
	inline Rigidbody2D_t502193897 * get_mRigidbody_2() const { return ___mRigidbody_2; }
	inline Rigidbody2D_t502193897 ** get_address_of_mRigidbody_2() { return &___mRigidbody_2; }
	inline void set_mRigidbody_2(Rigidbody2D_t502193897 * value)
	{
		___mRigidbody_2 = value;
		Il2CppCodeGenWriteBarrier(&___mRigidbody_2, value);
	}

	inline static int32_t get_offset_of_horizontalSpeed_3() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___horizontalSpeed_3)); }
	inline float get_horizontalSpeed_3() const { return ___horizontalSpeed_3; }
	inline float* get_address_of_horizontalSpeed_3() { return &___horizontalSpeed_3; }
	inline void set_horizontalSpeed_3(float value)
	{
		___horizontalSpeed_3 = value;
	}

	inline static int32_t get_offset_of_verticalSpeed_4() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___verticalSpeed_4)); }
	inline float get_verticalSpeed_4() const { return ___verticalSpeed_4; }
	inline float* get_address_of_verticalSpeed_4() { return &___verticalSpeed_4; }
	inline void set_verticalSpeed_4(float value)
	{
		___verticalSpeed_4 = value;
	}

	inline static int32_t get_offset_of_isLeftJumpEnabled_5() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isLeftJumpEnabled_5)); }
	inline int32_t get_isLeftJumpEnabled_5() const { return ___isLeftJumpEnabled_5; }
	inline int32_t* get_address_of_isLeftJumpEnabled_5() { return &___isLeftJumpEnabled_5; }
	inline void set_isLeftJumpEnabled_5(int32_t value)
	{
		___isLeftJumpEnabled_5 = value;
	}

	inline static int32_t get_offset_of_isRightJumpEnabled_6() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isRightJumpEnabled_6)); }
	inline int32_t get_isRightJumpEnabled_6() const { return ___isRightJumpEnabled_6; }
	inline int32_t* get_address_of_isRightJumpEnabled_6() { return &___isRightJumpEnabled_6; }
	inline void set_isRightJumpEnabled_6(int32_t value)
	{
		___isRightJumpEnabled_6 = value;
	}

	inline static int32_t get_offset_of_isJumping_7() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isJumping_7)); }
	inline bool get_isJumping_7() const { return ___isJumping_7; }
	inline bool* get_address_of_isJumping_7() { return &___isJumping_7; }
	inline void set_isJumping_7(bool value)
	{
		___isJumping_7 = value;
	}

	inline static int32_t get_offset_of_isDead_8() { return static_cast<int32_t>(offsetof(PlayerController_t4148409433, ___isDead_8)); }
	inline bool get_isDead_8() const { return ___isDead_8; }
	inline bool* get_address_of_isDead_8() { return &___isDead_8; }
	inline void set_isDead_8(bool value)
	{
		___isDead_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
