// player.h

#include <iostream>
#include "entity.h"
#include "config.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player : public Entity
{
public:
    Player();
    virtual ~Player();
    virtual void update(float deltaTime);

    bool playerIsAlive;

private:
    //Functions
    void Move();
    void IsPlayerDead();

    //Variables
    float deltaTime;
    int playerSpeed;
    int playerSize;
    bool alive;
};
#endif /* PLAYER_H */