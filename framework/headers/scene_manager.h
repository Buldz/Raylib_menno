#include <raylib.h>
#include <unordered_map>
#include <string>
#include "scene1.h"
#include "scene2.h"

#ifndef SCENE_MANAGER_H
#define SCENE_MANAGER_H

class SceneManager
{
public:
	//Constructor
	SceneManager();

	//Deconstructor
	virtual ~SceneManager();

	//Update method
	virtual void update(float deltaTime);

	//Methods
	std::unordered_map<std::string, Scene*> scenes;

	//Pointers


private:
			
};

#endif /* SCENE_MANAGER_H */
