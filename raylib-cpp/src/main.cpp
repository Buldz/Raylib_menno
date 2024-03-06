#include "config.h"
#include "raylib.h"
#include "player.h"

int main()
{
    Camera2D camera = {0};
    camera.offset = Vector2{Config::SWIDTH / 2.0f, Config::SHEIGHT / 2.0f};
    camera.rotation = 0.0f;
    camera.zoom = 1.0f;
    Player *player = new Player();

    InitWindow(Config::SWIDTH, Config::SHEIGHT, "HELL PORTAL");
    Config::configure();

    while (!WindowShouldClose())
    {
        float deltaTime = GetFrameTime();
        camera.target = Vector2{player->position.x, player->position.y};

        BeginDrawing();
                BeginMode2D(camera);
        ClearBackground(BLACK);
        DrawFPS(5, 5);


        player->update(deltaTime);
        
        EndMode2D();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
