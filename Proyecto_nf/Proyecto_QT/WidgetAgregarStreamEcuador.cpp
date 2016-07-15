#include "WidgetAgregarStreamEcuador.h"
#include "WidgetAgregar.h"
#include "WidgetPrincipal.h"

#include <QObject>
#include <QApplication>
#include <QDialog>
#include <QFormLayout>
#include <QPushButton>
#include <QHBoxLayout>
#include <QMessageBox>
#include <QLabel>
#include <QLineEdit>
#include <string>
#include <vector>
#include <QString>
#include <QVector>
#include <QRadioButton>
#include <QTextEdit>

using namespace std;
using std::string;

QVector <string> BDsecuador;
QVector <int> rowse;

WidgetAgregarStreamEcuador::WidgetAgregarStreamEcuador(QWidget *parent) :
    QDialog(parent)
{ QFormLayout *layoutPrincipal = new QFormLayout;
    QHBoxLayout *layoutBotones = new QHBoxLayout;
    QHBoxLayout *layoutRadio = new QHBoxLayout;

    botonAceptar = new QPushButton(trUtf8("Aceptar"));
    botonCancelar = new QPushButton(trUtf8("Cancelar"));
    Titulo =new QLabel ("AGREGAR PELICULA STREAM");
    campoNombre = new QLineEdit();
    campoNombreOriginal = new QLineEdit();
    campoAno = new QLineEdit();
    campoDirector = new QLineEdit();
    campoDuracion = new QLineEdit();
    campoDescripcion = new QTextEdit();
    campoUrl = new QLineEdit();
    campoFormato = new QLineEdit();
    campoHDs = new QRadioButton("SI");
    campoHDn = new QRadioButton("NO");
    campoCalidad = new QLineEdit();
    campoResolucion = new QLineEdit();
    campoExistencias = new QLineEdit();

    campoHDs->setChecked(true);

    layoutBotones->addStretch();
    layoutBotones->addWidget(botonAceptar);
    layoutBotones->addWidget(botonCancelar);

    layoutRadio->addStretch();
    layoutRadio->addWidget(campoHDs);
    layoutRadio->addWidget(campoHDn);

    layoutPrincipal->addRow(Titulo);
    layoutPrincipal->addRow(trUtf8("Nombre"), campoNombre);
    layoutPrincipal->addRow(("NombreOriginal"), campoNombreOriginal);
    layoutPrincipal->addRow("Año", campoAno );
    layoutPrincipal->addRow(trUtf8("Director"), campoDirector );
    layoutPrincipal->addRow(trUtf8("Duracion"), campoDuracion );
    layoutPrincipal->addRow(trUtf8("Descripcion"), campoDescripcion );
    layoutPrincipal->addRow(trUtf8("URL"), campoUrl );
    layoutPrincipal->addRow(trUtf8("Formato de Reproduccion"), campoFormato );
    layoutPrincipal->addRow(trUtf8("HD"), layoutRadio);
    layoutPrincipal->addRow(trUtf8("Calidad"), campoCalidad );
    layoutPrincipal->addRow(trUtf8("Resolucion"), campoResolucion );

    layoutPrincipal->addRow(layoutBotones);

    setLayout(layoutPrincipal);
    setWindowTitle("AGREGAR PELICULA");
    setMinimumSize(300,350);
    setMaximumSize(300,350);

    connect(botonAceptar, SIGNAL(clicked()),
            this, SLOT(agregarDatos()));

    connect(botonCancelar, SIGNAL(clicked()),
            this, SLOT(close()));
}

void WidgetAgregarStreamEcuador::agregarDatos(){
    if((campoNombre->text().isEmpty())||(campoNombreOriginal->text().isEmpty())||
       (campoAno->text().isEmpty())||(campoDirector->text().isEmpty())||
       (campoDuracion->text().isEmpty())||(campoUrl->text().isEmpty())||
       (campoFormato->text().isEmpty())||(campoCalidad->text().isEmpty())||
            (campoFormato->text().isEmpty())||
            (campoDescripcion->toPlainText().isEmpty())){
      QMessageBox::critical(this,"Error","Complete los datos del formulario");
    } else {

    string Nombre=campoNombre->text().toStdString();
    string NombreOriginal=campoNombreOriginal->text().toStdString();
    string Ano=campoAno->text().toStdString();
    string Director=campoDirector->text().toStdString();
    string Duracion=campoDuracion->text().toStdString();
    string Descripcion=campoDescripcion->toPlainText().toStdString();
    string Url=campoUrl->text().toStdString();
    string Formato=campoFormato->text().toStdString();
    string Calidad=campoCalidad->text().toStdString();
    string Resolucion=campoResolucion->text().toStdString();


    string P[12];

    P[0]="0";
    P[1]=Nombre;
    P[2]=NombreOriginal;
    P[3]=Ano;
    P[4]=Director;
    P[5]=Duracion;
    P[6]=Descripcion;
    P[7]=Url;
    P[8]=Formato;
    if (campoHDs->isChecked()){
        P[9]="SI";}
    else if(campoHDn->isChecked()){
        P[9]="NO";}
    P[10]=Calidad;
    P[11]=Resolucion;

          for (int i=0; i<=11; i++){
            BDsecuador.append(P[i]);}

          campoNombre->clear();
          campoNombreOriginal->clear();
          campoAno->clear();
          campoDirector->clear();
          campoDuracion->clear();
          campoDescripcion->clear();
          campoUrl->clear();
          campoFormato->clear();
          campoCalidad->clear();
          campoResolucion->clear();
    close();}
}

int WidgetAgregarStreamEcuador::devolverSize(){
    return BDsecuador.size();
}

QVector <string> WidgetAgregarStreamEcuador::devolverVec(){
    return BDsecuador;
}

void WidgetAgregarStreamEcuador::ponerTabla(int row, int col){
    int pos, n,pos_r,var=0;
    pos=row*12;
    n=rowse.size();

    if(col==0){
         for(int i=0; i<n;i++){
           if(rowse[i]==row){
               pos_r=i;
               var=var+1;
           }}

        if(var==0){
            rowse.append(row);
            BDsecuador.replace(pos,"1");
        }else{
            rowse.remove(pos_r);
            BDsecuador.replace(pos,"0"); }
        }}
