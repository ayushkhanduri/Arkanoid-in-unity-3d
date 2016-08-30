#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// UnityEngine.AudioClip
struct AudioClip_t794140988;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.GameObject
struct GameObject_t3674682005;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BallScript
struct  BallScript_t3762807754  : public MonoBehaviour_t667441552
{
public:
	// System.Boolean BallScript::ballIsActive
	bool ___ballIsActive_2;
	// UnityEngine.Vector3 BallScript::ballPosition
	Vector3_t4282066566  ___ballPosition_3;
	// UnityEngine.Vector2 BallScript::ballInitForce
	Vector2_t4282066565  ___ballInitForce_4;
	// UnityEngine.Rigidbody2D BallScript::rb
	Rigidbody2D_t1743771669 * ___rb_5;
	// UnityEngine.AudioClip BallScript::hitSound
	AudioClip_t794140988 * ___hitSound_6;
	// UnityEngine.AudioSource BallScript::playAudio
	AudioSource_t1740077639 * ___playAudio_7;
	// UnityEngine.GameObject BallScript::playerObject
	GameObject_t3674682005 * ___playerObject_8;

public:
	inline static int32_t get_offset_of_ballIsActive_2() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___ballIsActive_2)); }
	inline bool get_ballIsActive_2() const { return ___ballIsActive_2; }
	inline bool* get_address_of_ballIsActive_2() { return &___ballIsActive_2; }
	inline void set_ballIsActive_2(bool value)
	{
		___ballIsActive_2 = value;
	}

	inline static int32_t get_offset_of_ballPosition_3() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___ballPosition_3)); }
	inline Vector3_t4282066566  get_ballPosition_3() const { return ___ballPosition_3; }
	inline Vector3_t4282066566 * get_address_of_ballPosition_3() { return &___ballPosition_3; }
	inline void set_ballPosition_3(Vector3_t4282066566  value)
	{
		___ballPosition_3 = value;
	}

	inline static int32_t get_offset_of_ballInitForce_4() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___ballInitForce_4)); }
	inline Vector2_t4282066565  get_ballInitForce_4() const { return ___ballInitForce_4; }
	inline Vector2_t4282066565 * get_address_of_ballInitForce_4() { return &___ballInitForce_4; }
	inline void set_ballInitForce_4(Vector2_t4282066565  value)
	{
		___ballInitForce_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___rb_5)); }
	inline Rigidbody2D_t1743771669 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_t1743771669 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_t1743771669 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier(&___rb_5, value);
	}

	inline static int32_t get_offset_of_hitSound_6() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___hitSound_6)); }
	inline AudioClip_t794140988 * get_hitSound_6() const { return ___hitSound_6; }
	inline AudioClip_t794140988 ** get_address_of_hitSound_6() { return &___hitSound_6; }
	inline void set_hitSound_6(AudioClip_t794140988 * value)
	{
		___hitSound_6 = value;
		Il2CppCodeGenWriteBarrier(&___hitSound_6, value);
	}

	inline static int32_t get_offset_of_playAudio_7() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___playAudio_7)); }
	inline AudioSource_t1740077639 * get_playAudio_7() const { return ___playAudio_7; }
	inline AudioSource_t1740077639 ** get_address_of_playAudio_7() { return &___playAudio_7; }
	inline void set_playAudio_7(AudioSource_t1740077639 * value)
	{
		___playAudio_7 = value;
		Il2CppCodeGenWriteBarrier(&___playAudio_7, value);
	}

	inline static int32_t get_offset_of_playerObject_8() { return static_cast<int32_t>(offsetof(BallScript_t3762807754, ___playerObject_8)); }
	inline GameObject_t3674682005 * get_playerObject_8() const { return ___playerObject_8; }
	inline GameObject_t3674682005 ** get_address_of_playerObject_8() { return &___playerObject_8; }
	inline void set_playerObject_8(GameObject_t3674682005 * value)
	{
		___playerObject_8 = value;
		Il2CppCodeGenWriteBarrier(&___playerObject_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
