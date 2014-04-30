#ifndef BOOK_H
#define BOOK_H

class Book
{
public:
    long long index;
    QString name, author;
    int quantity;

    Book * next;

    Book()
    {
        next = NULL;
        quantity = 0;
    }
};

#endif // BOOK_H
