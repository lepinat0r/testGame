#include <SDL.h>

#include "GameEvents.h"
#include "Enemy.h"
#include "Player.h"


int main(int argc, char* argv[])
{
  GameEvents gameEvents;
	Enemy enemy;
	Player player;

	gameEvents.init();
	player.init();

	while(gameEvents.gameRunning())
	{
		gameEvents.update();
		gameEvents.draw();
		gameEvents.handleEvents();
	}

	gameEvents.clean();

	return 0;
}
