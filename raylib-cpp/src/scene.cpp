// scene1.cpp

#include "scene.h"

Scene::Scene() : Entity()
{
    InitWindow(Config::SWIDTH, Config::SHEIGHT, "HELL PORTAL");
}

Scene::~Scene()
{
    CloseWindow();
}

void Scene::Tick(float deltaTime)
{
    BeginDrawing();
    ClearBackground(BLACK);
    DrawFPS(5, 5);
    BeginMode2D(camera);

    update(deltaTime);
    
    EndMode2D();
    EndDrawing();
}
