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

    int playerSpeed;

private:
static float deltaTime;
};
#endif /* PLAYER_H */