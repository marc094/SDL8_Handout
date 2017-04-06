#include "Enemy_BrownCookie.h"
#include "Application.h"
#include "ModuleCollision.h"



Enemy_BrownCookie::Enemy_BrownCookie(int x, int y, int delay) : Enemy(x, y)
{
	path.PushBack({ 0.1f, 0.1f }, 100 + delay, &anim);
	path.PushBack({ -0.1f, 0.1f }, 100 + delay, &anim);
	path.PushBack({ -0.1f, -0.1f }, 100 + delay, &anim);
	path.PushBack({ 0.1f, -0.1f }, 100 + delay, &anim);
	
	path.loop = true;

	anim.PushBack({ 5, 72, 21, 22 });
	original_pos = { x, y };

	animation = &anim;
	collider = App->collision->AddCollider({ 0, 0, 24, 24 }, COLLIDER_TYPE::COLLIDER_ENEMY, (Module*)App->enemies);
}


Enemy_BrownCookie::~Enemy_BrownCookie()
{
}


void Enemy_BrownCookie::Move()
{
	position = original_pos + path.GetCurrentSpeed();
}