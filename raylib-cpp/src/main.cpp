// main.cpp

#include "core.h"
#include "scene1.h"

int main()
{
    Core* core = new Core();
    Scene1* scene1 = new Scene1();

    while (scene1->isActive())
    {
        core->Run(scene1);
    }
    
    delete scene1;
    delete core;
    
    return 0;
}
