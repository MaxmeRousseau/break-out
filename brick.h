#ifndef BRICK_H
#define BRICK_H


#include <QResizeEvent>

#include <QPainter>

class brick
{
public:
    brick(int x, int y,int hp);
    void updateBrick();

    int getHp() const;

    QPixmap getABrick() const;

private:
    int hp;
    int itswidth;
    int itsheight;
    std::string BrickP1path = ":/Brick/beigebrickP1.png";
    std::string BrickP2path = ":/Brick/beigebrickP2.png";
    QPixmap aBrick;


};

#endif // BRICK_H
