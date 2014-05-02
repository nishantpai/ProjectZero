#include "mainwindow.h"
#include "Library.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

#include<iostream>
using namespace std;

Library myLibrary;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->displayBooks->setColumnCount( 4 );                // sets columns. Hardcoded. Not cool!
    myLibrary.addFromFile("Resources/database.txt", ui->displayBooks, ui->statsLabel);    // loads from default database by default
}

MainWindow::~MainWindow()
{
    delete ui;
}


// adds from a file location in hard drive
void MainWindow::on_addFromFileButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr(".txt"));
    myLibrary.addFromFile( fileName, ui->displayBooks, ui->statsLabel );
}

// adds book from manual input
void MainWindow::on_addManuallyButton_clicked()
{
    Book* newBook = new Book;
    newBook->name = ui->nameEdit->text();
    newBook->author = ui->authorEdit->text();
    newBook->quantity = ui->quantityEdit->text().toInt();    
    myLibrary.addBookManually(newBook, ui->displayBooks, ui->statsLabel);
}


void MainWindow::on_pushButton_clicked()
{
    myLibrary.exportToFile();   // exports shit to a file
}


void MainWindow::on_searchByIndexEdit_textChanged(const QString &arg1)
{
    myLibrary.searchCenter(arg1, 0, ui->displayBooks, ui->statsLabel);
}

void MainWindow::on_searchByNameEdit_textChanged(const QString &arg1)
{
    myLibrary.searchCenter(arg1, 1, ui->displayBooks, ui->statsLabel);
}

void MainWindow::on_searchByAuthorEdit_textChanged(const QString &arg1)
{
    myLibrary.searchCenter(arg1, 2, ui->displayBooks, ui->statsLabel);
}
