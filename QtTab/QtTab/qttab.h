#ifndef QTTAB_H
#define QTTAB_H

#include <QtWidgets/QWidget>
#include "ui_qttab.h"
#include "penwidget.h"

class QtTab : public QWidget
{
	Q_OBJECT

public:
	QtTab(QWidget *parent = 0);
	~QtTab();

private:
	Ui::QtTabClass ui;

private slots:
	void on_TabPos_changed();

private:
	int Init_Ctrl();
	int Init_Connect();

public:
	int iCurrentTab;
	CpenWidget *mPenWidget;
};

#endif // QTTAB_H
