#include "scene_manager.h"

SceneManager::SceneManager()
{
    Scene1 *scene1 = new Scene1();
    scenes["GAME"] = scene1;

    Scene2 *scene2 = new Scene2();
    scenes["MAINMENU"] = scene2;
}

SceneManager::~SceneManager()
{

}

void SceneManager::update(float _deltatime)
{
    
}