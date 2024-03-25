// core.h

#include "raylib.h"
#include "scene.h"

#ifndef CORE_H
#define CORE_H

class Core
{
public:
	//Constructor
	Core();

	//Deconstructor
	virtual ~Core();

	//Methods
	void Run(Scene* scene);

private:
	//Variables
	float _deltaTime;
};

#endif /* CORE_H */
