// enemy.h

#include <iostream>
#include "entity.h"
#include "config.h"
#include "time.h"

#ifndef ENEMY_H
#define ENEMY_H

class Enemy : public Entity
{
public:
    Enemy();
    virtual ~Enemy();
    virtual void update(float deltaTime);
    void RandomSpawn();

private:
void Move();

//Variables
float deltaTime;
float enemySpeed;

bool goesLeft;

};
#endif /* ENEMY_H */