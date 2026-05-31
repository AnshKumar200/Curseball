#pragma once

#include <raylib.h>
class Ball {
  public:
    Ball(Vector2 playerPos, Vector2 mousePos);
    void Draw();
    void Update();

  private:
    Vector2 position;
    Vector2 direction;
    float speed;
};
