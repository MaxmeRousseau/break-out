/**
 * @file Paddle.h
 * @brief
 *
 * Created by Dexea 2024 Paddle.h
 */

#ifndef BREAK_OUT_2024_PADDLE_H
#define BREAK_OUT_2024_PADDLE_H

#include <iostream>
#include <QPainter>
#include <QRect>

using namespace std;


class Paddle {
private:
    QRect itsPaddle;
    int itsSpeedX;
    bool itsRight = false;
    bool itsLeft = false;
public:
    Paddle(int pX,int pY, int pWidth,int pHeight);
    void updateposition();
    void moveRight(bool enable);
    void moveLeft(bool enable);
    QRect getRect();
};


#endif //BREAK_OUT_2024_PADDLE_H
