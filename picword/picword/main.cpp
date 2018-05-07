#include "picword.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	picword w;
	w.show();
	return a.exec();
}
