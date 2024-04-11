#include "core.h"
#include "scene.h"
#include "scene1.h"
#include "scene2.h"

typedef enum Screen {SCENE1, SCENE2} Screen;
Screen currentScreen = SCENE1;

int main()
{
    Core* core = new Core();
    Scene1* scene1 = new Scene1();
    Scene2* scene2 = new Scene2();

    while (!WindowShouldClose())
    {  
        switch (currentScreen)
        {
        case SCENE1:
            core->Run(scene1);
            if (IsKeyPressed(KEY_RIGHT_BRACKET))
            {
                currentScreen = SCENE2;
            }
            break;
        
        case SCENE2:
            core->Run(scene2);
            if (IsKeyPressed(KEY_LEFT_BRACKET))
            {
                currentScreen = SCENE1;
            }
            break;

        default:
            break;
        }
    }
    
    delete scene1;
    delete scene2;
    delete core;
    
    return 0;
}
