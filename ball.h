#ifndef BALL_H
#define BALL_H
#include <QResizeEvent>
#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QTimer>
#include <QTime>
#include <QPicture>

class ball
{
public:
    ball(int x, int y);
    void paintevent(QPaintEvent *event);
    void resize(QResizeEvent *event);
    void isTouching();

private:
    int speedX;
    int speedY;
    int itswidth, itsheight;
    std::string ballpath = ":/new/ball/ball.png";
    QPixmap the_ball;
    QPoint the_ball_pos;

};

#endif // BALL_H
