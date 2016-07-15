#ifndef WIDGETVISUALIZARSTREAMECUADOR_H
#define WIDGETVISUALIZARSTREAMECUADOR_H

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
class WidgetAgregarStreamEcuador;
class QPushButton;
class QHBoxLayout;
class QCheckBox;

class WidgetVisualizarStreamEcuador : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetVisualizarStreamEcuador(int n, QWidget *parent = 0);
    QPushButton *botonAceptar1;
    QVBoxLayout *vlayout;
    QTableWidget *tabla;
    QHBoxLayout *hlayout;

    WidgetAgregarStreamEcuador *widgetAgregarStreamEcuador;

public slots:
    void armar();

};

#endif // WIDGETVISUALIZARSTREAMECUADOR_H
