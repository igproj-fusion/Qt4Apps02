#include <QtGui>
//#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    //MainWindow w;
    //w.show();
    QPushButton button("Hello Qt 2");
    button.show();
    return app.exec();
}
