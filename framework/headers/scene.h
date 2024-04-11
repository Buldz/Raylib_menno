// scene.h

#include "entity.h"
#include "config.h"
#include <vector>
#include "timer.h"

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

	//Methods
	void Tick(float deltaTime); 
	bool isActive() { return !WindowShouldClose(); };

	//Creates camera
	Camera2D camera = {0};

	//Pointers
	Timer* timer;

private:
			
};

#endif /* SCENE_H */
