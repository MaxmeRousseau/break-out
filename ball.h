#ifndef BALL_H
#define BALL_H
#include <QResizeEvent>
#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QTimer>
#include <QTime>
#include <QPicture>
#include "game.h"
#include <algorithm>

class game;

class Ball
{
public:
    Ball(int x, int y, game * itsGame);
    void paintEvent(QPaintEvent *event);
    void resize(QResizeEvent *event);
    void isTouching();
    void updateball();

    int getSpeedX() const;
    void setSpeedX(int newSpeedX);
    int getSpeedY() const;
    void setSpeedY(int newSpeedX);


    QPoint getThe_ball_pos() const;

    QPixmap getThe_ball() const;

private:
    float speedX = 1;
    float speedY = -2;
    int itswidth, itsheight;
    std::string ballpath = ":/new/ball/ball.png";
    QPixmap the_ball;
    QPoint the_ball_pos;
    int maxSpeed = 3;
    game * itsGame;



};

#endif // BALL_H
