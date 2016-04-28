#include "qttab.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QtTab w;
	w.show();
	return a.exec();
}
