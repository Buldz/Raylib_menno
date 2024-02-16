#include "config.h"

int main()
{
    InitWindow(SWIDTH, SHEIGHT, "Maghar.IO");
    SetWindowState(FLAG_VSYNC_HINT);
    SetWindowState(FLAG_MSAA_4X_HINT);
    // SetWindowState(FLAG_FULLSCREEN_MODE);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawFPS(5, 5);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
