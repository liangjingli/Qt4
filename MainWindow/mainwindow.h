#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

class QAction;
class QLabel;
class FindDialog;
class Spreadsheet;

class MainWindow:public QMainWindow
	{
		Q_OBJECT
		public:
			MainWindow();
		protected:
			void closeEvent(QCloseEvent *event);
		private slots:
			void newFile();
			void open();
			bool save();
			bool saveAs();
			void find();
			void goToCell();
			void sort();
			void about();		
			
			void openRecentFile();
			void updateStatusBar();
			//void spreadsheetModified();
		private:
			void createActions();
			void createMenus();
			void createContextMenu();
			void createToolBars();
			void createStatusBar();
			void readSettings();
			void writeSettings();
			bool okToContinue();
			bool loadFile(const QString &fileName);
			bool saveFile(const QString &fileName);
			void setCurrentFile(const QString &fileName);
			void updateRecentFileActions();
			QString strippedName(const QString &fullFileName);
			QString curFile;
			
			Spreadsheet *spreadsheet;
			FindDialog *findDialog;
			QLabel *locationLabel;
			QLabel *formulaLabel;
			//static QStringList recentFiles;
			QStringList recentFiles;
			
			
			enum{MaxRecentFiles=5};
			QAction *recentFileActions[MaxRecentFiles];
			QAction *separatorAction;
			QAction *newAction;
			QAction *openAction;
			QAction *saveAction;
			QAction *saveAsAction;
			QAction *closeAction;
			QAction *exitAction;
			QAction *findAction;
			QAction *goToCellAction;
			QAction *selectAllAction;
			QAction *showGridAction;
			QAction *aboutAction;
			QAction *aboutQtAction;
			
			QMenu *fileMenu;
			QMenu *editMenu;
			QMenu *selectSubMenu;
			QMenu *toolsMenu;
			QMenu *optionsMenu;
			QMenu *helpMenu;
			
			QToolBar *fileToolBar;
			QToolBar *editToolBar;
			
			//QSplashScreen *splash;
			
			
				
		};
		
#endif