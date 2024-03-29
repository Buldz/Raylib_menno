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
    void IsAlive();
    void Clamp();

    //Variables
    float _deltaTime;
    int _speed;
    bool _alive;
    Texture2D _texture;
};
#endif /* PLAYER_H */