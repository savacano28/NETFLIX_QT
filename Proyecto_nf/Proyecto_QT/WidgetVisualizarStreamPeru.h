#ifndef WIDGETVISUALIZARSTREAMPERU_H
#define WIDGETVISUALIZARSTREAMPERU_H

#include <QVector>
#include <QDialog>
#include <string>

using namespace std;
using std::string;

class QWidget;
class QMessageBox;
class QVBoxLayout;
class QTableWidget;
class QPushButton;
class QCheckButton;
class QTableWidgetItem;
class WidgetAgregarStreamPeru;
class QPushButton;
class QHBoxLayout;
class QCheckBox;

class WidgetVisualizarStreamPeru : public QDialog
{
    Q_OBJECT

public:
    explicit WidgetVisualizarStreamPeru(int n, QWidget *parent = 0);
    QPushButton *botonAceptar1;
    QPushButton *botonHabilitar;
    QPushButton *botonInhabilitar;
    QVBoxLayout *vlayout;
    QTableWidget *tabla;
    QHBoxLayout *hlayout;
    WidgetAgregarStreamPeru *widgetAgregarStreamPeru;

public slots:
     void armar();

};
#endif // WIDGETVISUALIZARSTREAMPERU_H
