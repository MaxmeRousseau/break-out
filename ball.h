#ifndef BALL_H
#define BALL_H
#include <QResizeEvent>
#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QTimer>
#include <QTime>
#include <QPicture>

class Ball
{
public:
    Ball(int x, int y);
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
    float speedX = 0;
    float speedY = -2;
    int itswidth, itsheight;
    std::string ballpath = ":/new/ball/ball.png";
    QPixmap the_ball;
    QPoint the_ball_pos;



};

#endif // BALL_H
