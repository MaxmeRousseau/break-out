#include "ball.h"



Ball::Ball(int x, int y)

{
    itswidth = 5;
    itsheight = 5;
    the_ball = QPixmap(ballpath.c_str()).scaled(itswidth, itsheight);
    the_ball_pos = QPoint(x, y);

}

void Ball::isTouching()
{
    if(speedX > 0)
    {
        if (the_ball_pos.x() > 495)
        {
            speedX = -speedX*1.2;
        }

    }
    if(speedX < 0)
    {
        if (the_ball_pos.x() < 5)
        {
            speedX = -speedX*1.2;

        }
    }

    if (speedY > 0)
    {
        if (the_ball_pos.y() > 495)
        {
            speedY = -speedY*1.2;
        }
    }


    if(speedY < 0)
    {
        if (the_ball_pos.y() < 5)
        {
            speedY = -speedY*1.2;

        }
    }
}

int Ball::getSpeedX() const
{
    return speedX;
}

void Ball::setSpeedX(int newSpeedX)
{
    speedX = newSpeedX;
}

int Ball::getSpeedY() const
{
    return speedY;
}

void Ball::setSpeedY(int newSpeedY)
{
    speedY = newSpeedY;
}

QPoint Ball::getThe_ball_pos() const
{
    return the_ball_pos;
}

QPixmap Ball::getThe_ball() const
{
    return the_ball;
}

void Ball::updateball()
{
    the_ball_pos.setX(the_ball_pos.x() + getSpeedX());
    the_ball_pos.setY(the_ball_pos.y() + getSpeedY());
    isTouching();

}


