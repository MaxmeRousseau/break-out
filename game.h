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

using namespace std;


class game : public QObject{
    Q_OBJECT
private:
    int itsLevelWidth;
    int itsLevelHeight;
    Paddle * itsPaddle;
    QTimer * itsTimer;

public:
    game(QObject * parent = nullptr);
    ~game();
    int getItsLevelWitdh() const;
    Paddle * getItsPaddle();
private slots:
    void gameLoop();
};


#endif //BREAK_OUT_2024_GAME_H
