#include "Scene.h"

void Scene::Update()
{

}

void Scene::Render()
{

}

bool Scene::IsSetNextScene()
{
	if (SCENE_NULL == _next)
	{
		return false;
	}
	else
	{
		return true;
	}
}

void Scene::SetNextScene(SceneID scene)
{
	_next = scene;
}

void Scene::Change()
{
	g_scene = 
}

Scene g_scene;