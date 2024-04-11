// entity.h

#include "raylib.h"
#include "timer.h"
#include <vector>
#include <iostream>

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
	Vector3 position;
	Vector3 scale;

	//Methods
	/// @brief add an Entity as a child of this Entity.
	/// Defines the data structure (parent/children relationship)
	/// @param child The Entity you want to add as a child.
	/// @return void
	void addChild(Entity* child);

	/// @brief remove this Entity from list of children.
	/// @param child The Entity you want to remove from your children.
	/// @return void
	void removeChild(Entity* child);

	/// @brief get the list of children.
	/// @return std::vector<Entity*>& _children
	const std::vector<Entity*>& children() { return _children; };

	int GetUid(){ return _guid; };

private:
	//Variables
	float _deltaTime;

	//Identity
	int _guid; ///< @brief The _guid of this Entity
	static int _nextGuid; ///< @brief The _nextGuid of this Entity

	//Data Structure
	std::vector<Entity*> _children; ///< @brief The _children of this Entity
	Entity* _parent; ///< @brief The _parent of this Entity
};

#endif /* ENTITY_H */
