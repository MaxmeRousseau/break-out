#include "brick.h"

brick::brick(int x, int y,int hp) {

    itswidth = 60;
    itsheight = 15;
    aBrick = QPixmap(BrickP1path.c_str()).scaled(itswidth, itsheight);
    brickPos = QPoint(x,y);

}

int brick::getHp() const
{
    return hp;
}

QPixmap brick::getABrick() const
{
    return aBrick;
}


void brick::updateBrick()
{
    hp-=1;
}

QPoint brick::getpoints()
{
    return brickPos;
}

void brick::setABrick() {
    QPixmap(BrickP2path.c_str()).scaled(itswidth, itsheight);
}
