#ifndef WIDGETAGREGARSTREAM_H
#define WIDGETAGREGARSTREAM_H

#include <QDialog>
#include <String>
#include <QVector>
#include <QTextEdit>

class QTextEdit;
class QPushButton;
class QLineEdit;
class QLabel;
class QLineEdit;
class QRadioButton;
class QCheckBox;
class WidgetVisualizarStream;
class QTableWidget;

using namespace std;
using std::string;

class WidgetAgregarStream : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetAgregarStream(QWidget *parent = 0);
    int devolverSize();
    QVector <string> devolverVec();

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




#endif // WIDGETAGREGARSTREAM_H
