#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include "QFile"
#include "QTextStream"
#include <iostream>
#include "Copy.h"

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


    void addFromFile(QString PCaddress)
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

    }



    void addBookManually(Book * newBook)
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

    }

};

#endif // LIBRARY_H
