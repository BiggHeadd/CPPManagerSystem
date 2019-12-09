#include <QApplication>
#include <QDebug>
#include<QtWidgets/QApplication>
#include<QtWidgets/QLabel>

using namespace std;

int main(int args,char** argv) {
    QApplication app(args,argv);
    QLabel *hello=new QLabel("<font color-red>Hello <i>World!</i>""</font>",0);
    hello->show();
    return app.exec();
}