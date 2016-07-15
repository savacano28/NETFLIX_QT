#include "WidgetPrincipal.h"
#include "WidgetAgregar.h"
#include "WidgetVisualizar.h"
#include "WidgetVisualizarEcuador.h"
#include "WidgetVisualizarPeru.h"
#include "WidgetVisualizarVenezuela.h"
#include "WidgetAgregarEcuador.h"
#include "WidgetAgregarPeru.h"
#include "WidgetAgregarVenezuela.h"
#include "WidgetAgregarStream.h"
#include "WidgetAgregarStreamEcuador.h"
#include "WidgetAgregarStreamPeru.h"
#include "WidgetAgregarStreamVenezuela.h"
#include "WidgetVisualizarStream.h"
#include "WidgetVisualizarStreamEcuador.h"
#include "WidgetVisualizarStreamPeru.h"
#include "WidgetVisualizarStreamVenezuela.h"

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>
#include <QApplication>
#include <QObject>
#include <QComboBox>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QDialog>
#include <QFont>
#include <QTextEdit>
#include <QCheckBox>
#include <QMessageBox>
#include <QRadioButton>

WidgetPrincipal::WidgetPrincipal(QWidget *parent):
    QWidget(parent)
    {
    layout= new QGridLayout;
    nhlayout= new QHBoxLayout;
    phlayout= new QHBoxLayout;
    hlayout= new QHBoxLayout;
    vlayout= new QVBoxLayout;
    labelNetf= new QLabel("NETFLIX");
    label1 = new QLabel("Pais");
    chB1= new QRadioButton ("Físicas",this);
    chB2= new QRadioButton ("Streaming", this);
    combo = new QComboBox();
    boton1 = new QPushButton("Añadir Película");
    boton2 = new QPushButton("Base de Datos");
    boton3 = new QPushButton("SALIR");

    QVector <string> n;
    int aa=0;

    widgetAgregar =new WidgetAgregar;
    widgetAgregarEcuador =new WidgetAgregarEcuador;
    widgetAgregarPeru =new WidgetAgregarPeru;
    widgetAgregarVenezuela =new WidgetAgregarVenezuela;
    widgetAgregarStream = new WidgetAgregarStream;
    widgetAgregarStreamEcuador = new WidgetAgregarStreamEcuador;
    widgetAgregarStreamPeru = new WidgetAgregarStreamPeru;
    widgetAgregarStreamVenezuela = new WidgetAgregarStreamVenezuela;
    widgetVisualizar = new WidgetVisualizar(aa);
    widgetVisualizarEcuador = new WidgetVisualizarEcuador(aa);
    widgetVisualizarPeru = new WidgetVisualizarPeru(aa);
    widgetVisualizarVenezuela = new WidgetVisualizarVenezuela(aa);
    widgetVisualizarStream = new WidgetVisualizarStream(aa);
    widgetVisualizarStreamEcuador = new WidgetVisualizarStreamEcuador(aa);
    widgetVisualizarStreamPeru = new WidgetVisualizarStreamPeru(aa);
    widgetVisualizarStreamVenezuela = new WidgetVisualizarStreamVenezuela(aa);


    chB1->setFont(QFont("Arial",9,QFont::Bold));
    chB2->setFont(QFont("Arial",9,QFont::Bold));
    chB1->setStyleSheet("color: white");
    chB2->setStyleSheet("color: white");
    label1->setAlignment(Qt::AlignCenter);
    label1->setStyleSheet("border-color: white");
    label1->setFont(QFont("Arial",10,QFont::Bold));
    label1->setStyleSheet("color: white");
    labelNetf->setAlignment(Qt::AlignCenter);
    labelNetf->setFont(QFont("Purisa", 40, 150));
    labelNetf->setStyleSheet("color: white");
    boton1->setStyleSheet("background-color: white; color: black");
    boton1->setFont(QFont("Arial",8,QFont::Bold));
    boton2->setStyleSheet("background-color: white; color: black");
    boton2->setFont(QFont("Arial",8,QFont::Bold));
    boton3->setStyleSheet("background-color: white");
    boton3->setFont(QFont("Arial",8,QFont::Bold));

    combo->addItem("Seleccione");
    combo->addItem("COLOMBIA");
    combo->addItem("ECUADOR");
    combo->addItem("PERU");
    combo->addItem("VENEZUELA");
    combo->setStyleSheet("background-color: white");

    nhlayout->addWidget(labelNetf,0,Qt::AlignCenter);

    phlayout->addWidget(label1);
    phlayout->addWidget(combo);
    chB1->setChecked(true);

    layout->addWidget(chB1,1,0, Qt::AlignCenter);
    layout->addWidget(chB2, 1, 1, Qt::AlignCenter);
    layout->addWidget(boton1,2,0,Qt::AlignCenter);
    layout->addWidget(boton2, 2, 1,Qt::AlignCenter);
    hlayout->addWidget(boton3,0,Qt::AlignCenter);

    vlayout->addStretch();
    vlayout->addLayout(nhlayout);
    vlayout->addStretch();
    vlayout->addLayout(phlayout);
    vlayout->addStretch();
    vlayout->addLayout(layout);
    vlayout->addStretch();
    vlayout->addLayout(hlayout);
    vlayout->addStretch();

    setLayout(vlayout);
    setWindowFlags(Qt::Window);
    setWindowTitle("NETFLIX");
    setMinimumSize(350,350);
    setMaximumSize(350,350);
    setStyleSheet("background-color:red");

    connect (boton1, SIGNAL(clicked()), this, SLOT (crear()));
    connect (boton2, SIGNAL(clicked()), this, SLOT (visualizara()));
    connect (boton3, SIGNAL(clicked()), this, SLOT (close()));
}

