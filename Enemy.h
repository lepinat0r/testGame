#ifndef ENEMY_H
#define ENEMY_H

class Enemy
{

public:
  void init();
	bool isDead();

private:
	int health, x, y;
	bool dead_b;
};

#endif
