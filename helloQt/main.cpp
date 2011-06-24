#include <QtGui>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel hello("Hello Qt!!");
    hello.show();

    return app.exec();
}
