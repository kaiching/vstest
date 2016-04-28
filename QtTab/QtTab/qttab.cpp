#include "qttab.h"

QtTab::QtTab(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init_Ctrl();
	Init_Connect();

	ui.tabWidget->setCurrentWidget(ui.tab_pen);
	iCurrentTab = 0;
}

QtTab::~QtTab()
{

}

int QtTab::Init_Ctrl()
{
	//������ҳ
	mPenWidget = new CpenWidget(this); //������ҳ��Qtablewidget���ڴ˳�ʼ����Qtabwidget�ؼ��ĵ�һ������ҳ
	ui.gridLayout->addWidget(mPenWidget);  //layout���table
	mPenWidget->setIPGpenShow();  //��ʼ����ʾ���ʵ�����
	return 0;
}

int QtTab::Init_Connect()
{
	connect(ui.tabWidget, SIGNAL(currentChanged(int)), this, SLOT(on_TabPos_changed()));
	return 0;
}

void QtTab::on_TabPos_changed()
{
	iCurrentTab = ui.tabWidget->currentIndex();
}
