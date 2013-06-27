#include "Player.h"
#include "GameEvents.h"

void Player::init()
{
  health = 10;
	x = player_r.x;
	y = player_r.y;
	dead_b = false;
}

void Player::move()
{

}

bool Player::isDead()
{
	if (health <= 0)
		dead_b = true;
	else
		dead_b = false;

	return dead_b;
}
