#include <QApplication>
#include "mainwindow.h"
#include "time.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow m_window;

    m_window.show();
    return a.exec();
}
