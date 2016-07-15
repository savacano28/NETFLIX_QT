#ifndef WIDGETVISUALIZAR_H
#define WIDGETVISUALIZAR_H

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
class WidgetAgregar;
class QTableWidgetItem;
class WidgetAgregar;
class QRadioButton;
class QHBoxLayout;

class WidgetVisualizar : public QDialog
{
    Q_OBJECT

public:
    explicit WidgetVisualizar(int n, QWidget *parent=0);
    WidgetAgregar *widgetAgregar;
    QPushButton *botonAceptar1;
    QPushButton *botonExistencias;
    QVBoxLayout *vlayout;
    QTableWidget *tabla;
    QHBoxLayout *hlayout;
    QRadioButton *Ractual;


public slots:
    void armar();
    void devolverTabla(int, int);

    };

#endif // WIDGETVISUALIZAR_H
