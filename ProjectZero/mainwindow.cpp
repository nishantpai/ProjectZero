#include "mainwindow.h"
#include "Library.h"
#include "ui_mainwindow.h"

#include<iostream>
using namespace std;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->displayBooks->setColumnCount(5);
    ui->displayBooks->setRowCount(5);

}

MainWindow::~MainWindow()
{
    delete ui;
}


Library myLibrary;


void MainWindow::on_addFromFileButton_clicked()
{
    myLibrary.addFromFile("Resources/Database.txt");
}

void MainWindow::on_addManuallyButton_clicked()
{
    Book* newBook = new Book;
    newBook->name = ui->nameEdit->text();
    newBook->author = ui->authorEdit->text();
    newBook->quantity = ui->quantityEdit->text().toInt();

    myLibrary.addBookManually(newBook);
}

void MainWindow::on_displayLibraryButton_clicked()
{

    Book* currentBook = myLibrary.header;
    ui->displayBooks->setRowCount(5+myLibrary.bookCount);

    for(int i=0; i< myLibrary.bookCount; i++ )
    {
        for( int j=0; j< myLibrary.attributes ; j++  )
        {

            QTableWidgetItem* currentCell;
            currentCell = new QTableWidgetItem;

            switch(j)
            {
            case 0:
                currentCell->setText( currentBook->name );
                break;
            case 1:
                currentCell->setText( currentBook->author );
                break;
            case 2:
                currentCell->setText( QString::number(currentBook->quantity ) );
                break;
            }

            ui->displayBooks->setItem(i, j, currentCell );
        }

        currentBook = currentBook->next;
    }
}


