#include <iostream>
#include "book.h"


int main (){
    //creating an object of type book using the book regular constructor
    book twoBooks(689, "MagDany", "GI JOE", 1090, "DeanoPUB", 699);

    //printing info about the book using existing data
    twoBooks.print();

    //changing a couple of info
    twoBooks.setNumOfPages(799);
    twoBooks.setPublisher("megaPUB");

    //printing the info about the book again
    twoBooks.print();
    return 69;
}