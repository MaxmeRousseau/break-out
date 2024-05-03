/**
 * @file gui.cpp
 * @brief
 *
 * Created by Dexea 2024 gui.cpp
 */

#include "gui.h"

gui::gui(game *aGame, QWidget *parent) : QWidget(parent),itsGame(aGame) {
    setFixedSize(500,500);

    itsTimer = new QTimer(this);
    connect(itsTimer, SIGNAL(timeout()),this, SLOT(update()));
    itsTimer->start(16); //Frame rate here
}

gui::~gui() {
    delete itsTimer;
}

void gui::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);

    QPainter painter(this);

    int positionX = itsGame->getItsPaddle()->getRect().center().x();

    if (positionX > itsGame->getItsLevelWitdh() - width()/2)
    {
        painter.translate(-itsGame->getItsLevelWitdh() + width()/2,0);
    } else if(positionX> width()/2){
        painter.translate(-positionX + width()/2,0);
    }
    drawPaddle(&painter);

    //QWidget::paintEvent(event);
}

void gui::keyPressEvent(QKeyEvent *event) {
    QWidget::keyPressEvent(event);
}

void gui::keyReleaseEvent(QKeyEvent *event) {
    QWidget::keyReleaseEvent(event);
}

void gui::drawPaddle(QPainter *aPainter) {

}

void gui::drawObstacles(QPainter *aPainter) {
    Q_UNIMPLEMENTED();
    cout << "WiP" << endl;
}


