#ifndef WIDGETAGREGARSTREAMPERU_H
#define WIDGETAGREGARSTREAMPERU_H

#include <QDialog>
#include <String>
#include <QVector>

class QPushButton;
class QLineEdit;
class QLabel;
class QLineEdit;
class QRadioButton;
class QTextEdit;

using namespace std;
using std::string;

class WidgetAgregarStreamPeru : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetAgregarStreamPeru(QWidget *parent = 0);
    int devolverSize();
    QVector<string>devolverVec();
    QPushButton *botonAceptar;
    QPushButton *botonCancelar;

    QLabel *Titulo;
    QLineEdit *campoNombre;
    QLineEdit *campoNombreOriginal;
    QLineEdit *campoAno;
    QLineEdit *campoDirector;
    QLineEdit *campoDuracion;
    QTextEdit *campoDescripcion;
    QLineEdit *campoFecha;
    QLineEdit *campoTipo;
    QLineEdit *campoExistencias;
    QLineEdit *campoUrl;
    QLineEdit *campoFormato;
    QRadioButton *campoHDs;
    QRadioButton *campoHDn;
    QLineEdit *campoCalidad;
    QLineEdit *campoResolucion;


public slots:
    void agregarDatos();
     void ponerTabla(int, int);
};

#endif // WIDGETAGREGARSTREAMPERU_H


