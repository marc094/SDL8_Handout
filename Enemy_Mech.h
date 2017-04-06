#ifndef __Enemy_Mech_H__
#define __Enemy_Mech_H__
#include "Enemy.h"
class Enemy_Mech :
	public Enemy
{
public:
	Enemy_Mech(int, int);
	virtual ~Enemy_Mech();
};

#endif