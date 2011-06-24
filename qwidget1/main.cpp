#include <QtGui>
#include <QDial>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  QWidget *window = new QWidget;

  QDial *dial = new QDial;
  dial->setRange(0,20);
  dial->setNotchesVisible(true);
  dial->setValue(10);

  QPushButton *button = new QPushButton;
  button->setText("Quit");
  QObject::connect(button, SIGNAL(clicked()), &app, SLOT(quit()));

  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(dial);
  layout->addWidget(button);
  window->setLayout(layout);
  window->show();

  return app.exec();
}
