#include "include/mainwindow.h"
#include <QApplication>
#include <QGraphicsscene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QWidget>
#include <qlabel.h>
#include <qpushbutton.h>

void mainwindow::param_of_window()
{
	QWidget mainwindow;
	mainwindow.setFixedSize(1000, 600);
	mainwindow.setWindowTitle("WarShips");
	mainwindow.show();

	QPalette pal;
	pal.setBrush(mainwindow.backgroundRole(), QBrush(QPixmap("../background.jpg")));
	mainwindow.setPalette(pal);
	mainwindow.setAutoFillBackground(true);
}
