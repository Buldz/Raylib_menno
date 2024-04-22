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
	Scene* GetScene(std::string sceneName);

private:
	//unordered_map
	std::unordered_map<std::string, Scene*> scenes;
			
};

#endif /* SCENE_MANAGER_H */
