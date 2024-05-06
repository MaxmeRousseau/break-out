/**
 * @file Paddle.cpp
 * @brief
 *
 * Created by Dexea 2024 Paddle.cpp
 */

#include "Paddle.h"
#include <QDebug>

Paddle::Paddle(int pX, int pY, int pWidth, int pHeight)
    : itsPaddle(pX,pY,pWidth,pHeight){ }

void Paddle::updateposition() {
    itsSpeedX = itsRight - itsLeft;

    if (itsPaddle.x() < 460 && itsPaddle.x() > 0){
        itsPaddle.translate(itsSpeedX*3,0);
    }
    if (itsPaddle.x() >= 460 && itsSpeedX < 0){
        itsPaddle.translate(itsSpeedX*3,0);
    }
    if (itsPaddle.x() <= 0 && itsSpeedX > 0){
        itsPaddle.translate(itsSpeedX*3,0);
    }
}

void Paddle::moveRight(bool enable) {
    itsRight = enable;
}

void Paddle::moveLeft(bool enable) {
    itsLeft = enable;
}

QRect Paddle::getRect() {
    return itsPaddle;
}
