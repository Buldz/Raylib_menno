// enemy.cpp

#include "enemy.h"
#include "config.h"

Enemy::Enemy() : Entity()
{
    position = {Config::SWIDTH/2, Config::SHEIGHT/2};
}

Enemy::~Enemy()
{

}

void Enemy::update(float deltatime)
{
    DrawRectangle( -50-25, 100-25, 50, 50, RED);
}