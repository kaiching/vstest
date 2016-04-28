#ifndef PENWIDGET_H
#define PENWIDGET_H

#include <QWidget>
#include "ui_penwidget.h"

class CpenWidget : public QWidget
{
	Q_OBJECT

public:
	CpenWidget(QWidget *parent = 0);
	~CpenWidget();

private:
	Ui::CpenWidget ui;

private slots:
	void on_penCurrentItemChanged(QTableWidgetItem * current,QTableWidgetItem * previous);

private:
	int Init_Ctrl();		//控件初始化
	int Init_Connect();		//信号和槽连接

public:
	void setTable_penLight(int row);
	void setIPGpenShow();
};

#endif // PENWIDGET_H
