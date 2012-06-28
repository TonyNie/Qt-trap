#include<QApplication>
#include<QDialog>
#include<QToolBar>
#include<QAction>
#include<QLabel>
#include<QString>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QLabel label;
	QToolBar bar;


	bar.addWidget(&label);
	bar.show();

	return app.exec();
}
