#ifndef BRICK_H
#define BRICK_H


#include <QResizeEvent>
#include <vector>
#include <QPainter>

class brick
{
public:
    brick(int x, int y,int hp);
    void updateBrick();
    int getHp() const;
    QPixmap getABrick() const;
    QPoint getpoints();
    std::string BrickP1path = ":/Brick/beigebrickP1.png";
    std::string BrickP2path = ":/Brick/beigebrickP2.png";

private:
    int hp = 2;
    int itswidth;
    int itsheight;

    QPoint brickPos;
    QPixmap aBrick;
public:
    void setABrick();
};

#endif // BRICK_H
