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
	//笔设置页
	mPenWidget = new CpenWidget(this); //笔设置页是Qtablewidget，在此初始化绑定Qtabwidget控件的第一个属性页
	ui.gridLayout->addWidget(mPenWidget);  //layout添加table
	mPenWidget->setIPGpenShow();  //初始化显示画笔的属性
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
