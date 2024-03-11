// scene1.h

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

private:
	/* add your private declarations */
	float deltaTime;

	//Pointers
	Player* player;
	Enemy* enemy;

	//Variables
	
};

#endif /* SCENE1_H */
