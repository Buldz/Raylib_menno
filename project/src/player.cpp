// player.cpp

#include "player.h"
#include "config.h"

Player::Player() : Entity()
{
    _texture = LoadTexture("../assets/playerSprite.png");
    position = {Config::SWIDTH/2, Config::SHEIGHT/2};
<<<<<<< Updated upstream
    size = {50, 50};
    _speed = (int)this->size.y;
=======
    scale = {50, 50, 0};
    _playerSpeed = (int)this->scale.x;
>>>>>>> Stashed changes

    playerIsAlive = true;
}

Player::~Player()
{

}

void Player::update(float _deltatime)
{
<<<<<<< Updated upstream
    //DrawTextureEx(_texture, Vector2{this->position.x, this->position.y}, 0, 8, WHITE);
    //DrawTexture(_texture, this->position.x, this->position.y, WHITE);
    DrawRectangle((int)position.x, (int)position.y, (int)size.x, (int)size.y, BLUE);
=======
    //DrawTexturePro(_playerTexture, Vector2{this->position.x, this->position.y}, 0, 8, WHITE);
    DrawRectangle((int)position.x, (int)position.y, (int)scale.x, (int)scale.y, BLUE);
>>>>>>> Stashed changes
    Move();
    IsAlive();
    Clamp();
}

void Player::Move()
{
    if (IsKeyPressed(KEY_W) || IsKeyPressed(KEY_UP))
        {
            position.y += -_speed;
        }
        else if (IsKeyPressed(KEY_S) || IsKeyPressed(KEY_DOWN))
        {
            position.y += _speed;
        }
        else if (IsKeyPressed(KEY_D) || IsKeyPressed(KEY_RIGHT))
        {
            position.x += _speed;
        }
        else if (IsKeyPressed(KEY_A) || IsKeyPressed(KEY_LEFT))
        {
            position.x += -_speed;
        }
}

void Player::IsAlive()
{
    if (playerIsAlive == false)
    {
        delete this;
    }
}

void Player::Clamp()
{
    //Player can't go further than screen width
    if (this->position.x >= Config::SWIDTH){this->position.x = Config::SWIDTH - this->scale.x;}
    if (this->position.x <= 0 - this->scale.x){this->position.x = 0 - this->scale.x + this->scale.x;} 
}