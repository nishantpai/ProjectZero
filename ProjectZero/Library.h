#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include "QFile"
#include "QTextStream"
#include <iostream>
#include "Copy.h"
#include "ui_mainwindow.h"

using namespace std;

class Library
{
public:
    Book * header;
    Book * lastBook;
    int bookCount;
    int attributes;     // Number of properties of a book (name, author, quantity) (Will increase in future)

    Library()
    {
        header = NULL;
        lastBook = NULL;
        bookCount = 0;
        attributes = 4;
    }

    void exportToFile()
    {
        QFile outFile("Resources/newDatabase.txt");
        if( outFile.open(QIODevice::WriteOnly | QIODevice::Text) )
        {
            QTextStream out (&outFile);

            Book * currentBook;
            currentBook = header;

            for( int booksExported = 0; booksExported<bookCount; booksExported++ )
            {
                // print index
                out << currentBook->index << endl;

                // print name
                out << currentBook->name << endl;

                // print author
                out << currentBook->author << endl;

                // print quantity
                out << currentBook->quantity << endl;

                // print copy ID's and statuses
                for( int currentCopy=0; currentCopy < currentBook->quantity; currentCopy++ )
                {
                    // print ID
                    out << currentBook->copies[ currentCopy ]->id << endl;
                    // print status
                    out << currentBook->copies[ currentCopy ]->taken << endl;
                }

                currentBook = currentBook->next;
            }

            outFile.close();

        }
        else
            cout << "Unable to open file";
    }

    // adds data from a file
    void addFromFile(QString PCaddress, QTableWidget* displayBooks, QLabel* statsLabel)
    {

        QFile inputFile(PCaddress);
        if (inputFile.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream in(&inputFile);

            int currentAttribute = 0;                   // used to iterate over all attributes
            Book * newBook;

            newBook = header;

            while ( !in.atEnd() )
            {

                if( currentAttribute == 5 )
                {

                    for( int i=0; i< (newBook->quantity); i++ )
                    {
                        int copyID = in.readLine().toInt();
                        int copyIDstatus = in.readLine().toInt();

                        newBook->generateCopy( copyID, copyIDstatus );
                    }

                    currentAttribute = 0;
                    if( in.atEnd() )
                        break;

                }

                QString currentLine = in.readLine();    // reads one line at a time

                if( currentAttribute == 0 )             // Creates a new Book object
                {
                    newBook = new Book();

                    if( header == NULL)                 // Will go here if no book has been created yet.
                        header = lastBook = newBook;
                    else
                    {
                        lastBook->next = newBook;       // changes lastBook pointer
                        lastBook = newBook;
                    }
                    currentAttribute++;
                    bookCount++;
                }

                if( currentAttribute == 1 )             // stores index
                {
                    newBook->index = ( currentLine.toLongLong() );
                }

                else if( currentAttribute == 2 )        // stores name
                {
                    newBook->name.clear();
                    newBook->name.append( currentLine );
                }

                else if( currentAttribute == 3 )        // stores author
                {
                    newBook->author.clear();
                    newBook->author.append( currentLine );
                }

                else if( currentAttribute == 4 )        // stores quantity
                {
                    newBook->quantity = currentLine.toInt();

                }

                currentAttribute++;                     // iterates attributes
            }

            inputFile.close();
        }

        else
        {
            cout<<"File Open Error";
        }

        refreshDisplayTable(displayBooks, statsLabel);

    }



    void addBookManually(Book * newBook, QTableWidget* displayBooks, QLabel* statsLabel)
    {
        bookCount++;

        if(header == NULL)
        {
            header = lastBook = newBook;
            newBook->index = 1;
        }
        else
        {
            newBook->index  = (lastBook->index) + 1;
            lastBook->next = newBook;
            lastBook = newBook;
        }

        for( int i=0; i<newBook->quantity; i++ )
        {
            newBook->generateCopy( i+1, 0 );
        }

        refreshDisplayTable( displayBooks, statsLabel );

    }

