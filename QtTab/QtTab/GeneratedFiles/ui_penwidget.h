/********************************************************************************
** Form generated from reading UI file 'penwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PENWIDGET_H
#define UI_PENWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CpenWidget
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *CpenWidget)
    {
        if (CpenWidget->objectName().isEmpty())
            CpenWidget->setObjectName(QStringLiteral("CpenWidget"));
        CpenWidget->resize(375, 453);
        verticalLayout = new QVBoxLayout(CpenWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tableWidget = new QTableWidget(CpenWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        verticalLayout->addWidget(tableWidget);


        retranslateUi(CpenWidget);

        QMetaObject::connectSlotsByName(CpenWidget);
    } // setupUi

    void retranslateUi(QWidget *CpenWidget)
    {
        CpenWidget->setWindowTitle(QApplication::translate("CpenWidget", "CpenWidget", 0));
    } // retranslateUi

};

namespace Ui {
    class CpenWidget: public Ui_CpenWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PENWIDGET_H
