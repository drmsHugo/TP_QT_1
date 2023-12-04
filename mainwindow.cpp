#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    // initialisation
    ui->EtatTension->setText("En tension");
    ui->EtatTension->setDisabled(true);

    ui->MisesousTension->setText("Mise sous tension");
    ui->MisesousTension->setEnabled(true);

    ui->DemmarageDrone->setEnabled(true);

    clickTension = true;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_MisesousTension_clicked()
{
    if (clickTension == true) {
        ui->EtatTension->setText("En tension");
        ui->EtatTension->setDisabled(true);

        ui->DemmarageDrone->setEnabled(true);

        clickTension = false;
    } else {
        ui->EtatTension->setText("A l'arrêt");
        ui->EtatTension->setDisabled(false);

        ui->DemmarageDrone->setDisabled(true);

        clickTension = true;
    }
}


void MainWindow::on_DemmarageDrone_clicked()
{
    ui->EtatDemarrage->setText("Mise sous tension");
}

