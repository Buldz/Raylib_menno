#include "raylib.h"

constexpr auto SCREEN_WIDTH  = 800;
constexpr auto SCREEN_HEIGHT = 450;

int playerX = 400;
int playerY = 225;
int playerSpeed = 50;

int main()
{
    InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "HELLPORTAL");
    SetTargetFPS(60);

    Texture2D test = LoadTexture("assets/test.png");

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(BLACK);
        DrawFPS(5, 5);

        DrawRectangle(playerX, playerY, 50, 50, BLUE);

        EndDrawing();

        //ballX += 2;
        if(IsKeyPressed(KEY_W))
        {
            playerY += -playerSpeed;
        }
        else if (IsKeyPressed(KEY_S))
        {   
            playerY += playerSpeed;
        }
        else if (IsKeyPressed(KEY_D))
        {   
            playerX += playerSpeed;
        }
        else if (IsKeyPressed(KEY_A))
        {   
            playerX += -playerSpeed;
        }
    }

    CloseWindow();

    return 0;
}
