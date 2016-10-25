struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 72 classes
	//0. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//4. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//5. GUITexture
	void RegisterClass_GUITexture();
	RegisterClass_GUITexture();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//8. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//9. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//10. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//11. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//12. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//13. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//14. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//15. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//16. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//17. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//18. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//19. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//20. CharacterController
	void RegisterClass_CharacterController();
	RegisterClass_CharacterController();

	//21. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//22. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//23. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//24. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//25. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//26. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//27. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//28. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//29. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//30. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//31. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//32. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//33. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//34. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//35. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//36. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//37. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//38. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//39. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//40. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//41. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//42. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//43. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//44. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//45. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//46. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//47. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//48. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//49. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//50. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//51. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//52. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//53. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//54. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//55. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//56. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//57. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//58. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//59. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//60. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//61. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//62. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//63. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//64. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//65. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//66. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//67. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//68. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//69. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//70. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//71. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
