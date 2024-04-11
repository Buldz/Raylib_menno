#include "scene.h"

#ifndef SCENE2_H
#define SCENE2_H

class Scene2 : public Scene
{
public:
	//Constructor
	Scene2();

	//Deconstructor
	virtual ~Scene2();

	//Update method
	virtual void update(float deltaTime);

private:

};

#endif /* SCENE2_H */
