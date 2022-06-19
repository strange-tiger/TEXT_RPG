#include "Game.h"

extern Scene* scene;

void Game::processInput(void)
{
	Input::Update();
}

void Game::update(void)
{
	scene->Update();
}

void Game::render(void)
{
	scene->Render();
}

int16 Game::Run()
{
	while (true)
	{
		if (scene->IsSetNextScene())
		{
			scene->Change();
		}
				
		Game::processInput();
		Game::render();
		Game::update();
	}

	return 0;
}