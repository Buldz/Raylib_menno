// core.h

#include "raylib.h"
#include "scene.h"

#ifndef CORE_H
#define CORE_H

class Core
{
public:
	Core();
	virtual ~Core();
	void Run(Scene* scene);

private:
	/* add your private declarations */
	float deltaTime;
};

#endif /* CORE_H */
