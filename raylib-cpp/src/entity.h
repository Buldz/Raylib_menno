// entity.h
#include "config.h"
#include "raylib.h"

#ifndef ENTITY_H
#define ENTITY_H

class Entity
{
public:
	Entity();
	virtual ~Entity();

	Vector2 position;

private:
	/* add your private declarations */
	static float deltaTime;
};

#endif /* ENTITY_H */
