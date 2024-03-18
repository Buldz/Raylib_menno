// enemy.cpp

#include "enemy.h"
#include "config.h"

Enemy::Enemy() : Entity()
{
    position = {Config::SWIDTH/2, Config::SHEIGHT/2};
    size = {50, 50};
    enemySpeed = 3.0f;

    RandomSpawn();
}

Enemy::~Enemy()
{

}

void Enemy::update(float deltatime)
{
    DrawRectangle((int)position.x, (int)position.y, (int)size.x, (int)size.y, RED);
    Move();
}

void Enemy::Move()
{
    if(this->position.x < Config::SWIDTH){ position.x += enemySpeed;}

    if(this->position.x > Config::SWIDTH){position.x -= enemySpeed;}
}

void Enemy::RandomSpawn()
{
    switch (rand() % 1)
    {
        case 0:
            this->position = {-50, 50};
            break;
        case 1:
            this->position = {Config::SWIDTH + 50, 100};
            break;
    }
}