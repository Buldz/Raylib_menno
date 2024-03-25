// enemy.cpp

#include "enemy.h"

// Enemy.cpp

Enemy::Enemy() : Entity()
{
    size = {50, 25};
    _enemySpeed = 3.0f;  
    
    //Resets seed
    srand ((int)time(NULL)); 
   //std::cout << time(NULL) << std::endl;

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
    //Enemy goes left or right
    if (_goesLeft == true) 
    {
        this->position.x -= _enemySpeed;
    } 
    else 
    {
        this->position.x += _enemySpeed;
    }
}

void Enemy::RandomSpawn()
{
    //Chooses if enemy goes left or right
    if (rand() % 2 == 1) 
    {
      _goesLeft = false;
    } 
    else 
    {
      _goesLeft = true;
    }
    
    //Changes spawnpoint of enemy if going left or right
    if (_goesLeft == true) 
    {
        this->position = {850, 150};
    } 
    else 
    {
        this->position = {-50, 100};
    }
}
