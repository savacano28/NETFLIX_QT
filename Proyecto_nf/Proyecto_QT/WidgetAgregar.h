#ifndef WIDGETAGREGAR_H
#define WIDGETAGREGAR_H

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
class WidgetVisualizar;

using namespace std;
using std::string;


class WidgetAgregar : public QDialog {
    Q_OBJECT

public:
    explicit WidgetAgregar(QWidget *parent=0);
    int devolverSize();
    QVector<string>devolverVec();

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
     //WidgetVisualizar *actual;


public slots:
    void agregarDatos();
    void otro(int, string);

};

#endif // WIDGETAGREGAR_H
