/**
 * @file game.cpp
 * @brief
 *
 * Created by Dexea 2024 game.cpp
 */

#include "game.h"

game::game(QObject *parent) : QObject(parent) {

}

game::~game() {

}

int game::getItsLevelWitdh() const {
    return 0;
}

Paddle *game::getItsPaddle() {
    return nullptr;
}

void game::gameLoop() {

}
