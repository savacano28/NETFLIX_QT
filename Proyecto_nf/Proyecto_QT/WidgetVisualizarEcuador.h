#ifndef WIDGETVISUALIZARECUADOR_H
#define WIDGETVISUALIZARECUADOR_H

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
class WidgetAgregarEcuador;
class QTableWidgetItem;
class QPushButton;
class QHBoxLayout;

class WidgetVisualizarEcuador : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetVisualizarEcuador(int n, QWidget *parent = 0);
    //void armar();
    WidgetAgregarEcuador *widgetAgregarEcuador;
    QPushButton *botonAceptar1;
    QPushButton *botonExistencias;
    QVBoxLayout *vlayout;
    QTableWidget *tabla;
    QHBoxLayout *hlayout;

public slots:
    void armar();
     void devolverTabla(int, int);
};

#endif // WIDGETVISUALIZARECUADOR_H
