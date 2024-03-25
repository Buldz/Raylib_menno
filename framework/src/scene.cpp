// scene1.cpp

#include "scene.h"

Scene::Scene() : Entity()
{
    InitWindow(Config::SWIDTH, Config::SHEIGHT, "HELL PORTAL");

    Config::configure();

    timer = new Timer;
}

Scene::~Scene()
{
    CloseWindow();
}

void Scene::Tick(float _deltaTime)
{
    BeginDrawing();
    ClearBackground(BLACK);
    DrawFPS(5, 5);
    BeginMode2D(camera);

    update(_deltaTime);
    
    EndMode2D();
    EndDrawing();
}
