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
    addChild(player);
    
    //Starts timer
    timer->start();
}

Scene1::~Scene1()
{
    removeChild(player);
    delete player;

    //Deletes all enemys in list
    for (int j = enemys.size() - 1; j >= 0; j--)
	{
        removeChild(enemys[j]);
		delete enemys[j];				  // delete from the heap first
		enemys.erase(enemys.begin() + j); // then, remove from the list
	}
}

void Scene1::update(float deltatime)
{
    if (player == nullptr) 
    {
        return;
    }

    SpawnManager();
    DeleteEnemy();

    // Draws Player
    player->update(deltaTime);

    // Updates Camera target to player location
    camera.target = Vector2{0.0f, player->position.y};
    
    for (Enemy* enemy : enemys)
    {
        if (player == nullptr || enemy == nullptr) 
        {
            continue; // Skip this iteration
        }

        // Draws enemy || Updates enemy
        enemy->update(deltaTime);    

       // Check if player is colliding with enemys
        if (CheckCollisionRecs({player->position.x, player->position.y, player->scale.x, player->scale.y}, {enemy->position.x, enemy->position.y, enemy->scale.x, enemy->scale.y}))
        {
            player->isAlive = false;
            player = nullptr;

           // std::cout << "Player dead" << std::endl;
        }
    }
}

void Scene1::SpawnManager()
{
    //enemy spawn
	if (timer->getSeconds() >= _spawnRate)
	{
		timer->restart();

		enemy = new Enemy();
        addChild(enemy);
		enemys.push_back(enemy);
	}
}

void Scene1::DeleteEnemy()
{
    for (int j = enemys.size() - 1; j >= 0; j--)
	{
		if (!enemys[j]->IsAlive())
		{
            removeChild(enemys[j]);
			delete enemys[j];				  // delete from the heap first
			enemys.erase(enemys.begin() + j); // then, remove from the list
		}
	}
}
