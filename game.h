/**
 * @file game.h
 * @brief
 *
 * Created by Dexea 2024 game.h
 */

#ifndef BREAK_OUT_2024_GAME_H
#define BREAK_OUT_2024_GAME_H

#include <iostream>
#include <QObject>
#include <QTimer>
#include "Paddle.h"
#include "ball.h"
#include "brick.h"
#include <vector>

using namespace std;

class Ball;

class game : public QObject{
    Q_OBJECT
private:
    int itsLevelWidth;
    int itsLevelHeight;
    Paddle * itsPaddle;
    Ball * theball;
    QTimer * itsTimer;



public:
    game(QObject * parent = nullptr);
    ~game();
    int getItsLevelWitdh() const;
    Paddle * getItsPaddle();
    Ball *getTheball();
    vector<brick *>itsBricks;
private slots:
    void gameLoop();
};


#endif //BREAK_OUT_2024_GAME_H
