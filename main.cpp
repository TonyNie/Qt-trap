#include<QApplication>
#include<QDialog>
#include<QToolBar>
#include<QAction>
#include<QLabel>
#include<QString>
#include<QObject>

class TestClass: public QObject
{
public:
	TestClass() {};
	TestClass(const TestClass &cp) { };
	TestClass& operator=(const TestClass &cp) { };	
private:
	int a;
};

int test_constructor()
{
	TestClass a;
	TestClass b(a);
}

int test_object(int argc, char **argv)
{
	QApplication app(argc, argv);
	QLabel label;
	QToolBar bar;


	bar.addWidget(&label);
	bar.show();

	return app.exec();
}

int main(int argc, char **argv)
{
	test_object(argc, argv);
}
