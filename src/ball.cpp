#include "../include/ball.h"
#include <cmath>
#include <raylib.h>

Ball::Ball(Vector2 playerPos, Vector2 mousePos) {
    float dx = mousePos.x - playerPos.x;
    float dy = mousePos.y - playerPos.y;
    float length = sqrt((dx * dx) + (dy * dy));

    direction.x = dx / length;
    direction.y = dy / length;
    position = playerPos;
    speed = 5;
}

void Ball::Draw() { DrawCircleV(position, 2, GREEN); }

void Ball::Update() {
    position.x += direction.x * speed;
    position.y += direction.y * speed;
}
