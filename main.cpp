#include <GL/glut.h>
#include <qapplication.h>
#include <qstylefactory.h>
#include "matleditor.h"

int main( int argc, char ** argv )
{
    //QApplication::setStyle(QStyleFactory::create("Motif"));
    QApplication a( argc, argv );
    glutInit(&argc, argv);
    MatlEditor w;
    w.show();
    a.connect( &a, SIGNAL( lastWindowClosed() ), &a, SLOT( quit() ) );
    return a.exec();
}
