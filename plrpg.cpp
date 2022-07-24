#include "plrpg.h"
#include "./ui_plrpg.h"
#include <cstdlib>
#include <QMessageBox>


PLRPG::PLRPG(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PLRPG)
{
    ui->setupUi(this);
}

PLRPG::~PLRPG()
{
    delete ui;
}

        //DadosD3AD20
void PLRPG::on_pushButton_1_clicked()
{

    int d03;
    d03 = 1+rand()%3;
    QMessageBox::about(this,"D03",QString::number(d03));

}


void PLRPG::on_pushButton_2_clicked()
{
    int d04;
    d04 = 1+rand()%4;
    QMessageBox::about(this,"D04",QString::number(d04));

}


void PLRPG::on_pushButton_3_clicked()
{
    int d06;
    d06 = 1+rand()%6;
    QMessageBox::about(this,"D06",QString::number(d06));
}


void PLRPG::on_pushButton_4_clicked()
{
    int d10;
    d10 = 1+rand()%10;
    QMessageBox::about(this,"D10",QString::number(d10));
}


void PLRPG::on_pushButton_5_clicked()
{
    int d12;
    d12 = 1+rand()%12;
    QMessageBox::about(this,"D12",QString::number(d12));
}


void PLRPG::on_pushButton_6_clicked()
{
    int d20;
    d20 = 1+rand()%20;
    QMessageBox::about(this,"D20",QString::number(d20));
}

