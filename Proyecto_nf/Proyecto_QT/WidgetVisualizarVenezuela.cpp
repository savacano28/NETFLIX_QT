#include "WidgetVisualizarVenezuela.h"
#include "WidgetAgregarVenezuela.h"
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

using namespace std;
using std::string;

WidgetVisualizarVenezuela::WidgetVisualizarVenezuela(int n, QWidget *parent) :
    QDialog(parent)
{
    widgetAgregarVenezuela =new WidgetAgregarVenezuela;

    vlayout= new QVBoxLayout();
    hlayout = new QHBoxLayout;
    tabla = new QTableWidget;
    botonAceptar1= new QPushButton("Aceptar", this);
    botonExistencias= new QPushButton ("Existencias", this);

    tabla->setRowCount(n/9);
    tabla->setColumnCount(9);
    tabla->setHorizontalHeaderLabels(QString("Titulo;T Original;A�o;Director;Duracion;Descripcion;Fecha;Formato;Existencias").split(";"));

    hlayout->addWidget(botonAceptar1,0,Qt::AlignCenter);
    hlayout->addWidget(botonExistencias,0,Qt::AlignCenter);

    vlayout->addWidget(tabla);
    vlayout->addLayout(hlayout);
    setLayout(vlayout);
    setWindowTitle("Base de Datos");
    setMinimumSize(930,300);
    setMaximumSize(930,300);

    connect(tabla,SIGNAL(cellChanged(int,int)),this,SLOT(devolverTabla(int,int)));
    connect(botonAceptar1, SIGNAL(clicked()),this , SLOT(accept()));
    connect(botonExistencias, SIGNAL(clicked()), this, SLOT(accept()));
}

void WidgetVisualizarVenezuela::armar(){

    QVector <string> x =widgetAgregarVenezuela->devolverVec3();
    int n=widgetAgregarVenezuela->devolverSize3();

    int i=0;
    int j=0;
    for(int k=0;k<=n-1;k++){
    QTableWidgetItem *newItem = new QTableWidgetItem(QString::fromStdString(x[k]),60);
    newItem->setTextAlignment(Qt::AlignCenter);
    tabla->setItem(i, j, newItem);
    j=j+1;
    if(j==9){j=0;
    i=i+1;}
   }
}

void WidgetVisualizarVenezuela::devolverTabla(int row, int col){
    string data1=tabla->item(row,col)->text().toStdString();
    int pos=((row*9) + col);
    //QMessageBox::information(this,"","nia aqui visualizar");
    widgetAgregarVenezuela->otro(pos,data1);
}
