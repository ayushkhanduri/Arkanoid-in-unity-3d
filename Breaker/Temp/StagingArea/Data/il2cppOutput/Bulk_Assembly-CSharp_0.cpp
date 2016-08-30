#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// BallScript
struct BallScript_t3762807754;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t1743771669;
// System.Object
struct Il2CppObject;
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.Collision2D
struct Collision2D_t2859305914;
// BlockScript
struct BlockScript_t2537016216;
// PlayerScript
struct PlayerScript_t4191371052;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790.h"
#include "AssemblyU2DCSharp_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DCSharp_BallScript3762807754.h"
#include "AssemblyU2DCSharp_BallScript3762807754MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Transform1659122786MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "mscorlib_System_Single4291918972.h"
#include "mscorlib_System_Boolean476798718.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rigidbody2D1743771669MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Object3071478659MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GameObject3674682005MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Debug4195163081MethodDeclarations.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "UnityEngine_UnityEngine_Object3071478659.h"
#include "mscorlib_System_Object4170816371.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914.h"
#include "UnityEngine_UnityEngine_AudioSource1740077639MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AudioClip794140988.h"
#include "AssemblyU2DCSharp_BlockScript2537016216.h"
#include "AssemblyU2DCSharp_BlockScript2537016216MethodDeclarations.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_Collision2D2859305914MethodDeclarations.h"
#include "mscorlib_System_String7231557MethodDeclarations.h"
#include "UnityEngine_ArrayTypes.h"
#include "AssemblyU2DCSharp_PlayerScript4191371052.h"
#include "AssemblyU2DCSharp_PlayerScript4191371052MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Application2856536070MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Vector34282066566MethodDeclarations.h"
#include "UnityEngine_UnityEngine_KeyCode3128317986.h"
#include "UnityEngine_UnityEngine_Rect4241904616MethodDeclarations.h"
#include "UnityEngine_UnityEngine_GUI3134605553MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "mscorlib_ArrayTypes.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
#define Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, method) ((  Rigidbody2D_t1743771669 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t1740077639_m3821406207(__this, method) ((  AudioSource_t1740077639 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void BallScript::.ctor()
extern "C"  void BallScript__ctor_m4238759953 (BallScript_t3762807754 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BallScript::Start()
extern const MethodInfo* Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var;
extern const uint32_t BallScript_Start_m3185897745_MetadataUsageId;
extern "C"  void BallScript_Start_m3185897745 (BallScript_t3762807754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallScript_Start_m3185897745_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector2_t4282066565  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Vector2__ctor_m1517109030(&L_0, (100.0f), (300.0f), /*hidden argument*/NULL);
		__this->set_ballInitForce_4(L_0);
		__this->set_ballIsActive_2((bool)0);
		Transform_t1659122786 * L_1 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		__this->set_ballPosition_3(L_2);
		Rigidbody2D_t1743771669 * L_3 = Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_t1743771669_m2201104241_MethodInfo_var);
		__this->set_rb_5(L_3);
		AudioSource_t1740077639 * L_4 = Component_GetComponent_TisAudioSource_t1740077639_m3821406207(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var);
		__this->set_playAudio_7(L_4);
		return;
	}
}
// System.Void BallScript::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2320462;
extern Il2CppCodeGenString* _stringLiteral2648181248;
extern Il2CppCodeGenString* _stringLiteral3650010147;
extern const uint32_t BallScript_Update_m4279401756_MetadataUsageId;
extern "C"  void BallScript_Update_m4279401756 (BallScript_t3762807754 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BallScript_Update_m4279401756_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t4282066566  V_0;
	memset(&V_0, 0, sizeof(V_0));
	Vector3_t4282066566  V_1;
	memset(&V_1, 0, sizeof(V_1));
	Vector3_t4282066566  V_2;
	memset(&V_2, 0, sizeof(V_2));
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetButtonDown_m1879002085(NULL /*static, unused*/, _stringLiteral2320462, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0046;
		}
	}
	{
		bool L_1 = __this->get_ballIsActive_2();
		if (L_1)
		{
			goto IL_0046;
		}
	}
	{
		Rigidbody2D_t1743771669 * L_2 = __this->get_rb_5();
		Rigidbody2D_set_isKinematic_m222467693(L_2, (bool)0, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_3 = __this->get_rb_5();
		Vector2_t4282066565  L_4 = __this->get_ballInitForce_4();
		Rigidbody2D_AddForce_m312397382(L_3, L_4, /*hidden argument*/NULL);
		bool L_5 = __this->get_ballIsActive_2();
		__this->set_ballIsActive_2((bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0));
	}

IL_0046:
	{
		bool L_6 = __this->get_ballIsActive_2();
		if (L_6)
		{
			goto IL_0096;
		}
	}
	{
		GameObject_t3674682005 * L_7 = __this->get_playerObject_8();
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		bool L_8 = Object_op_Inequality_m1296218211(NULL /*static, unused*/, L_7, (Object_t3071478659 *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0096;
		}
	}
	{
		Vector3_t4282066566 * L_9 = __this->get_address_of_ballPosition_3();
		GameObject_t3674682005 * L_10 = __this->get_playerObject_8();
		Transform_t1659122786 * L_11 = GameObject_get_transform_m1278640159(L_10, /*hidden argument*/NULL);
		Vector3_t4282066566  L_12 = Transform_get_position_m2211398607(L_11, /*hidden argument*/NULL);
		V_0 = L_12;
		float L_13 = (&V_0)->get_x_1();
		L_9->set_x_1(L_13);
		Transform_t1659122786 * L_14 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_15 = __this->get_ballPosition_3();
		Transform_set_position_m3111394108(L_14, L_15, /*hidden argument*/NULL);
	}

IL_0096:
	{
		bool L_16 = __this->get_ballIsActive_2();
		if (!L_16)
		{
			goto IL_0138;
		}
	}
	{
		Transform_t1659122786 * L_17 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_18 = Transform_get_position_m2211398607(L_17, /*hidden argument*/NULL);
		V_1 = L_18;
		float L_19 = (&V_1)->get_y_2();
		if ((!(((float)L_19) < ((float)(-5.5f)))))
		{
			goto IL_0138;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m776311748(NULL /*static, unused*/, _stringLiteral2648181248, __this, /*hidden argument*/NULL);
		bool L_20 = __this->get_ballIsActive_2();
		__this->set_ballIsActive_2((bool)((((int32_t)L_20) == ((int32_t)0))? 1 : 0));
		Vector3_t4282066566 * L_21 = __this->get_address_of_ballPosition_3();
		GameObject_t3674682005 * L_22 = __this->get_playerObject_8();
		Transform_t1659122786 * L_23 = GameObject_get_transform_m1278640159(L_22, /*hidden argument*/NULL);
		Vector3_t4282066566  L_24 = Transform_get_position_m2211398607(L_23, /*hidden argument*/NULL);
		V_2 = L_24;
		float L_25 = (&V_2)->get_x_1();
		L_21->set_x_1(L_25);
		Vector3_t4282066566 * L_26 = __this->get_address_of_ballPosition_3();
		L_26->set_y_2((-3.26f));
		Transform_t1659122786 * L_27 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_28 = __this->get_ballPosition_3();
		Transform_set_position_m3111394108(L_27, L_28, /*hidden argument*/NULL);
		Rigidbody2D_t1743771669 * L_29 = __this->get_rb_5();
		Rigidbody2D_set_isKinematic_m222467693(L_29, (bool)1, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_30 = __this->get_playerObject_8();
		GameObject_SendMessage_m2244324713(L_30, _stringLiteral3650010147, /*hidden argument*/NULL);
	}

IL_0138:
	{
		return;
	}
}
// System.Void BallScript::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void BallScript_OnCollisionEnter2D_m2728251387 (BallScript_t3762807754 * __this, Collision2D_t2859305914 * ___collider0, const MethodInfo* method)
{
	{
		bool L_0 = __this->get_ballIsActive_2();
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		AudioSource_t1740077639 * L_1 = __this->get_playAudio_7();
		AudioClip_t794140988 * L_2 = __this->get_hitSound_6();
		AudioSource_PlayOneShot_m1217449713(L_1, L_2, /*hidden argument*/NULL);
	}

IL_001c:
	{
		return;
	}
}
// System.Void BlockScript::.ctor()
extern "C"  void BlockScript__ctor_m841169619 (BlockScript_t2537016216 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void BlockScript::Start()
extern "C"  void BlockScript_Start_m4083274707 (BlockScript_t2537016216 * __this, const MethodInfo* method)
{
	{
		__this->set_numberOfHits_4(0);
		return;
	}
}
// System.Void BlockScript::Update()
extern "C"  void BlockScript_Update_m2033316506 (BlockScript_t2537016216 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void BlockScript::OnCollisionEnter2D(UnityEngine.Collision2D)
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* Object_t3071478659_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2062879;
extern Il2CppCodeGenString* _stringLiteral2393081601;
extern Il2CppCodeGenString* _stringLiteral4205053156;
extern const uint32_t BlockScript_OnCollisionEnter2D_m3623877053_MetadataUsageId;
extern "C"  void BlockScript_OnCollisionEnter2D_m3623877053 (BlockScript_t2537016216 * __this, Collision2D_t2859305914 * ___collision0, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (BlockScript_OnCollisionEnter2D_m3623877053_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t3674682005 * V_0 = NULL;
	{
		Collision2D_t2859305914 * L_0 = ___collision0;
		GameObject_t3674682005 * L_1 = Collision2D_get_gameObject_m718845954(L_0, /*hidden argument*/NULL);
		String_t* L_2 = GameObject_get_tag_m211612200(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_2, _stringLiteral2062879, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_4 = __this->get_numberOfHits_4();
		__this->set_numberOfHits_4(((int32_t)((int32_t)L_4+(int32_t)1)));
		int32_t L_5 = __this->get_numberOfHits_4();
		int32_t L_6 = __this->get_hitsToKill_2();
		if ((!(((uint32_t)L_5) == ((uint32_t)L_6))))
		{
			goto IL_0067;
		}
	}
	{
		GameObjectU5BU5D_t2662109048* L_7 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral2393081601, /*hidden argument*/NULL);
		int32_t L_8 = 0;
		GameObject_t3674682005 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_0 = L_9;
		GameObject_t3674682005 * L_10 = V_0;
		int32_t L_11 = __this->get_points_3();
		int32_t L_12 = L_11;
		Il2CppObject * L_13 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_12);
		GameObject_SendMessage_m3364342903(L_10, _stringLiteral4205053156, L_13, /*hidden argument*/NULL);
		GameObject_t3674682005 * L_14 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3071478659_il2cpp_TypeInfo_var);
		Object_Destroy_m176400816(NULL /*static, unused*/, L_14, /*hidden argument*/NULL);
	}

IL_0067:
	{
		return;
	}
}
// System.Void PlayerScript::.ctor()
extern "C"  void PlayerScript__ctor_m4207609071 (PlayerScript_t4191371052 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::Start()
extern const MethodInfo* Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var;
extern const uint32_t PlayerScript_Start_m3154746863_MetadataUsageId;
extern "C"  void PlayerScript_Start_m3154746863 (PlayerScript_t4191371052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Start_m3154746863_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t3674682005 * L_0 = Component_get_gameObject_m1170635899(__this, /*hidden argument*/NULL);
		Transform_t1659122786 * L_1 = GameObject_get_transform_m1278640159(L_0, /*hidden argument*/NULL);
		Vector3_t4282066566  L_2 = Transform_get_position_m2211398607(L_1, /*hidden argument*/NULL);
		__this->set_playerPosition_3(L_2);
		__this->set_playerLives_5(3);
		__this->set_playerPoints_6(0);
		AudioSource_t1740077639 * L_3 = Component_GetComponent_TisAudioSource_t1740077639_m3821406207(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t1740077639_m3821406207_MethodInfo_var);
		__this->set_audioSource_9(L_3);
		return;
	}
}
// System.Void PlayerScript::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3381094468;
extern const uint32_t PlayerScript_Update_m3313724414_MetadataUsageId;
extern "C"  void PlayerScript_Update_m3313724414 (PlayerScript_t4191371052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_Update_m3313724414_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Vector3_t4282066566 * L_0 = __this->get_address_of_playerPosition_3();
		Vector3_t4282066566 * L_1 = L_0;
		float L_2 = L_1->get_x_1();
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		float L_3 = Input_GetAxis_m2027668530(NULL /*static, unused*/, _stringLiteral3381094468, /*hidden argument*/NULL);
		float L_4 = __this->get_playerVelocity_2();
		L_1->set_x_1(((float)((float)L_2+(float)((float)((float)L_3*(float)L_4)))));
		bool L_5 = Input_GetKeyDown_m2928824675(NULL /*static, unused*/, ((int32_t)27), /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0034;
		}
	}
	{
		Application_Quit_m1187862186(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0034:
	{
		Transform_t1659122786 * L_6 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		Vector3_t4282066566  L_7 = __this->get_playerPosition_3();
		Transform_set_position_m3111394108(L_6, L_7, /*hidden argument*/NULL);
		Vector3_t4282066566 * L_8 = __this->get_address_of_playerPosition_3();
		float L_9 = L_8->get_x_1();
		float L_10 = __this->get_boundary_4();
		if ((!(((float)L_9) < ((float)((-L_10))))))
		{
			goto IL_0089;
		}
	}
	{
		Transform_t1659122786 * L_11 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_12 = __this->get_boundary_4();
		Vector3_t4282066566 * L_13 = __this->get_address_of_playerPosition_3();
		float L_14 = L_13->get_y_2();
		Vector3_t4282066566 * L_15 = __this->get_address_of_playerPosition_3();
		float L_16 = L_15->get_z_3();
		Vector3_t4282066566  L_17;
		memset(&L_17, 0, sizeof(L_17));
		Vector3__ctor_m2926210380(&L_17, ((-L_12)), L_14, L_16, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_11, L_17, /*hidden argument*/NULL);
	}

IL_0089:
	{
		Vector3_t4282066566 * L_18 = __this->get_address_of_playerPosition_3();
		float L_19 = L_18->get_x_1();
		float L_20 = __this->get_boundary_4();
		if ((!(((float)L_19) > ((float)L_20))))
		{
			goto IL_00cb;
		}
	}
	{
		Transform_t1659122786 * L_21 = Component_get_transform_m4257140443(__this, /*hidden argument*/NULL);
		float L_22 = __this->get_boundary_4();
		Vector3_t4282066566 * L_23 = __this->get_address_of_playerPosition_3();
		float L_24 = L_23->get_y_2();
		Vector3_t4282066566 * L_25 = __this->get_address_of_playerPosition_3();
		float L_26 = L_25->get_z_3();
		Vector3_t4282066566  L_27;
		memset(&L_27, 0, sizeof(L_27));
		Vector3__ctor_m2926210380(&L_27, L_22, L_24, L_26, /*hidden argument*/NULL);
		Transform_set_position_m3111394108(L_21, L_27, /*hidden argument*/NULL);
	}

IL_00cb:
	{
		PlayerScript_winLose_m2982277118(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::addPoints(System.Int32)
extern "C"  void PlayerScript_addPoints_m3636911074 (PlayerScript_t4191371052 * __this, int32_t ___points0, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_playerPoints_6();
		int32_t L_1 = ___points0;
		__this->set_playerPoints_6(((int32_t)((int32_t)L_0+(int32_t)L_1)));
		AudioSource_t1740077639 * L_2 = __this->get_audioSource_9();
		AudioClip_t794140988 * L_3 = __this->get_pointSound_7();
		AudioSource_PlayOneShot_m1217449713(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::OnGUI()
extern Il2CppClass* ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var;
extern Il2CppClass* Int32_t1153838500_il2cpp_TypeInfo_var;
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* GUI_t3134605553_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral967680238;
extern Il2CppCodeGenString* _stringLiteral1870078900;
extern const uint32_t PlayerScript_OnGUI_m3703007721_MetadataUsageId;
extern "C"  void PlayerScript_OnGUI_m3703007721 (PlayerScript_t4191371052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_OnGUI_m3703007721_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Rect_t4241904616  L_0;
		memset(&L_0, 0, sizeof(L_0));
		Rect__ctor_m3291325233(&L_0, (5.0f), (3.0f), (200.0f), (200.0f), /*hidden argument*/NULL);
		ObjectU5BU5D_t1108656482* L_1 = ((ObjectU5BU5D_t1108656482*)SZArrayNew(ObjectU5BU5D_t1108656482_il2cpp_TypeInfo_var, (uint32_t)4));
		ArrayElementTypeCheck (L_1, _stringLiteral967680238);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppObject *)_stringLiteral967680238);
		ObjectU5BU5D_t1108656482* L_2 = L_1;
		int32_t L_3 = __this->get_playerLives_5();
		int32_t L_4 = L_3;
		Il2CppObject * L_5 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_4);
		ArrayElementTypeCheck (L_2, L_5);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppObject *)L_5);
		ObjectU5BU5D_t1108656482* L_6 = L_2;
		ArrayElementTypeCheck (L_6, _stringLiteral1870078900);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppObject *)_stringLiteral1870078900);
		ObjectU5BU5D_t1108656482* L_7 = L_6;
		int32_t L_8 = __this->get_playerPoints_6();
		int32_t L_9 = L_8;
		Il2CppObject * L_10 = Box(Int32_t1153838500_il2cpp_TypeInfo_var, &L_9);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m3016520001(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3134605553_il2cpp_TypeInfo_var);
		GUI_Label_m1483857617(NULL /*static, unused*/, L_0, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::takeLife()
extern "C"  void PlayerScript_takeLife_m3188676536 (PlayerScript_t4191371052 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = __this->get_playerLives_5();
		__this->set_playerLives_5(((int32_t)((int32_t)L_0-(int32_t)1)));
		AudioSource_t1740077639 * L_1 = __this->get_audioSource_9();
		AudioClip_t794140988 * L_2 = __this->get_lifeSound_8();
		AudioSource_PlayOneShot_m1217449713(L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerScript::winLose()
extern Il2CppClass* String_t_il2cpp_TypeInfo_var;
extern Il2CppClass* Debug_t4195163081_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral2272706893;
extern Il2CppCodeGenString* _stringLiteral64279661;
extern Il2CppCodeGenString* _stringLiteral1747622022;
extern Il2CppCodeGenString* _stringLiteral2272706894;
extern const uint32_t PlayerScript_winLose_m2982277118_MetadataUsageId;
extern "C"  void PlayerScript_winLose_m2982277118 (PlayerScript_t4191371052 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (PlayerScript_winLose_m2982277118_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = __this->get_playerLives_5();
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		Application_LoadLevel_m2722573885(NULL /*static, unused*/, _stringLiteral2272706893, /*hidden argument*/NULL);
	}

IL_0015:
	{
		GameObjectU5BU5D_t2662109048* L_1 = GameObject_FindGameObjectsWithTag_m3058873418(NULL /*static, unused*/, _stringLiteral64279661, /*hidden argument*/NULL);
		if ((((int32_t)((int32_t)(((Il2CppArray *)L_1)->max_length)))))
		{
			goto IL_0058;
		}
	}
	{
		String_t* L_2 = Application_get_loadedLevelName_m953500779(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_3 = String_op_Equality_m1260523650(NULL /*static, unused*/, L_2, _stringLiteral2272706893, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t4195163081_il2cpp_TypeInfo_var);
		Debug_Log_m1731103628(NULL /*static, unused*/, _stringLiteral1747622022, /*hidden argument*/NULL);
		Application_LoadLevel_m2722573885(NULL /*static, unused*/, _stringLiteral2272706894, /*hidden argument*/NULL);
		goto IL_0058;
	}

IL_0053:
	{
		Application_Quit_m1187862186(NULL /*static, unused*/, /*hidden argument*/NULL);
	}

IL_0058:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
