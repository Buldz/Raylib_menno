// player.cpp

#include "player.h"
#include "config.h"

Player::Player() : Entity()
{
    position = {Config::SWIDTH/2, Config::SHEIGHT/2};
    playerSize = 50;
    playerSpeed = playerSize;
}

Player::~Player()
{

}

void Player::update(float deltatime)
{
    DrawRectangle((int)position.x -playerSize/2, (int)position.y -playerSize/2, playerSize, playerSize, BLUE);

    if (IsKeyPressed(KEY_W) || IsKeyPressed(KEY_UP))
        {
            position.y += -playerSpeed;
        }
        else if (IsKeyPressed(KEY_S) || IsKeyPressed(KEY_DOWN))
        {
            position.y += playerSpeed;
        }
        else if (IsKeyPressed(KEY_D) || IsKeyPressed(KEY_RIGHT))
        {
            position.x += playerSpeed;
        }
        else if (IsKeyPressed(KEY_A) || IsKeyPressed(KEY_UP) || IsKeyPressed(KEY_LEFT))
        {
            position.x += -playerSpeed;
        }
}