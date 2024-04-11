#include "scene.h"
#include "player.h"
#include "enemy.h"

#ifndef SCENE1_H
#define SCENE1_H

class Scene1 : public Scene
{
public:
	//Constructor
	Scene1();

	//Deconstructor
	virtual ~Scene1();

	//Update method
	virtual void update(float deltaTime);

	//List with enemys
	std::vector<Enemy*> enemys;

private:
	//Pointers
	Player* player;
	Enemy *enemy;

	//Variables
	double _spawnRate;

	//Methods
	void SpawnManager();
	void DeleteEnemy();
};

#endif /* SCENE2_H */
