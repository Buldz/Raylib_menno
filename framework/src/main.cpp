#include "core.h"
#include "scene.h"
#include "scene_manager.h"

typedef enum Screen{MAINMENU, GAME} Screen;
Screen currentScreen;

int main()
{
    Core *core = new Core();
    SceneManager *sceneManager = new SceneManager();

    while (!WindowShouldClose())
    {
        switch (currentScreen)
        {
        case MAINMENU:
            core->Run(sceneManager->GetScene("MAINMENU"));
            if (IsKeyPressed(KEY_RIGHT_BRACKET))
            {
                currentScreen = GAME; 
            }
            break;

        case GAME:
            core->Run(sceneManager->GetScene("GAME"));
            if (IsKeyPressed(KEY_LEFT_BRACKET))
            {
                currentScreen = MAINMENU;
            }
            break;

        default:
            break;
        }
    }

    delete core;
    delete sceneManager;

    return 0;
}
