#pragma once

#include "Player.h"
#include "Common.h"
#include "Scene.h"
#include "Input.h"

class Game
{
public:
	static int16 Run();

	static void processInput(void);

	static void update(void);

	static void render(void);
};