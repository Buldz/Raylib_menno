// scene.h

#include "entity.h"

#ifndef SCENE_H
#define SCENE_H

class Scene : public Entity
{
public:
	//Constructor
	Scene();

	//Deconstructor
	virtual ~Scene();

	//Update method
	virtual void update(float deltaTime) = 0;

	void tick(float deltaTime); 

	bool isActive() { return !WindowShouldClose(); };

	//Creates camera
	Camera2D camera = {0};

private:
	/* add your private declarations */
	float deltaTime;

};

#endif /* SCENE_H */
