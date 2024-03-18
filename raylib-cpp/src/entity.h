// entity.h

#include "raylib.h"

#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
public:
	Entity();
	virtual ~Entity();

	Vector2 position;
	Vector2 size;

private:
	/* add your private declarations */
	float deltaTime;
};

#endif /* ENTITY_H */
