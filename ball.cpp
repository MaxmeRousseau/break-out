#include "ball.h"



Ball::Ball(int x, int y, game * game)

{
    itswidth = 5;
    itsheight = 5;
    the_ball = QPixmap(ballpath.c_str()).scaled(itswidth, itsheight);
    the_ball_pos = QPoint(x, y);
    itsGame = game;

}

void Ball::isTouching()
{
    QRect paddleRect  = itsGame->getItsPaddle()->getRect();

    if (!(the_ball_pos.x()>(paddleRect.x()+paddleRect.width())
    ||(paddleRect.x() > (the_ball_pos.x()+the_ball.width()))
    ||(the_ball_pos.y() > paddleRect.y()+paddleRect.height())
    ||(paddleRect.y() > the_ball_pos.y()+the_ball.height()))){
        speedY = -speedY;
    }

    for (brick * brick : itsGame->itsBricks){
        if (!(the_ball_pos.x()>(brick->getpoints().x()+brick->getABrick().width())
              ||(brick->getpoints().x() > (the_ball_pos.x()+the_ball.width()))
              ||(the_ball_pos.y() > brick->getpoints().y()+brick->getABrick().height())
              ||(brick->getpoints().y() > the_ball_pos.y()+the_ball.height()))){
            speedY = -speedY;
            brick->updateBrick();
            if (brick->getHp() <=0){
                itsGame->itsBricks.erase(std::remove(itsGame->itsBricks.begin(),itsGame->itsBricks.end(),brick));
            }
        }
    }


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
    if (speedX > maxSpeed)
        speedX = maxSpeed;
    if (speedY > maxSpeed)
        speedY = maxSpeed;
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