    // all search edits point to this for their answers... kinda like Google
    void searchCenter(const QString &searchQuery, int whichAttribute, QTableWidget* displayBooks, QLabel* statsLabel )
    {

        displayBooks->clear();                          // clears table

        Book* currentBook = header;                     // a book object iterator

        for( int i=0; i<bookCount; i++ )
        {
            switch( whichAttribute )                    // checks which attribute field was changed (name? index? etc)
            {
            // checks if index matches
            case 0:
                if( currentBook->index == searchQuery.toLongLong() or searchQuery == "" )
                    currentBook->displayMatchingSearch[ whichAttribute ] = true;
                else
                    currentBook->displayMatchingSearch[ whichAttribute ] = false;
                break;

            // checks if name matches
            case 1:
                if( currentBook->name.contains( searchQuery, Qt::CaseInsensitive ) == true )
                    currentBook->displayMatchingSearch[ whichAttribute ] = true;
                else
                    currentBook->displayMatchingSearch[ whichAttribute ] = false;
                break;

            // checks if author matches
            case 2:
                if( currentBook->author.contains( searchQuery, Qt::CaseInsensitive ) == true )
                    currentBook->displayMatchingSearch[ whichAttribute ] = true;
                else
                    currentBook->displayMatchingSearch[ whichAttribute ] = false;
                break;

            // empty.
            case 4:
                break;
            }

            currentBook = currentBook->next;                        // points to next book
        }

        //following piece of code sets the number of rows according to search matches and also stats is updated
        {
            currentBook = header;
            int tempCount=0;
            for(int i=0;i<bookCount;i++, currentBook = currentBook->next)
                if(currentBook->passedAllSearches())
                    tempCount++;
            displayBooks->setRowCount(tempCount);
            statsLabel->setText( QString::number(tempCount) + " book(s) available");
        }

        int displayRowCount=0;                                      // keeps count of god know what
        currentBook = header;
        for(int i=0; i< bookCount; i++ )                            // iterates over number of books
        {

            if( currentBook->passedAllSearches() )
            {

                for( int j=0; j< attributes; j++  )                // iterates over number of attributes
                {

                    QTableWidgetItem* currentCell;                  // creates a new cell aka item
                    currentCell = new QTableWidgetItem;

                    QTableWidgetItem* currentCell2;                 // resets the name of headers of columns (INDEX, NAME, AUTHOR etc..)
                    currentCell2 = new QTableWidgetItem;

                    switch(j)                                       // sets appropriate attribute to cell aka item
                    {

                    case 0:

                        currentCell2->setText("INDEX");
                        displayBooks->setHorizontalHeaderItem( 0, currentCell2 );
                        currentCell->setText( QString::number( currentBook->index ) );

                        break;
                    case 1:
                        currentCell2->setText("NAME");
                        displayBooks->setHorizontalHeaderItem( 1, currentCell2 );
                        currentCell->setText( currentBook->name );
                        break;
                    case 2:
                        currentCell2->setText("AUTHOR");
                        displayBooks->setHorizontalHeaderItem( 2, currentCell2 );
                        currentCell->setText( currentBook->author );
                        break;
                    case 3:
                        currentCell2->setText("QUANTITY");
                        displayBooks->setHorizontalHeaderItem( 3, currentCell2 );
                        currentCell->setText( QString::number(currentBook->quantity ) );
                        break;
                    }
                    QString temp = currentCell->text();
                    displayBooks->setItem(displayRowCount, j, currentCell );  // sets cell aka item to appropriate row and column
                }
                displayRowCount++;
            }

            currentBook = currentBook->next;                    // points to next book in library
        }

    }

    // refreshes display table & stats
    void refreshDisplayTable(QTableWidget* displayBooks, QLabel* statsLabel)
    {
        Book* currentBook = header;                             // a book object iterator
        displayBooks->setRowCount(bookCount);
        displayBooks->setColumnWidth(1, 200);       // hardcoded. Not cool!
        for(int i=0; i< bookCount; i++ )                        // iterates over number of books
        {
            for( int j=0; j< attributes ; j++  )                // iterates over number of attributes
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

                displayBooks->setItem(i, j, currentCell );      // sets cell aka item to appropriate row and column
            }
            statsLabel->setText( QString::number(bookCount) + " book(s) available");
            currentBook = currentBook->next;                    // points to next book in library
        }

    }

};

#endif // LIBRARY_H
