/********************************************************************************
** Form generated from reading UI file 'WidgetPrincipal.ui'
**
** Created: Sat 10. Nov 15:56:34 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGETPRINCIPAL_H
#define UI_WIDGETPRINCIPAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QListView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WidgetPrincipal
{
public:
    QListView *listView;

    void setupUi(QWidget *WidgetPrincipal)
    {
        if (WidgetPrincipal->objectName().isEmpty())
            WidgetPrincipal->setObjectName(QString::fromUtf8("WidgetPrincipal"));
        WidgetPrincipal->resize(400, 300);
        listView = new QListView(WidgetPrincipal);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setGeometry(QRect(50, 60, 256, 192));

        retranslateUi(WidgetPrincipal);

        QMetaObject::connectSlotsByName(WidgetPrincipal);
    } // setupUi

    void retranslateUi(QWidget *WidgetPrincipal)
    {
        WidgetPrincipal->setWindowTitle(QApplication::translate("WidgetPrincipal", "WidgetPrincipal", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class WidgetPrincipal: public Ui_WidgetPrincipal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGETPRINCIPAL_H
