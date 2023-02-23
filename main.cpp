#include <QApplication>
#include <QGraphicsscene>
#include <QGraphicsRectItem>
#include <QGraphicsView>
#include <QWidget>
#include <qlabel.h>
#include <qpushbutton.h>
#include "include/mainwindow.h"



int main(int argc, char* argv[])
{
	QApplication app(argc, argv);
	
	//QWidget mainwindow;
	//mainwindow.setFixedSize(1000, 600);
	//mainwindow.setWindowTitle("WarShips");
	//mainwindow.show();
	
	QGraphicsScene scene = new QGraphicsScene;
	QGraphicsView view(&scene);
	view.setFixedSize(1000, 600);
	view.setWindowTitle("WarShips");
	view.show();

	QPalette pal;
	pal.setBrush(view.backgroundRole(), QBrush(QPixmap("../background.jpg")));
	view.setPalette(pal);
	view.setAutoFillBackground(true);

	QGraphicsItem* pRectItem = scene.addRect(QRectF(-30, -30, 20, 40));
	pRectItem->setFlags(QGraphicsItem::ItemIsMovable);




	return app.exec();
}