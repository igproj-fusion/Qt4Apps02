/********************************************************************************
** Form generated from reading UI file 'subclass.ui'
**
** Created: Sun Jun 26 03:03:32 2011
**      by: Qt User Interface Compiler version 4.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBCLASS_H
#define UI_SUBCLASS_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_subclass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *subclass)
    {
        if (subclass->objectName().isEmpty())
            subclass->setObjectName(QString::fromUtf8("subclass"));
        subclass->resize(400, 300);
        menuBar = new QMenuBar(subclass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        subclass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(subclass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        subclass->addToolBar(mainToolBar);
        centralWidget = new QWidget(subclass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        subclass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(subclass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        subclass->setStatusBar(statusBar);

        retranslateUi(subclass);

        QMetaObject::connectSlotsByName(subclass);
    } // setupUi

    void retranslateUi(QMainWindow *subclass)
    {
        subclass->setWindowTitle(QApplication::translate("subclass", "subclass", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class subclass: public Ui_subclass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBCLASS_H
