// player.cpp

#include "player.h"
#include "config.h"

Player::Player() : Entity()
{
    _texture = LoadTexture("../../assets/playerSprite.png");
    position = {Config::SWIDTH/2, Config::SHEIGHT/2};
    scale = {50.0f, 50.0f};
    _speed = (int)this->scale.y;

    isAlive = true;
}

Player::~Player()
{

}

void Player::update(float _deltatime)
{
    // Rectangle source = { 0.0f, 0.0f, (float)_texture.width, (float)_texture.height };
    // Rectangle dest = { position.x, position.y, (float)_texture.width*scale.x, (float)_texture.height*scale.y };
    // Vector2 origin = { _texture.width/2, _texture.height/2 };

    // if(IsTextureReady(_texture)){
    //     std::cout << "BIG bombaclatt" << std::endl;
    // }

    //DrawTexturePro(_texture, source, dest, origin, 0, WHITE);
    //DrawTextureEx(_texture, Vector2{this->position.x, this->position.y}, 0, scale.x, BLUE);
    //DrawTexture(_texture, this->position.x, this->position.y, WHITE);
    DrawRectangle((int)position.x, (int)position.y, (int)scale.x, (int)scale.y, BLUE);

    Move(); //Moves player based on controls
    IsAlive(); //Cehecks if player is alive. If it is delete player
    Clamp();    //Player can't go further than screen
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
    if (isAlive == false)
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