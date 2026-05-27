#include "../include/game.h"
#include <raylib.h>

Game::Game() {
    worldWidth = 800;
    worldHeight = 300;

    players.push_back(Player(1));
}

void Game::Draw() {
    DrawText("Curseball", 10, 10, 20, BLACK);

    DrawRectangleLines(10, 60, worldWidth, worldHeight, RED);

    for (Player &player : players) {
        player.Draw();
    }
}

void Game::Update() {
    for (Player &player : players) {
        player.Update();
        player.Clamp(10, 60, worldWidth, worldHeight);
    }
}
