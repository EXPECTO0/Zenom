#include <sys/mman.h>
#include <QtWidgets/QApplication>
#include "zenom.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setOrganizationName( "RobotLab" );
    a.setApplicationName( "Zenom" );

    Zenom w(argc, argv);
    w.show();

    return a.exec();
}
