// enemy.cpp

#include "enemy.h"
#include "config.h"

Enemy::Enemy() : Entity()
{
    position = {Config::SWIDTH/2, Config::SHEIGHT/2};
    enemySpeed = 3.0f;
}

Enemy::~Enemy()
{

}

void Enemy::update(float deltatime)
{
    DrawRectangle((int)position.x, (int)position.y, 50, 50, RED);
    Move();
}

void Enemy::Move()
{
    position.x += enemySpeed;
}