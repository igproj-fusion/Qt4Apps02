#ifndef SUBCLASS_H
#define SUBCLASS_H

#include <QWidget>

class QSlider;
class QSpinBox;
class QLineEdit;
class QPushButton;

class myWidget : public QWidget
{
  Q_OBJECT_GETSTATICMETAOBJECT
public:
  myWidget(QWidget *parent = 0);
private slots:
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
