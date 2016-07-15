#ifndef WIDGETAGREGARPERU_H
#define WIDGETAGREGARPERU_H

#include <QDialog>
#include <String>
#include <QVector>
class QPushButton;
class QLineEdit;
class QLabel;
class QLineEdit;
class WidgetPrincipal;
class QTextEdit;
class QRadioButton;

using namespace std;
using std::string;


class WidgetAgregarPeru : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetAgregarPeru(QWidget *parent = 0);
    
    int devolverSize2();
    QVector<string>devolverVec2();


     QPushButton *botonAceptar;
     QPushButton *botonCancelar;
     QRadioButton *R1;
     QRadioButton *R2;
     QRadioButton *R3;
     QLabel *Titulo;
     QLineEdit *campoNombre;
     QLineEdit *campoNombreOriginal;
     QLineEdit *campoAno;
     QLineEdit *campoDirector;
     QLineEdit *campoDuracion;
     QTextEdit *campoDescripcion;
     QLineEdit *campoFecha;
     QLabel *campoFormato;
     QLineEdit *campoExistencias;
     WidgetPrincipal *widgetPrincipal;


public slots:
    void agregarDatos2();
      void otro(int, string);

};

#endif // WIDGETAGREGARPERU_H


