// player.cpp

#include "player.h"
#include "config.h"

Player::Player() : Entity()
{
    position = {Config::SWIDTH/2, Config::SHEIGHT/2};
    size = {50, 50};
    _playerSpeed = (int)size.y;

    playerIsAlive = true;
}

Player::~Player()
{

}

void Player::update(float _deltatime)
{
    DrawRectangle((int)position.x, (int)position.y, (int)size.x, (int)size.y, BLUE);
    Move();
    IsPlayerDead();
    PlayerBorder();
}

void Player::Move()
{
    if (IsKeyPressed(KEY_W) || IsKeyPressed(KEY_UP))
        {
            position.y += -_playerSpeed;
        }
        else if (IsKeyPressed(KEY_S) || IsKeyPressed(KEY_DOWN))
        {
            position.y += _playerSpeed;
        }
        else if (IsKeyPressed(KEY_D) || IsKeyPressed(KEY_RIGHT))
        {
            position.x += _playerSpeed;
        }
        else if (IsKeyPressed(KEY_A) || IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_LEFT))
        {
            position.x += -_playerSpeed;
        }
}

void Player::IsPlayerDead()
{
    if (playerIsAlive == false)
    {
        delete this;
    }
}

void Player::PlayerBorder()
{
    //Player can't go further than screen width
    if (this->position.x >= Config::SWIDTH){this->position.x = Config::SWIDTH - this->size.x;}
    if (this->position.x <= 0 - this->size.x){this->position.x = 0 - this->size.x + this->size.x;} 
}