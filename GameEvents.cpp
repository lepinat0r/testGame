#include "GameEvents.h"

void GameEvents::init()
{
  runningState = true;

	SDL_Init(SDL_INIT_EVERYTHING);

	screen_s = SDL_SetVideoMode(S_WIDTH, S_HEIGHT, S_BPP, NULL);
	menu_s = IMG_Load("Menu.jpg");
	player_s = IMG_Load("Player.jpg");
	enemy_s = IMG_Load("Enemy.jpg");
}

void GameEvents::update()
{
	SDL_BlitSurface(menu_s, NULL, screen_s, NULL);
	SDL_BlitSurface(player_s, NULL, screen_s, NULL);
	SDL_BlitSurface(enemy_s, NULL, screen_s, NULL);
}

void GameEvents::draw()
{
	SDL_Flip(screen_s);
}

bool GameEvents::gameRunning()
{
	return runningState;
}

void GameEvents::handleEvents()
{
	SDL_Event event;

	if(SDL_PollEvent(&event))
	{
		if(event.type == SDL_QUIT)
			runningState = false;
	}
}

void GameEvents::clean()
{
	SDL_FreeSurface(screen_s);
	SDL_FreeSurface(menu_s);	
	SDL_FreeSurface(player_s);	
	SDL_FreeSurface(enemy_s);
	SDL_Quit();
}
