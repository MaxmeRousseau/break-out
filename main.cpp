#include <QApplication>
#include <QPushButton>
#include "game.h"
#include "gui.h"


int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    game breakout;
    gui myGui(&breakout);
    myGui.show();
    return QApplication::exec();
}
