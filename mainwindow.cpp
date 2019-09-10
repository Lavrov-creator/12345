#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bmi_head.h"
using namespace BMI;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label_BMI->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_calc_clicked()
{
    ui->label_BMI->show();
    float m=0,i=0,h=0;
    m=ui->doubleSpinBox_Weight->value();
    h=ui->doubleSpinBox_Height->value();


    ui->label_BMI->setText(QString::number(function(m,h,i)));
}
