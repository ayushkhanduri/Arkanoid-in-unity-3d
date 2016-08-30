struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 58 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//10. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//11. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//12. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//13. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//14. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//15. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//16. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//17. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//18. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//19. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//20. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//21. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//22. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//23. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//24. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//25. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//26. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//27. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//28. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//29. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//30. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//31. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//32. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//33. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//34. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//35. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//36. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//37. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//38. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//39. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//40. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//41. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//42. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//43. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//44. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//45. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//46. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//47. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//48. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//49. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//50. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//51. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//52. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//53. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//54. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//55. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//56. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//57. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
