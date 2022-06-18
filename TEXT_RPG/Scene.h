#pragma once

class Scene
{
	typedef enum SceneID
	{
		SCENE_NULL,
		SCENE_TITLE,
		SCENE_MAIN,
		SCENE_SHOP,
		SCENE_END,
		SCENE_MAX
	} SceneID;
	
public:

	void Update();

	void Render();

	bool IsSetNextScene();

	void SetNextScene(SceneID scene);
	
	void Change();

private:
	SceneID _next;
};