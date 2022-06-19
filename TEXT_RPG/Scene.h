#pragma once

#include "Common.h"
#include "Macro.h"
#include "Title.h"
#include "End.h"
#include "Player.h"
#include "Input.h"

class Scene
{
public:
	typedef enum
	{
		SCENE_NULL,
		SCENE_TITLE,
		//SCENE_START,
		SCENE_GAME,
		SCENE_END,
		SCENE_MAX
	} SceneID;

private:
	SceneID s_next = SCENE_NULL;

public:

	virtual void Update();

	virtual void Render();

	bool IsSetNextScene();

	void SetNext(SceneID scene);
	
	void Change();
};


class Title : public Scene
{
public:

	void Update();
	
	void Render();
};

class InGame : public Scene
{
public:

	void Update();

	void Render();
};

class End : public Scene
{
public:

	void Update();

	void Render();
};