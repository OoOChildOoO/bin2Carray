#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowIcon(QIcon(":blue.png"));
    w.setWindowTitle("binToCvector(limit32MB)");
    w.show();
    return a.exec();
}
