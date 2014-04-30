#include "mainwindow.h"
#include "Library.h"
#include "ui_mainwindow.h"
#include <QFileDialog>

#include<iostream>
using namespace std;



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->displayBooks->setColumnCount(5);    //sets columns and rows
    ui->displayBooks->setRowCount(5);

}

MainWindow::~MainWindow()
{
    delete ui;
}


Library myLibrary;


// adds from a file location in hard drive
void MainWindow::on_addFromFileButton_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),"",tr(".txt"));
    myLibrary.addFromFile( fileName );
}

// adds book from manual input
void MainWindow::on_addManuallyButton_clicked()
{
    Book* newBook = new Book;
    newBook->name = ui->nameEdit->text();
    newBook->author = ui->authorEdit->text();
    newBook->quantity = ui->quantityEdit->text().toInt();    
    myLibrary.addBookManually(newBook);
}

// displays all files in database.
void MainWindow::on_displayLibraryButton_clicked()
{

    Book* currentBook = myLibrary.header;                   // a book object iterator
    ui->displayBooks->setRowCount(5+myLibrary.bookCount);   // sets the number of rows to be displayed (+5)

    for(int i=0; i< myLibrary.bookCount; i++ )              // iterates over number of books
    {
        for( int j=0; j< myLibrary.attributes ; j++  )      // iterates over number of attributes
        {

            QTableWidgetItem* currentCell;                  // creates a new cell aka item
            currentCell = new QTableWidgetItem;

            switch(j)                                       // sets appropriate attribute to cell aka item
            {

            case 0:
                currentCell->setText( QString::number( currentBook->index ) );
                break;
            case 1:
                currentCell->setText( currentBook->name );
                break;
            case 2:
                currentCell->setText( currentBook->author );
                break;
            case 3:
                currentCell->setText( QString::number(currentBook->quantity ) );
                break;

            }

            ui->displayBooks->setItem(i, j, currentCell );  // sets cell aka item to appropriate row and column
        }

        currentBook = currentBook->next;                    // points to next book in library
    }
}


// Finds the book you're looking for!
void MainWindow::on_searchButton_clicked()
{
    ui->displayBooks->clear();
    QString searchQuery = ui->searchEdit->text();

    Book* currentBook = myLibrary.header;                   // a book object iterator
    ui->displayBooks->setRowCount(5+myLibrary.bookCount);   // sets the number of rows to be displayed (+5)
    int displayRow=0;
    for(int i=0; i< myLibrary.bookCount; i++ )              // iterates over number of books
    {
        if( currentBook->name.contains( searchQuery, Qt::CaseInsensitive ) == true )
        {
            for( int j=0; j< myLibrary.attributes ; j++  )      // iterates over number of attributes
            {

                QTableWidgetItem* currentCell;                  // creates a new cell aka item
                currentCell = new QTableWidgetItem;

                switch(j)                                       // sets appropriate attribute to cell aka item
                {

                case 0:
                    currentCell->setText( QString::number( currentBook->index ) );
                    break;
                case 1:
                    currentCell->setText( currentBook->name );
                    break;
                case 2:
                    currentCell->setText( currentBook->author );
                    break;
                case 3:
                    currentCell->setText( QString::number(currentBook->quantity ) );
                    break;

                }

                ui->displayBooks->setItem(displayRow, j, currentCell );  // sets cell aka item to appropriate row and column
            }
            displayRow++;
        }

        currentBook = currentBook->next;                    // points to next book in library
    }




}

void MainWindow::on_pushButton_clicked()
{
    myLibrary.exportToFile();
}
