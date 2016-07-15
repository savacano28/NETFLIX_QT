#ifndef WIDGETVISUALIZARSTREAMVENEZUELA_H
#define WIDGETVISUALIZARSTREAMVENEZUELA_H

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
class WidgetAgregarStreamVenezuela;
class QPushButton;
class QHBoxLayout;
class QCheckBox;
class QRadioButton;

class WidgetVisualizarStreamVenezuela : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetVisualizarStreamVenezuela(int n, QWidget *parent = 0);
    QPushButton *botonAceptar1;
    QPushButton *botonHabilitar;
    QPushButton *botonInhabilitar;
    QVBoxLayout *vlayout;
    QTableWidget *tabla;
    QHBoxLayout *hlayout;
    WidgetAgregarStreamVenezuela *widgetAgregarStreamVenezuela;

public slots:
     void armar();

};

#endif // WIDGETVISUALIZARSTREAMVENEZUELA_H
