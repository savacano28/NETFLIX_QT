#include "WidgetAgregarPeru.h"
#include "WidgetPrincipal.h"
#include <QMessageBox>
#include <QObject>
#include <QApplication>
#include <QDialog>
#include <QFormLayout>
#include <QPushButton>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <String>
#include <vector>
#include <QString>
#include <QVector>
#include <QRadioButton>

using namespace std;
using std::string;

 QVector <string> BDperu;

WidgetAgregarPeru::WidgetAgregarPeru(QWidget *parent) :
    QDialog(parent)
{
     QFormLayout *layoutPrincipal = new QFormLayout();
     QHBoxLayout *layoutBotones = new QHBoxLayout;
     QHBoxLayout *layoutRadial = new QHBoxLayout;

         Titulo =new QLabel ("AGREGAR PELICULAS FISICAS");
         botonAceptar = new QPushButton(trUtf8("Aceptar"));
         botonCancelar = new QPushButton(trUtf8("Cancelar"));
         R1= new QRadioButton("Blu-Ray",this);
         R2= new QRadioButton ("VHS",this);
         R3= new QRadioButton("DVD",this);
         campoNombre = new QLineEdit();
         campoNombreOriginal = new QLineEdit();
         campoAno = new QLineEdit();
         campoDirector = new QLineEdit();
         campoDuracion = new QLineEdit();
         campoDescripcion = new QTextEdit();
         campoFecha = new QLineEdit();
         campoFormato = new QLabel("Formato");
         campoExistencias = new QLineEdit();


         layoutRadial->addStretch();
         layoutRadial->addWidget(R1);
         layoutRadial->addWidget(R2);
         layoutRadial->addWidget(R3);
         R1->setChecked(true);
         layoutBotones->addStretch();
         layoutBotones->addWidget(botonAceptar);
         layoutBotones->addWidget(botonCancelar);

         layoutPrincipal->addRow(Titulo);
         layoutPrincipal->addRow(trUtf8("Nombre"), campoNombre);
         layoutPrincipal->addRow(("NombreOriginal"), campoNombreOriginal);
         layoutPrincipal->addRow("Año", campoAno );
         layoutPrincipal->addRow(trUtf8("Director"), campoDirector );
         layoutPrincipal->addRow(trUtf8("Duracion"), campoDuracion );
         layoutPrincipal->addRow(trUtf8("Descripcion"), campoDescripcion );
         layoutPrincipal->addRow(trUtf8("Fecha"), campoFecha );
         layoutPrincipal->addRow(trUtf8("Formato"),layoutRadial);
         layoutPrincipal->addRow(trUtf8("Existencias"), campoExistencias );

         layoutPrincipal->addRow(layoutBotones);

         setLayout(layoutPrincipal);
         setWindowTitle("AGREGAR PELICULA");
         setMinimumSize(350,350);
         setMaximumSize(350,350);

        connect(botonAceptar,SIGNAL(clicked()),this,SLOT(agregarDatos2()));
        connect (botonCancelar, SIGNAL(clicked()), this, SLOT(reject()));
}

void WidgetAgregarPeru::agregarDatos2(){

    if((campoNombre->text().isEmpty())||(campoNombreOriginal->text().isEmpty())||
       (campoAno->text().isEmpty())||(campoDirector->text().isEmpty())||
       (campoDuracion->text().isEmpty())||(campoFecha->text().isEmpty())||
       (campoExistencias->text().isEmpty())||(campoDescripcion->toPlainText().isEmpty())){
      QMessageBox::critical(this,"Error","Complete los datos del formulario");
    } else {

    string Nombre=campoNombre->text().toStdString();
    string NombreOriginal=campoNombreOriginal->text().toStdString();
    string Ano=campoAno->text().toStdString();
    string Director=campoDirector->text().toStdString();
    string Duracion=campoDuracion->text().toStdString();
    string Descripcion=campoDescripcion->toPlainText().toStdString();
    string Fecha=campoFecha->text().toStdString();
    string Existencias=campoExistencias->text().toStdString();

    string P[9];
    P[0]=Nombre;
    P[1]=NombreOriginal;
    P[2]=Ano;
    P[3]=Director;
    P[4]=Duracion;
    P[5]=Descripcion;
    P[6]=Fecha;
    if (R1->isChecked()){
        P[7]="Blue-Ray";}
    else if(R2->isChecked()){
        P[7]="VHS";}
    else P[7]="DVD";
    P[8]=Existencias;

    for (int i=0; i<=8; i++){
        BDperu.append(P[i]);
        //QMessageBox::information(this, "", QString::fromStdString(BDcolombia[i]));
    }
    campoNombre->clear();
    campoNombreOriginal->clear();
    campoAno->clear();
    campoDirector->clear();
    campoDuracion->clear();
    campoDescripcion->clear();
    campoFecha->clear();
    campoFormato->clear();
    campoExistencias->clear();
    close();}
}

void WidgetAgregarPeru::otro(int pos,string data1){
    // QMessageBox::information(this,"","nia aqui otro");
    BDperu.replace(pos,data1);
}


int WidgetAgregarPeru::devolverSize2(){
    return BDperu.size();
}

QVector <string> WidgetAgregarPeru::devolverVec2(){
    return BDperu;
}



