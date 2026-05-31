#pragma once

#include "ball.h"
#include "player.h"
#include <vector>

class Game {
  public:
    Game();
    void Update();
    void Draw();

  private:
    std::vector<Player> players;
    std::vector<Ball> balls;

    float worldWidth;
    float worldHeight;
};
