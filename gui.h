/**
 * @file gui.h
 * @brief
 *
 * Created by Dexea 2024 gui.h
 */

#ifndef BREAK_OUT_2024_GUI_H
#define BREAK_OUT_2024_GUI_H

#include <iostream>
#include <QWidget>
#include <QPainter>
#include <QKeyEvent>
#include <QTimer>
#include "game.h"
#include "brick.h"

using namespace std;


class gui : public QWidget {
    Q_OBJECT
private:
    game * itsGame;
    QTimer * itsTimer;
public:
    gui(game * aGame,QWidget * parent = nullptr);
    ~gui();
protected:
    void paintEvent(QPaintEvent * event) override;
    void keyPressEvent(QKeyEvent * event) override;
    void keyReleaseEvent(QKeyEvent * event) override;
private:
    void drawPaddle(QPainter * aPainter);
    void drawBall(QPainter * aPainter);
    void drawBrick(QPainter *aPainter,int x,int y);
    void drawObstacles(QPainter * aPainter);
};


#endif //BREAK_OUT_2024_GUI_H
