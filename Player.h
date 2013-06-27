#ifndef PLAYER_H
#define PLAYER_H

#include <SDL.h>

class Player
{

public:
  void init();
	void move();
	bool isDead();

private:
	SDL_Rect player_r;

	int health, x, y;
	bool dead_b;
};

#endif
