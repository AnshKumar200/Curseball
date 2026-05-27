#pragma once

#include <raylib.h>
class Player {
  public:
    Player(int team);
    void Draw();
    void Update();
    void Clamp(float x, float y, float width, float height);

  private:
    Vector2 position;
    int team;
    float speed;
    bool alive;
    bool haveBall;

    float frameWidth;
    float frameHeight;
};
