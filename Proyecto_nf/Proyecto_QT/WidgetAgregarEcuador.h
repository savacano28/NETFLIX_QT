#ifndef WIDGETAGREGARECUADOR_H
#define WIDGETAGREGARECUADOR_H

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


class WidgetAgregarEcuador : public QDialog
{
    Q_OBJECT

public:
    explicit WidgetAgregarEcuador(QWidget *parent = 0);
    int devolverSize1();
    QVector<string>devolverVec1();


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
    void agregarDatos1();
      void otro(int, string);

};
#endif // WIDGETAGREGARECUADOR_H

