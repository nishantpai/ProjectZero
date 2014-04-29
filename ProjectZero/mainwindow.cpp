#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
#include<iostream>
using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(3);

}

MainWindow::~MainWindow()
{
    delete ui;
}
class Books
{
        QString bookName,authName,qty;
};

QString line;

void MainWindow::on_pushButton_4_clicked()
{
    QFile inputFile("Resources/Database.txt");
    if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
          {
             QTextStream in(&inputFile);
             while ( !in.atEnd() )
             {
                line.append (in.readLine() );
             }

             ui->label->setText( "FILE READ!!!" );

             inputFile.close();
          }
          else
          {
              cout<<"File Open Error";
          }


}

void MainWindow::on_pushButton_5_clicked()
{

    ui->label->setText(line);
    /*
    QFile OutFile("/Resources/Database.txt");
    QTableWidgetItem* test = new QTableWidgetItem;
        test->setText("LOLOL");

        ui->tableWidget->setItem(2, 1, test );
    //this->ui->tableWidget->setItem(2,1,);
        if ( OutFile.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append))
        {

            QTextStream out( &OutFile );
          //  this->ui->tableWidget->setItem(2,1,QString num="1");
           OutFile.close();
         }
        else
        {
            cout<<"File open Error";
        }


          OutFile.close();
          */



}