WidgetPrincipal::~WidgetPrincipal(){}

void WidgetPrincipal::crear(){
    pais=combo->currentIndex();
    if(pais==0){
        QMessageBox::warning(boton1, "", "Seleccione un País");
        }
    else{
     if(chB1->isChecked()){
         switch (pais){

         case 1:
         {    widgetAgregar->exec();
              if((widgetAgregar->devolverSize())>0)(a=1);}
              break;
         case 2:
            { widgetAgregarEcuador->exec();
              if((widgetAgregarEcuador->devolverSize1())>0)(b=1);}
             break;
         case 3:
            { widgetAgregarPeru->exec();
              if((widgetAgregarPeru->devolverSize2())>0)(c=1);}
              break;
         case 4:
         {    widgetAgregarVenezuela->exec();
              if((widgetAgregarVenezuela->devolverSize3())>0)(d=1);}
              break;
         default:
              break;
         }}else if (chB2->isChecked()) {
             switch (pais){

             case 1:
                  {
                  widgetAgregarStream->exec();
                  if((widgetAgregarStream->devolverSize())>0)(e=1);}
                  break;
             case 2:
             {    widgetAgregarStreamEcuador->exec();
                  if((widgetAgregarStreamEcuador->devolverSize())>0)(f=1);}
                 break;
             case 3:
                { widgetAgregarStreamPeru->exec();
                  if((widgetAgregarStreamPeru->devolverSize())>0)(g=1);}
                  break;
             case 4:
                { widgetAgregarStreamVenezuela->exec();
                  if((widgetAgregarStreamVenezuela->devolverSize())>0)(h=1);}
                  break;
             default:
                  break;
             }}}}

void WidgetPrincipal::visualizara(){
    pais=combo->currentIndex();
    if(pais==0){
        QMessageBox::warning(boton1, "", "Seleccione un Pais");}
    else{
     if(chB1->isChecked()){
        switch (pais){

         case 1:
            if(a==1)
         {
         QMessageBox::information(boton1, "EXISTENCIAS", "Edite la celda EXISTENCIAS para modificar el atributo.");
         int hhl=widgetAgregar->devolverSize();
         WidgetVisualizar *wVC= new WidgetVisualizar(hhl);
         wVC->armar();
         wVC->exec();}else{QMessageBox::warning(boton1, "", "La colección de este pais se encuentra actualmente vacía.");}
           break;
        case 2:
            if(b==1)
           {
                QMessageBox::information(boton1, "EXISTENCIAS", "Edite la celda EXISTENCIAS para modificar el atributo.");
                int hh2=widgetAgregarEcuador->devolverSize1();
           WidgetVisualizarEcuador *wVE= new WidgetVisualizarEcuador(hh2);
           wVE->armar();
           wVE->exec();}else{QMessageBox::warning(boton1, "", "La colección de este país se encuentra actualmente vacía.");}
           break;
          case 3:
            if(c==1)
           { QMessageBox::information(boton1, "EXISTENCIAS", "Edite la celda EXISTENCIAS para modificar el atributo.");
                int hh3=widgetAgregarPeru->devolverSize2();
            WidgetVisualizarPeru *wVP= new WidgetVisualizarPeru(hh3);
            wVP->armar();
            wVP->exec();}else{QMessageBox::warning(boton1, "", "La colección de este país se encuentra actualmente vacía.");}
            break;
       case 4:
            if(d==1)
        {QMessageBox::information(boton1, "EXISTENCIAS", "Edite la celda EXISTENCIAS para modificar el atributo.");
                int hh4=widgetAgregarVenezuela->devolverSize3();
            WidgetVisualizarVenezuela *wVV= new WidgetVisualizarVenezuela(hh4);
            wVV->armar();
            wVV->exec();}else{QMessageBox::warning(boton1, "", "La colección de este país se encuentra actualmente vacía.");}
            break;
         default:
              break;
         }}else if (chB2->isChecked()) {
            switch (pais){

             case 1:
                if(e==1)
                  {
                    int hh5=widgetAgregarStream->devolverSize();
                  WidgetVisualizarStream *wVS= new WidgetVisualizarStream(hh5);
                  wVS->armar();
                  wVS->exec();}else{QMessageBox::warning(boton1, "", "La colección de este país se encuentra actualmente vacía.");}
                break;
             case 2:
                if(f==1)
                 {
                    int hh6=widgetAgregarStreamEcuador->devolverSize();
                 WidgetVisualizarStreamEcuador *wVSE= new WidgetVisualizarStreamEcuador(hh6);
                 wVSE->armar();
                 wVSE->exec();}else{QMessageBox::warning(boton1, "", "La colección de este país se encuentra actualmente vacía.");}
                 break;
             case 3:
                if(g==1)
                 {
                    int hh7=widgetAgregarStreamPeru->devolverSize();
                 WidgetVisualizarStreamPeru *wVSP= new WidgetVisualizarStreamPeru(hh7);
                 wVSP->armar();
                 wVSP->exec();}else{QMessageBox::warning(boton1, "", "La colección de este país se encuentra actualmente vacía.");}
                  break;
             case 4:
                if(h==1)
                {
                    int hh7=widgetAgregarStreamVenezuela->devolverSize();
                WidgetVisualizarStreamVenezuela *wVSV= new WidgetVisualizarStreamVenezuela(hh7);
                wVSV->armar();
                wVSV->exec();}else{QMessageBox::warning(boton1, "", "La colección de este país se encuentra actualmente vacía.");}
                  break;
             }}}}

