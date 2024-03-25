// player.h

#include <iostream>
#include "entity.h"
#include "config.h"

#ifndef PLAYER_H
#define PLAYER_H

class Player : public Entity
{
public:
    //Constructor
    Player();

    //Deconstructor
    virtual ~Player();

    //Update method
    virtual void update(float deltaTime);

    //Variables
    bool playerIsAlive;

private:
    //Methods
    void Move();
    void IsPlayerDead();
    void PlayerBorder();

    //Variables
    float _deltaTime;
    int _playerSpeed;
    bool _alive;
};
#endif /* PLAYER_H */