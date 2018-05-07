#ifndef PICWORD_H
#define PICWORD_H

#include <QtWidgets/QMainWindow>
#include "ui_picword.h"

class picword : public QMainWindow
{
	Q_OBJECT

public:
	picword(QWidget *parent = 0);
	~picword();

private:
	Ui::picwordClass ui;
};

#endif // PICWORD_H
