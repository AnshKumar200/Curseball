#include "../include/game.h"
#include <raylib.h>

int main(void) {
    InitWindow(900, 900, "Curseball");
    SetTargetFPS(60);

    Game game = Game();

    while (!WindowShouldClose()) {
        game.Update();

        BeginDrawing();
        ClearBackground(WHITE);
        game.Draw();
        EndDrawing();
    }
    CloseWindow();
    return 0;
}
