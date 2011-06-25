#include <QtGui>
#include "subclass.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    myWidget *window = new myWidget;
    window->show();

    return app.exec();
}
