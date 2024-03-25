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
    _deltaTime = GetFrameTime();
    scene->Tick(_deltaTime);
}