/**
 * @file Paddle.cpp
 * @brief
 *
 * Created by Dexea 2024 Paddle.cpp
 */

#include "Paddle.h"

Paddle::Paddle(int pX, int pY, int pWidth, int pHeight)
    : itsPaddle(pX,pY,pWidth,pHeight){ }

void Paddle::updateposition() {
    itsSpeedX = itsRight - itsLeft;

//    QRect fictivePaddle = itsPaddle;
//    fictivePaddle.translate(itsSpeedX,0);
    itsPaddle.translate(itsSpeedX,0);

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
