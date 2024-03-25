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
    //Constructor
    Enemy();

    //Deconstructor
    virtual ~Enemy();

    //Update method
    virtual void update(float deltaTime);

    //Methods
    void RandomSpawn();

    bool EnemyIsAlive() { return _alive; }
    
private:
    //Methods
    void Move();

    //Variables
    float _deltaTime;
    float _enemySpeed;
    bool _goesLeft;
    bool _alive;
};
#endif /* ENEMY_H */