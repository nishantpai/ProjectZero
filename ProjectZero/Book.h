#ifndef BOOK_H
#define BOOK_H
#include "Copy.h"

class Book
{
public:
    long long index;
    QString name, author;
    int quantity;
    std::vector <Copy> copies;

    Book * next;

    Book()
    {
        next = NULL;
        quantity = 0;
    }

};

#endif // BOOK_H
