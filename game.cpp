/**
 * @file game.cpp
 * @brief
 *
 * Created by Dexea 2024 game.cpp
 */

#include "game.h"

game::game(QObject *parent) : QObject{parent}
{
    itsLevelHeight = 500;
    itsLevelWidth = 500;


    itsPaddle = new Paddle(230,440,40,15); //230+20 = 250
    theball = new Ball(230,440, this);


    // Set up the game loop timer
    itsTimer = new QTimer(this);
    connect(itsTimer, SIGNAL(timeout()), this, SLOT(gameLoop()));
    itsTimer->start(10); // Start the game loop with a 10 ms interval
}

game::~game() {
    delete itsTimer; // Clean up the timer
    delete itsPaddle; // Clean up the paddle
}

int game::getItsLevelWitdh() const {
    return itsLevelWidth;
}

Paddle *game::getItsPaddle() {
    return itsPaddle;
}

void game::gameLoop() {
    itsPaddle->updateposition();
    theball->updateball();
}

Ball* game::getTheball() {
    return theball;
}
