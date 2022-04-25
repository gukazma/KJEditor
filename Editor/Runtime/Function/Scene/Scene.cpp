#include "Scene.h"
#include "Resource/Components/Tag.h"

#include "Function/Event/EventSystem.h"
#include "Function/Scene/EditCamera.h"
namespace Soarscape
{
	void Scene::initialize()
	{
		PublicSingleton<EventSystem>::getInstance().registerClient("EditorCamera_Process_Key", &PublicSingleton<EditorCamera>::getInstance());
	}
	SceneObject Scene::CreateObject(const std::string& name)
	{
		SceneObject entity = { m_Registry.create(), this};
		auto& Tag = entity.AddComponent<TagComponent>();
		Tag.Tag = name.empty() ? "Entity" : name;
		return entity;
	}
}
