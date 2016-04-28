/********************************************************************************
** Form generated from reading UI file 'qttab.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTTAB_H
#define UI_QTTAB_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtTabClass
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_pen;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout;
    QWidget *tab_pos;

    void setupUi(QWidget *QtTabClass)
    {
        if (QtTabClass->objectName().isEmpty())
            QtTabClass->setObjectName(QStringLiteral("QtTabClass"));
        QtTabClass->resize(512, 400);
        verticalLayout = new QVBoxLayout(QtTabClass);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(QtTabClass);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab_pen = new QWidget();
        tab_pen->setObjectName(QStringLiteral("tab_pen"));
        verticalLayout_2 = new QVBoxLayout(tab_pen);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        verticalLayout_2->addLayout(gridLayout);

        tabWidget->addTab(tab_pen, QString());
        tab_pos = new QWidget();
        tab_pos->setObjectName(QStringLiteral("tab_pos"));
        tabWidget->addTab(tab_pos, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(QtTabClass);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QtTabClass);
    } // setupUi

    void retranslateUi(QWidget *QtTabClass)
    {
        QtTabClass->setWindowTitle(QApplication::translate("QtTabClass", "QtTab", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_pen), QApplication::translate("QtTabClass", "\347\254\224", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_pos), QApplication::translate("QtTabClass", "\346\226\207\346\241\243", 0));
    } // retranslateUi

};

namespace Ui {
    class QtTabClass: public Ui_QtTabClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTTAB_H
