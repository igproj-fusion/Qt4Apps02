#include <QtGui>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  QWidget *window = new QWidget;

  QDial *dial = new QDial;
  dial->setRange(0,100);

  QHBoxLayout *layout = new QHBoxLayout;
  layout->addWidget(dial);
  window->setLayout(layout);
  window->show();

  return a.exec();
}
