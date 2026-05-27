#pragma once

#include "player.h"
#include <vector>

class Game {
  public:
    Game();
    void Update();
    void Draw();

  private:
    std::vector<Player> players;

    float worldWidth;
    float worldHeight;
};
