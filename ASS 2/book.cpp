//
// Created by Dean Chong San on 2018-02-10.
//

#include "book.h"
#include <iostream>

using std::endl;

//the main constructor
book::book() {

    publisher = "";
    numOfPages = 0;
    reference::id = 0;
    reference::author = "";
    reference::title = "";
    reference::yearOfPub = 2018;

}

//The regular constructor
book::book(int theID, string theAuthor, string theTitle, int theYear, string thePub, int thePages) {

    publisher = thePub;
    numOfPages = thePages;
    reference::id = theID;
    reference::author = theAuthor;
    reference::title = theTitle;
    reference::yearOfPub = theYear;

}

//member function which returns the number of pages
int book::getNumberOfPages() {
    return numOfPages;
}

//member function which prints out info about a book
void book::print() {
    std::cout << "\nThe publisher is " << publisher << endl << "The title is " << reference::title << endl << "The ID is " << reference::id << endl << "The author is " << reference::author << endl << "The year of publication is " << reference::yearOfPub << endl << "The number of pages in the book is " << numOfPages << endl;
}

//setters and getters
const string &book::getPublisher() const {
    return publisher;
}

void book::setPublisher(const string &publisher) {
    book::publisher = publisher;
}

int book::getNumOfPages() const {
    return numOfPages;
}

void book::setNumOfPages(int numOfPages) {
    book::numOfPages = numOfPages;
}

//the destructor
book::~book() {
    //
}
