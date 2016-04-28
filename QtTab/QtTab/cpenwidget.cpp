#include "penwidget.h"

CpenWidget::CpenWidget(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	Init_Ctrl();
	Init_Connect();
}

CpenWidget::~CpenWidget()
{

}

int CpenWidget::Init_Ctrl()
{
	ui.tableWidget->setEditTriggers(QTableView::NoEditTriggers); //禁止编辑
	ui.tableWidget->setContextMenuPolicy(Qt::CustomContextMenu);
	
	ui.tableWidget->setRowCount(16);
	ui.tableWidget->setColumnCount(16);
	ui.tableWidget->horizontalHeader()->setSectionResizeMode(1,QHeaderView::Stretch);
	ui.tableWidget->setColumnWidth(0,30);
	ui.tableWidget->setColumnWidth(1,40);
	ui.tableWidget->setColumnWidth(2,40);
	ui.tableWidget->setColumnWidth(3,40);
	ui.tableWidget->setColumnWidth(4,40);
	ui.tableWidget->setColumnWidth(5,60);
	ui.tableWidget->setColumnWidth(6,60);
	ui.tableWidget->setColumnWidth(7,60);
	ui.tableWidget->setColumnWidth(8,60);
	ui.tableWidget->setColumnWidth(9,60);
	ui.tableWidget->setColumnWidth(10,60);
	ui.tableWidget->setColumnWidth(11,60);
	ui.tableWidget->setColumnWidth(12,50);
	ui.tableWidget->setColumnWidth(13,70);
	ui.tableWidget->setColumnWidth(14,70);
	ui.tableWidget->setColumnWidth(15,80);

	for (int i = 0; i < 16 ; i++)
	{
		ui.tableWidget->setRowHeight(i,25);
	}

	return 0;
}

int CpenWidget::Init_Connect()
{
	connect(ui.tableWidget, SIGNAL(currentItemChanged(QTableWidgetItem *, QTableWidgetItem *)), this, SLOT(on_penCurrentItemChanged(QTableWidgetItem *, QTableWidgetItem *)));
	return 0;
}

void CpenWidget::setTable_penLight(int row)
{ 
	char sty[128]={' '};
	int r=0,g=0,b=0,c=0;
	ui.tableWidget->item(row,0)->background().color().getRgb(&r,&g,&b);
	c=g>100?0:255;
	sprintf(sty,"QTableView {selection-background-color:rgb(%d,%d/%d);selection-color:rgb(%d,%d/%d);}",r,g,b,c,c,c);
	ui.tableWidget->setStyleSheet(sty);
}

void CpenWidget::on_penCurrentItemChanged(QTableWidgetItem * current,QTableWidgetItem * previous)
{
	if (current)
	{
		int row = current->row();
		setTable_penLight(row);
	}
}

void CpenWidget::setIPGpenShow()
{
	//头
		QStringList headers;
	headers << QString::fromLocal8Bit( "颜色" ) 
		<< QString::fromLocal8Bit( "名称" )  
		<< QString::fromLocal8Bit( "功率" ) 
		<< QString::fromLocal8Bit( "速度" ) 
		<< QString::fromLocal8Bit( "频率" )
		<< QString::fromLocal8Bit( "起笔延时" )  
		<< QString::fromLocal8Bit( "拐角延时" ) 
		<< QString::fromLocal8Bit( "中间延时" ) 
		<< QString::fromLocal8Bit( "结束延时" ) 
		<< QString::fromLocal8Bit( "开光延时" ) 
		<< QString::fromLocal8Bit( "是否空飞" )
		<< QString::fromLocal8Bit( "空飞距离" ) 
		<< QString::fromLocal8Bit( "关光延时" )  
		<< QString::fromLocal8Bit( "空跳速度" ) 
		<< QString::fromLocal8Bit( "预激励" ) 
		<< QString::fromLocal8Bit( "激光器模式" ) ;
	ui.tableWidget->setHorizontalHeaderLabels(headers);

	for (int i=0; i<16; i++)
	{
		QTableWidgetItem *newItem = new QTableWidgetItem(QString::fromLocal8Bit(""));
		int r(0);
		int g(0);
		int b(0);

		newItem->setBackground(QBrush(QColor(r, g, b)));
		ui.tableWidget->setItem(i,0, newItem);
	}
}