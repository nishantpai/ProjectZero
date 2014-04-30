#ifndef BOOK_H
#define BOOK_H
#include "Copy.h"

class Book
{
public:
    long long index;
    QString name, author;
    int quantity;

    Copy * copies[100]; //hard coded. Bad!
    int copyCount;

    Book * next;

    Book()
    {
        next = NULL;
        quantity = 0;
        copyCount = 0;
    }

    void generateCopy(int id, int taken)
    {
        Copy * newCopy;
        newCopy = new Copy;
        newCopy->id = id;
        newCopy->taken = taken;
        copies[ copyCount++ ] = newCopy;
    }

};

#endif // BOOK_H
