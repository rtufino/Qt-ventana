#include "ventana.h"
#include "ui_ventana.h"

#include <QDebug>

Ventana::Ventana(QWidget *parent)
    : QMainWindow(parent) ,
      ui(new Ui::Ventana){
    ui->setupUi(this);
}

Ventana::~Ventana()
{
    delete ui;
}


void Ventana::on_btnSaludar_clicked()
{
    qDebug() << "Botón presionado";
    // Obtner el texto del text edit (campo de texto)
    QString nombre = ui->inNombre->text();
    // Establecer el texto en la etiqueta
    ui->outSaludo->setText("Bienvenido " + nombre);

}
