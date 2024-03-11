// scene1.cpp

#include "scene1.h"

Scene1::Scene1() : Scene()
{
    // Camera Settings
    camera.offset = Vector2{Config::SWIDTH / 2.0f, Config::SHEIGHT / 2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

    // New Player
    player = new Player();

    // New Enemy
    enemy = new Enemy();
    
    Config::configure();
}

Scene1::~Scene1()
{
    delete player;
    delete enemy;
}

void Scene1::update(float deltatime)
{
    camera.target = Vector2{player->position.x, player->position.y};

    //Draws enemy
    enemy->update(deltaTime);

    // Draws Player
    player->update(deltaTime);
}
