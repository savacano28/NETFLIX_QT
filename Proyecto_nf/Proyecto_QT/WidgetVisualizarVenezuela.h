#ifndef WIDGETVISUALIZARVENEZUELA_H
#define WIDGETVISUALIZARVENEZUELA_H

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
class WidgetAgregarVenezuela;
class QTableWidgetItem;
class QPushButton;
class QHBoxLayout;


class WidgetVisualizarVenezuela : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetVisualizarVenezuela(int n, QWidget *parent = 0);
    WidgetAgregarVenezuela *widgetAgregarVenezuela;
    QPushButton *botonAceptar1;
    QPushButton *botonExistencias;
    QVBoxLayout *vlayout;
    QTableWidget *tabla;
    QHBoxLayout *hlayout;

public slots:
     void armar();
      void devolverTabla(int, int);
};

#endif // WIDGETVISUALIZARVENEZUELA_H
