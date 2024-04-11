// enemy.cpp

#include "enemy.h"

// Enemy.cpp

Enemy::Enemy() : Entity()
{
<<<<<<< Updated upstream
    size = {50, 25};
    _speed = 3.0f;  
=======
    scale = {50, 25, 0};
    _enemySpeed = 3.0f;  
>>>>>>> Stashed changes
    _alive = true;

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
    DrawRectangle((int)position.x, (int)position.y, (int)scale.x, (int)scale.y, RED);
    Move();
    BorderDelete();
}

void Enemy::Move()
{
    //Enemy goes left or right
    if (_goesLeft == true) 
    {
        this->position.x -= _speed;
    } 
    else 
    {
        this->position.x += _speed;
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
        this->position = {Config::SWIDTH + this->scale.x, 150};
    } 
    else 
    {
        this->position = {Config::SWIDTH - Config::SWIDTH - this->scale.x, 100};
    }
}

void Enemy::BorderDelete()
{
    if (this->position.x >= Config::SWIDTH + 50){_alive = false;}
    if (this->position.x <= 0 - this->scale.x - 50){_alive = false;} 
}
