#ifndef BALL_H
#define BALL_H
#include <QResizeEvent>
#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QTimer>
#include <QTime>
#include <QPicture>

class ball: public QWidget
{
public:
    ball(QWidget *parent = nullptr);
    void paintevent(QPaintEvent *event);
    void resize(QResizeEvent *event);
private:
    std::string ballpath = ":/new/ball/ball.png";
    void drawball(QPainter *painter);

};

#endif // BALL_H
