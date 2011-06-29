#include <QtGui>
#include "window.h"

Window::Window()
{
  QSpinBox *integerSpinBox = new QSpinBox;
  integerSpinBox->setRange(0, 100);

  QSlider *slider = new QSlider(Qt::Horizontal);
  slider->setRange(0,100);

  QVBoxLayout *spinBoxLayout = new QVBoxLayout;
  spinBoxLayout->addWidget(slider);
  spinBoxLayout->addWidget(integerSpinBox);
  setLayout(spinBoxLayout);
}



