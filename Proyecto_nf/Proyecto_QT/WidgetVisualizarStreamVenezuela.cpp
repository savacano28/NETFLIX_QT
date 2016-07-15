#include "WidgetVisualizarStreamVenezuela.h"
#include "WidgetAgregarStreamVenezuela.h"
#include "WidgetPrincipal.h"
#include <QTableWidgetItem>
#include <QObject>
#include <QApplication>
#include <QDialog>
#include <QCheckBox>
#include <QTableWidget>
#include <QTableWidgetItem>
#include <QPushButton>
#include <QMessageBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QString>
#include <String>
#include <QVector>
#include <QRadioButton>

using namespace std;
using std::string;


WidgetVisualizarStreamVenezuela::WidgetVisualizarStreamVenezuela(int n, QWidget *parent) :
    QDialog(parent)
{
    widgetAgregarStreamVenezuela =new WidgetAgregarStreamVenezuela;

     vlayout= new QVBoxLayout();
     hlayout = new QHBoxLayout;
     tabla = new QTableWidget;
     botonAceptar1= new QPushButton("Aceptar", this);

     tabla->setRowCount(n/11);
     tabla->setColumnCount(12);
     tabla->setHorizontalHeaderLabels(QString("Habilitada;Titulo;T Original;Año;Director;Duracion;Descripcion;URL;Formato;HD;Calidad;Resolucion").split(";"));

     hlayout->addWidget(botonAceptar1,0,Qt::AlignCenter);

     vlayout->addWidget(tabla);
     vlayout->addLayout(hlayout);
     setLayout(vlayout);
     setWindowTitle("Base de Datos");
     setMinimumSize(1050,300);
     setMaximumSize(1050,300);

     connect(botonAceptar1, SIGNAL(clicked()),this , SLOT(accept()));
     connect(tabla,SIGNAL(cellClicked(int,int)),widgetAgregarStreamVenezuela,SLOT(ponerTabla(int,int)));
     connect(tabla,SIGNAL(cellClicked(int,int)),this,SLOT(armar()));
   }

 void WidgetVisualizarStreamVenezuela::armar(){

     QVector <string> x =widgetAgregarStreamVenezuela->devolverVec();
     int n=widgetAgregarStreamVenezuela->devolverSize();

     int i=0;
     int j=0;

      for(int k=0;k<n;k++){
          if((k%12)==0){
             if (x[k]=="1"){
                 QTableWidgetItem *newItem = new QTableWidgetItem("SI",1);
                 newItem->setTextAlignment(Qt::AlignCenter);
                 newItem->setFont(QFont("Arial",10,QFont::Bold));
                 newItem->setBackgroundColor("cyan");
                 tabla->setItem(i,0,newItem);
                 }
             else if(x[k]=="0"){
                 QTableWidgetItem *newItem = new QTableWidgetItem("NO",1);
                 newItem->setTextAlignment(Qt::AlignCenter);
                 newItem->setFont(QFont("Arial",10,QFont::Bold));
                 newItem->setBackgroundColor("lightGray");
                 tabla->setItem(i,0,newItem); }
            }else
            {QTableWidgetItem *newItem = new QTableWidgetItem(QString::fromStdString(x[k]),1);
                newItem->setTextAlignment(Qt::AlignCenter);
                j=j+1;
                tabla->setItem(i, j, newItem);}

            if(j==11){
                j=0;
                i=i+1;}
      }
 }



