#ifndef WIDGETPRINCIPAL_H
#define WIDGETPRINCIPAL_H

#include <QWidget>

class QWidget;
class QLabel;
class QPushButton;
class QDialog;
class QVBoxLayout;
class QHBoxLayout;
class QComboBox;
class QGridLayout;
class QCheckBox;
class QMessageBox;
class WidgetAgregar;
class WidgetAgregarEcuador;
class WidgetAgregarPeru;
class WidgetAgregarVenezuela;
class WidgetAgregarStream;
class WidgetAgregarStreamEcuador;
class WidgetAgregarStreamPeru;
class WidgetAgregarStreamVenezuela;
class WidgetVisualizar;
class WidgetVisualizarEcuador;
class WidgetVisualizarPeru;
class WidgetVisualizarVenezuela;
class WidgetVisualizarStream;
class WidgetVisualizarStreamEcuador;
class WidgetVisualizarStreamPeru;
class WidgetVisualizarStreamVenezuela;
class QRadioButton;

class WidgetPrincipal : public QWidget
{
    Q_OBJECT
    
public:
    explicit WidgetPrincipal(QWidget *parent = 0);
    ~WidgetPrincipal();
    int ff;
    int pais;
    int kk;
    QComboBox *combo;
    QGridLayout *layout;
    QHBoxLayout *phlayout;
    QHBoxLayout *nhlayout;
    QHBoxLayout *hlayout;
    QVBoxLayout *vlayout;
    QLabel *labelNetf;
    QLabel *label1;
    QRadioButton *chB1;
    QRadioButton *chB2;
    QPushButton *boton1;
    QPushButton *boton2;
    QPushButton *boton3;
    WidgetAgregar *widgetAgregar;
    WidgetAgregarEcuador *widgetAgregarEcuador;
    WidgetAgregarPeru *widgetAgregarPeru;
    WidgetAgregarVenezuela *widgetAgregarVenezuela;
    WidgetVisualizar *widgetVisualizar;
    WidgetVisualizarEcuador *widgetVisualizarEcuador;
    WidgetVisualizarPeru *widgetVisualizarPeru;
    WidgetVisualizarVenezuela *widgetVisualizarVenezuela;
    WidgetAgregarStream *widgetAgregarStream;
    WidgetAgregarStreamEcuador *widgetAgregarStreamEcuador;
    WidgetAgregarStreamPeru *widgetAgregarStreamPeru;
    WidgetAgregarStreamVenezuela *widgetAgregarStreamVenezuela;
    WidgetVisualizarStream *widgetVisualizarStream;
    WidgetVisualizarStreamVenezuela *widgetVisualizarStreamVenezuela;
    WidgetVisualizarStreamPeru *widgetVisualizarStreamPeru;
    WidgetVisualizarStreamEcuador *widgetVisualizarStreamEcuador;
    int a, b ,c ,d ,e ,f ,g ,h;

public slots:
    void crear();
    void visualizara();
    };

#endif // WIDGETPRINCIPAL_H
