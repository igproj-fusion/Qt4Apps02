#include <QtGui>
#include "subclass.h"

myWidget::myWidget(QWidget *parent) : QWidget(parent)
{
  slider = new QSlider(Qt::Horizontal);
  slider->setRange(0,100);

  sbox = new QSpinBox;
  sbox->setRange(0,100);

  edit = new QLineEdit;
  edit->setMaxLength(20);

  button = new QPushButton("Clear");

  connect(slider,SIGNAL(valueChanged(int)),sbox,SLOT(setValue(int)));
  connect(sbox,SIGNAL(valueChanged(int)),slider,SLOT(setValue(int)));

  connect(slider,SIGNAL(sliderPressed()),this,SLOT(updateSliderPressed()));
  connect(slider,SIGNAL(sliderMoved(int)),this,SLOT(updateSliderMoved()));
  connect(slider,SIGNAL(sliderReleased()),this,SLOT(updateSliderReleased()));
  connect(button,SIGNAL(clicked()),this,SLOT(clear()));

  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(slider);
  layout->addWidget(sbox);
  layout->addWidget(edit);
  layout->addWidget(button);
  setLayout(layout);
}


void myWidget::updateSliderPressed()
{
  edit->setText("Slider Pressed");
}

void myWidget::updateSliderMoved()
{
  edit->setText("Slider Moving");
}

void myWidget::updateSliderReleased()
{
  edit->setText("Slider Released");
}

void myWidget::clear()
{
  slider->setValue(0);
  sbox->setValue(0);
  edit->setText(" ");
}
