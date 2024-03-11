// core.cpp

#include "core.h"

Core::Core()
{
    
}

Core::~Core()
{
    
}

void Core::Run(Scene* scene)
{
    deltaTime = GetFrameTime();
    scene->tick(deltaTime);
}