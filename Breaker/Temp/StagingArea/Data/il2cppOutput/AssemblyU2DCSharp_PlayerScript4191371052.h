#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t4191371052  : public MonoBehaviour_t667441552
{
public:
	// System.Single PlayerScript::playerVelocity
	float ___playerVelocity_2;
	// UnityEngine.Vector3 PlayerScript::playerPosition
	Vector3_t4282066566  ___playerPosition_3;
	// System.Single PlayerScript::boundary
	float ___boundary_4;
	// System.Int32 PlayerScript::playerLives
	int32_t ___playerLives_5;
	// System.Int32 PlayerScript::playerPoints
	int32_t ___playerPoints_6;
	// UnityEngine.AudioClip PlayerScript::pointSound
	AudioClip_t794140988 * ___pointSound_7;
	// UnityEngine.AudioClip PlayerScript::lifeSound
	AudioClip_t794140988 * ___lifeSound_8;
	// UnityEngine.AudioSource PlayerScript::audioSource
	AudioSource_t1740077639 * ___audioSource_9;

public:
	inline static int32_t get_offset_of_playerVelocity_2() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___playerVelocity_2)); }
	inline float get_playerVelocity_2() const { return ___playerVelocity_2; }
	inline float* get_address_of_playerVelocity_2() { return &___playerVelocity_2; }
	inline void set_playerVelocity_2(float value)
	{
		___playerVelocity_2 = value;
	}

	inline static int32_t get_offset_of_playerPosition_3() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___playerPosition_3)); }
	inline Vector3_t4282066566  get_playerPosition_3() const { return ___playerPosition_3; }
	inline Vector3_t4282066566 * get_address_of_playerPosition_3() { return &___playerPosition_3; }
	inline void set_playerPosition_3(Vector3_t4282066566  value)
	{
		___playerPosition_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___boundary_4)); }
	inline float get_boundary_4() const { return ___boundary_4; }
	inline float* get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(float value)
	{
		___boundary_4 = value;
	}

	inline static int32_t get_offset_of_playerLives_5() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___playerLives_5)); }
	inline int32_t get_playerLives_5() const { return ___playerLives_5; }
	inline int32_t* get_address_of_playerLives_5() { return &___playerLives_5; }
	inline void set_playerLives_5(int32_t value)
	{
		___playerLives_5 = value;
	}

	inline static int32_t get_offset_of_playerPoints_6() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___playerPoints_6)); }
	inline int32_t get_playerPoints_6() const { return ___playerPoints_6; }
	inline int32_t* get_address_of_playerPoints_6() { return &___playerPoints_6; }
	inline void set_playerPoints_6(int32_t value)
	{
		___playerPoints_6 = value;
	}

	inline static int32_t get_offset_of_pointSound_7() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___pointSound_7)); }
	inline AudioClip_t794140988 * get_pointSound_7() const { return ___pointSound_7; }
	inline AudioClip_t794140988 ** get_address_of_pointSound_7() { return &___pointSound_7; }
	inline void set_pointSound_7(AudioClip_t794140988 * value)
	{
		___pointSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___pointSound_7, value);
	}

	inline static int32_t get_offset_of_lifeSound_8() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___lifeSound_8)); }
	inline AudioClip_t794140988 * get_lifeSound_8() const { return ___lifeSound_8; }
	inline AudioClip_t794140988 ** get_address_of_lifeSound_8() { return &___lifeSound_8; }
	inline void set_lifeSound_8(AudioClip_t794140988 * value)
	{
		___lifeSound_8 = value;
		Il2CppCodeGenWriteBarrier(&___lifeSound_8, value);
	}

	inline static int32_t get_offset_of_audioSource_9() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___audioSource_9)); }
	inline AudioSource_t1740077639 * get_audioSource_9() const { return ___audioSource_9; }
	inline AudioSource_t1740077639 ** get_address_of_audioSource_9() { return &___audioSource_9; }
	inline void set_audioSource_9(AudioSource_t1740077639 * value)
	{
		___audioSource_9 = value;
		Il2CppCodeGenWriteBarrier(&___audioSource_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
