// scene1.cpp

#include "scene1.h"

Scene1::Scene1() : Scene()
{
    // Camera Settings
    camera.offset = Vector2{0, Config::SHEIGHT / 2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;

    // SpawnManager
    spawnRate = 0.5;

    // New Player
    player = new Player();

    Config::configure();

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
    player->update(deltaTime);

    for (Enemy* enemy : enemys)
    {
        if (player == nullptr || enemy == nullptr) 
        {
            continue; // Skip this iteration
        }

        // Draws enemy || Updates enemy
        enemy->update(deltaTime);    

       // Check if player is colliding with enemys
        if (CheckCollisionRecs({player->position.x, player->position.y, 50, 50}, {enemy->position.x, enemy->position.y, 50, 50}))
        {
            player->playerIsAlive = false;
            player = nullptr;
        
            std::cout << "Player dead" << std::endl;
        }
    }
}

void Scene1::SpawnManager()
{
	if (timer->getSeconds() >= spawnRate)
	{
		timer->restart();

		Enemy *enemy;
		enemy = new Enemy();
		enemys.push_back(enemy);
	}
}
