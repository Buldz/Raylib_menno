// entity.h

#include "raylib.h"
#include "timer.h"

#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
public:
	//Constructor
	Entity();

	//Deconstructor
	virtual ~Entity();

	//Variables
	Vector2 position;
	Vector2 size;

private:
	//Variables
	float _deltaTime;
};

#endif /* ENTITY_H */
