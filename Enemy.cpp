#include "Enemy.h"

void Enemy::init()
{
  health = 10;
	x = 0;
	y = 0;
	dead_b = false;
}

bool Enemy::isDead()
{
	if (health <= 0)
		dead_b = true;
	else
		dead_b = false;

	return dead_b;
}
