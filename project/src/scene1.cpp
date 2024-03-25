// scene1.cpp

#include "scene1.h"

Scene1::Scene1() : Scene()
{
    // Camera Settings
    camera.offset = Vector2{0, Config::SHEIGHT / 2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

    // SpawnManager
    _spawnRate = 0.5;

    // New Player
    player = new Player();

    //Starts timer
    timer->start();
}

Scene1::~Scene1()
{
    delete player;
}

void Scene1::update(float deltatime)
{
    if (player == nullptr) {return;}

    // Updates Camera target to player location
    camera.target = Vector2{0.0f, player->position.y};

    SpawnManager();

    // Draws Player
    player->update(_deltaTime);
    
    for (Enemy* enemy : enemys)
    {
        if (player == nullptr || enemy == nullptr) 
        {
            continue; // Skip this iteration
        }

        // Draws enemy || Updates enemy
        enemy->update(_deltaTime);    

       // Check if player is colliding with enemys
        if (CheckCollisionRecs({player->position.x, player->position.y, player->size.x, player->size.y}, {enemy->position.x, enemy->position.y, enemy->size.x, enemy->size.y}))
        {
            player->playerIsAlive = false;
            player = nullptr;

            std::cout << "Player dead" << std::endl;
        }
    }
}

void Scene1::SpawnManager()
{
	if (timer->getSeconds() >= _spawnRate)
	{
		timer->restart();

		Enemy *enemy;
		enemy = new Enemy();
		enemys.push_back(enemy);
	}
}
