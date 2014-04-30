#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QFile"
#include "QTextStream"
#include <iostream>
#include "fstream"
#include <QFileDialog>
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

QString line,path;

void MainWindow::on_pushButton_4_clicked()
{
     path= QFileDialog::getOpenFileName(this, tr("Open File"),"", tr("*.txt"));
  //  ui->label->setText(path);
   QFile inputFile(path);
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

//    ofstream fout("library.txt");
  //  fout<<"nishant";


}

void MainWindow::on_pushButton_5_clicked()
{


    QFile OutFile(path);

    //this->ui->tableWidget->setItem(2,1,);
        if ( OutFile.open(QIODevice::ReadOnly | QIODevice::Text | QIODevice::Append))
        {

           // QTextStream out( &OutFile );
            QTableWidgetItem* test = new QTableWidgetItem;
             QTextStream out(&OutFile);
                test->setText(out.read(8));

                ui->tableWidget->setItem(1, 1, test );
          //  this->ui->tableWidget->setItem(2,1,QString num="1");
           OutFile.close();
         }
        else
        {
            cout<<"File open Error";
        }


          OutFile.close();

    //ifstream fin("library.txt");
    //fin.seekg(0);
  //  char name[10];
 //QString check;
 //fin.get(name,10);
 //this->ui->label->setText(name);
   // fin.close();


}


