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
    int bookCount, attributes;

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

            int currentAttribute = 0;
            Book * newBook;

            newBook = header;

            while ( !in.atEnd() )
            {

                QString currentLine = in.readLine();

                if( currentAttribute == 0 )
                {
                    newBook = new Book();

                    if( header == NULL)
                        header = lastBook = newBook;
                    else
                    {
                        lastBook->next = newBook;
                        lastBook = newBook;
                    }
                    currentAttribute++;
                    bookCount++;
                }

                if( currentAttribute == 1 )
                {
                    newBook->name.clear();
                    newBook->name.append( currentLine );
                }

                else if( currentAttribute == 2 )
                {
                    newBook->author.clear();
                    newBook->author.append( currentLine );
                }

                else
                {
                    newBook->quantity = currentLine.toInt();
                    currentAttribute = -1;
                }

                currentAttribute++;
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
            header = lastBook = newBook;
        else
        {
            lastBook->next = newBook;
            lastBook = newBook;
        }
    }

};

#endif // LIBRARY_H
