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

private:
    float deltaTime;

    //Variables
    int playerSpeed;
    int playerSize;
};
#endif /* PLAYER_H */