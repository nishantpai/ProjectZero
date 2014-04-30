#ifndef LIBRARY_H
#define LIBRARY_H
#include "Book.h"
#include "QFile"
#include "QTextStream"
#include <iostream>
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
        attributes = 3;
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

                if( currentAttribute == 1 )             // stores name
                {
                    newBook->name.clear();
                    newBook->name.append( currentLine );
                }

                else if( currentAttribute == 2 )        // stores author
                {
                    newBook->author.clear();
                    newBook->author.append( currentLine );
                }

                else                                    // stores quantity
                {
                    newBook->quantity = currentLine.toInt();
                    currentAttribute = -1;
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


    // All this functions does is add bookCount and change value of lastBook pointer.
    void addBookManually(Book * newBook)
    {
        bookCount++;
        if(header == NULL)
            header = lastBook = newBook;
        else
        {
            lastBook->next = newBook;
            lastBook = newBook;
        }
    }

};

#endif // LIBRARY_H
