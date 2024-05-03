#include "ball.h"



ball::ball(int x, int y)

{
    itswidth = 5;
    itsheight = 5;
    the_ball = QPixmap(ballpath.c_str()).scaled(itswidth, itsheight);
    the_ball_pos = QPoint(x, y);
}

void ball::isTouching()
{
    if(speedX> 0)
    {
        if (the_ball_pos.x() <= 495)
        {
            speedX -= speedX*2;
            return;
        }

        //pas fini
    }

    if(speedX < 0)
    {
        if (the_ball_pos.x() >= 5)
        {
            speedX -= speedX*2;
            return;
        }
        //pas fini
    }
    if(speedY > 0)
    {
        if (the_ball_pos.y() <= 495)
        {
            speedY -= speedY*2;
            return;
        }

        //pas fini
    }
    if(speedY < 0)
    {
        if (the_ball_pos.y() >= 5)
        {
            speedY -= speedY*2;
            return;
        }

        //pas fini
    }
}


