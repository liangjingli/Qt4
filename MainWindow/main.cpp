#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
	QApplication app(argc,argv);
	//MainWindow *mainwindow=new MainWindow();
	
	
	/*QSplashScreen *splash=new QSplashScreen;
	splash->setPixmap(QPixmap(":/images/splash.png"));
	splash->show();
	
	Qt::Aligment topRight=Qt::AlignRight|Qt::AlignTop;
	
	splash->showMessage(QObject::tr("Setting up the main window..."),topRight,Qt::white);*/
		
	MainWindow mainWin;
	
	/*splash->showMessage(QObject::tr("Loading modules..."),topRight,Qt::white);
	loadModules();
	splash->showMessage(QObject::tr("Establishing connections..."),topRight,Qt::white);
	establishConnections();
	
	//MainWindow *mainWin= new MainWindow();
	//mainwindow->show();*/
	mainWin.show();
	//mainWin->show();
	
	//splash->finish(&mainWin);
	//delete splash;
	return app.exec();
	}
	