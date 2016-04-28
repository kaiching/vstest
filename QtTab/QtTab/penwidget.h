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
	int Init_Ctrl();		//�ؼ���ʼ��
	int Init_Connect();		//�źźͲ�����

public:
	void setTable_penLight(int row);
	void setIPGpenShow();
};

#endif // PENWIDGET_H
