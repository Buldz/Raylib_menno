// scene1.cpp

#include "scene1.h"

Scene1::Scene1() : Scene()
{
    // Camera Settings
    camera.offset = Vector2{0, Config::SHEIGHT / 2.0f};
    camera.rotation = 0.0f;
    camera.zoom = .20f;

    // New Player
    player = new Player();

    // New Enemy
    enemy1 = new Enemy();
    //enemy1->position = {0, 50};
    enemys.push_back(enemy1);

    //New Enemy
    enemy2 = new Enemy();
    //enemy2->position = {-80, -50};
    enemys.push_back(enemy2);
    

    Config::configure();
}

Scene1::~Scene1()
{
    delete player;
    delete enemy1;
    delete enemy2;
}

void Scene1::update(float deltatime)
{
    if (player == nullptr) {return;}

   camera.target = Vector2{0.0f, player->position.y};

    //Draws enemy
    enemy1->update(deltaTime);
    enemy2->update(deltaTime);

    // Draws Player
    player->update(deltaTime);


    for (Enemy* enemy : enemys)
    {
        if (player == nullptr || enemy == nullptr) 
        {
            continue; // Skip this iteration
        }

        //Check if player is colliding with enemys
        if (CheckCollisionRecs({player->position.x, player->position.y, 50, 50}, {enemy->position.x, enemy->position.y, 50, 50}))
        {
            player->playerIsAlive = false;
            player = nullptr;
        
            std::cout << "Player dead" << std::endl;
        }
    }
}
