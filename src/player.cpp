#include "../include/player.h"
#include <algorithm>
#include <raylib.h>

Player::Player(int team_id) {
    team = team_id;
    speed = 3;
    alive = true;
    haveBall = true;
    position = {30, 80};

    frameWidth = 20;
    frameHeight = 20;
}

void Player::Draw() { DrawRectangle(position.x, position.y, 20, 20, BLUE); }

void Player::Update() {
    if (IsKeyDown(KEY_W))
        position.y -= speed;
    if (IsKeyDown(KEY_S))
        position.y += speed;
    if (IsKeyDown(KEY_A))
        position.x -= speed;
    if (IsKeyDown(KEY_D))
        position.x += speed;
}

void Player::Clamp(float x, float y, float width, float height) {
    position.x = std::clamp(position.x, x, x + width - frameWidth);
    position.y = std::clamp(position.y, y, y + height - frameHeight);
}
