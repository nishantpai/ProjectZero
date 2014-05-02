#ifndef BOOK_H
#define BOOK_H
#include "Copy.h"
#define ATTRIBUTES 4

class Book
{
public:
    long long index;
    QString name, author;
    int quantity;

    Copy * copies[100]; //hard coded. Bad!
    int copyCount;

    Book * next;
    bool displayMatchingSearch[ ATTRIBUTES-1 ];

    Book()
    {
        next = NULL;
        quantity = 0;
        copyCount = 0;
        for( int i=0; i<ATTRIBUTES-1; i++ )
            displayMatchingSearch[i] = true;
    }

    void generateCopy(int id, int taken)
    {
        Copy * newCopy;
        newCopy = new Copy;
        newCopy->id = id;
        newCopy->taken = taken;
        copies[ copyCount++ ] = newCopy;
    }

    bool passedAllSearches()
    {
        for( int i=0; i<ATTRIBUTES-1; i++ )
        {
            if( displayMatchingSearch[i] == false )
                return false;
        }
        return true;
    }

};

#endif // BOOK_H
