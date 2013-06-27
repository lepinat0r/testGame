#ifndef GAMEEVENTS_H
#define GAMEEVENTS_H

#include <SDL.h>
#include <SDL_image.h>

const int S_WIDTH = 500;
const int S_HEIGHT = 500;
const int S_BPP = 32;

class GameEvents
{

public:
  void init();
	void update();
	void draw();
	bool gameRunning();
	void clean();
	void handleEvents();

private:
	bool runningState;

	SDL_Surface* screen_s;
	SDL_Surface* menu_s;
	SDL_Surface* player_s;
	SDL_Surface* enemy_s;

};
#endif
