#include <QtGui/QApplication>
#include <QSettings>
#include "WidgetPrincipal.h"
#include "WidgetAgregar.h"
#include "WidgetVisualizar.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    WidgetPrincipal w;
    w.show();
    
    return app.exec();
}
