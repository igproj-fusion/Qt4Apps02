#ifndef SUBCLASS_H
#define SUBCLASS_H

#include <QWidget>

QT_BEGIN_NAMESPACE
class QSlider;
class QSpinBox;
class QLineEdit;
class QPushButton;
QT_END_NAMESPACE

class myWidget : public QWidget
{
  Q_OBJECT
public:
  myWidget(QWidget *parent = 0);
public slots:
  void updateSliderPressed();
  void updateSliderMoved();
  void updateSliderReleased();
  void clear();
private:
  QSlider *slider;
  QSpinBox *sbox;
  QLineEdit *edit;
  QPushButton *button;
};

#endif // SUBCLASS_H
