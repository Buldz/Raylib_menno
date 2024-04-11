#include "scene2.h"

Scene2::Scene2() : Scene()
{
    // Camera Settings
    camera.offset = Vector2{0, Config::SHEIGHT / 2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
    camera.target = Vector2{Config::SWIDTH / 2.0f, Config::SHEIGHT / 2.0f};
}

Scene2::~Scene2()
{

}

void Scene2::update(float deltatime)
{
    DrawText("HELLPORTAL AAAAHHHHHHHHH", Config::SWIDTH / 2.0f, Config::SHEIGHT / 2.0F, 40, RED);
}