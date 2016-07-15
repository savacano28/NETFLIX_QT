#ifndef WIDGETVISUALIZARPERU_H
#define WIDGETVISUALIZARPERU_H

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
class WidgetAgregarPeru;
class QTableWidgetItem;
class WidgetAgregar;
class QPushButton;
class QHBoxLayout;

class WidgetVisualizarPeru : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetVisualizarPeru(int n, QWidget *parent = 0);
    //void armar();
    WidgetAgregarPeru *widgetAgregarPeru;
    QPushButton *botonAceptar1;
    QPushButton *botonExistencias;
    QVBoxLayout *vlayout;
    QTableWidget *tabla;
    QHBoxLayout *hlayout;

public slots:
     void armar();
      void devolverTabla(int, int);
};
#endif // WIDGETVISUALIZARPERU_H
