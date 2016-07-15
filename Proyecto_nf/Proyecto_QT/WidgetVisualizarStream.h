#ifndef WIDGETVISUALIZARSTREAM_H
#define WIDGETVISUALIZARSTREAM_H

#include <QDialog>
#include <string>

using namespace std;
using std::string;

class QWidget;
class QMessageBox;
class QVBoxLayout;
class QTableWidget;
class QPushButton;
class QCheckBox;
class QTableWidgetItem;
class WidgetAgregarStream;
class QPushButton;
class QHBoxLayout;
class QRadioButton;
class QLabel;

class WidgetVisualizarStream : public QDialog
{
    Q_OBJECT
public:
    explicit WidgetVisualizarStream(int n, QWidget *parent = 0);
    WidgetAgregarStream *widgetAgregarStream;
    QPushButton *botonAceptar1;
    QVBoxLayout *vlayout;
    QTableWidget *tabla;
    QHBoxLayout *hlayout;

public slots:
     void armar();
     };

#endif // WIDGETVISUALIZARSTREAM_H
