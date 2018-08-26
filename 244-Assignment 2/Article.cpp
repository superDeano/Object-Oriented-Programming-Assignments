//
// Created by Dean Chong San on 2018-02-10.
//
#include "Article.h"
#include <iostream>
using std::endl;
using std::cout;

//Setters and Getters
const string &Article::getJournal() const {
    return journal;
}

void Article::setJournal(const string &journal) {
    Article::journal = journal;
}

int Article::getStartPage() const {
    return startPage;
}

void Article::setStartPage(int startPage) {
    Article::startPage = startPage;
}

int Article::getEndPage() const {
    return endPage;
}

void Article::setEndPage(int endPage) {
    Article::endPage = endPage;
}

//main constructor
Article::Article() {

    journal = "";
    startPage = 0;
    endPage = 0;
    reference::id = 0000;
    reference::title = "";
    reference::author = "";
    reference::yearOfPub = 2018;
}

//regular constructor
Article::Article(int theID, string theAuthor, string theTitle, int theYear, string theJournal, int theStartPage, int theEndPage) {

    journal = theJournal;
    startPage = theStartPage;
    endPage = theEndPage;
    reference::id = theID;
    reference::title = theTitle;
    reference::author = theAuthor;
    reference::yearOfPub = theYear;

}

//member function which returns the number of pages. It assumes that the endpage is always larger than the first page
int Article::getNumberOfPages() {
    return (endPage - startPage);
}

//function which prints out information about an article
void Article::print() {
    cout << "\nThe journal is " << journal<< endl << "The ID is " << reference::id << endl << "The author is " << reference::author << endl << "The year of publication is " << reference::yearOfPub << endl << "The start page is " << startPage << endl << "The end page is "<< endPage << endl;
}

//the destructor
Article::~Article() {
    //
}
