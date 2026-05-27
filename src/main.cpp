#include <raylib.h>

int main(void) {
    InitWindow(800, 800, "Curseball");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        DrawText("Curseball", 10, 10, 20, BLACK);
        ClearBackground(WHITE);
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
