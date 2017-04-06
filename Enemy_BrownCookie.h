#ifndef __ENEMY_BROWNCOOKIE_H__
#define __ENEMY_BROWNCOOKIE_H__
#include "Enemy.h"
#include "Path.h"
#include "Globals.h"
class Enemy_BrownCookie :
	public Enemy
{
private:
	Path path;
	Animation anim;
	iPoint original_pos;

public:
	Enemy_BrownCookie(int, int, int = 0);
	virtual ~Enemy_BrownCookie();

	void Move();
};

#endif