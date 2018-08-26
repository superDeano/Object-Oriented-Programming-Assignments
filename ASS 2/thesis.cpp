//
// Created by Dean Chong San on 2018-02-10.
//
#include <iostream>
#include "thesis.h"

using std::endl;

//setters and getters
const string &thesis::getSupervisor() const {
    return supervisor;
}

void thesis::setSupervisor(const string &supervisor) {
    thesis::supervisor = supervisor;
}

const string &thesis::getDegree() const {
    return degree;
}

void thesis::setDegree(const string &degree) {
    thesis::degree = degree;
}

//main constructor
thesis::thesis() {

    report::id = 0;
    report::author = "";
    report::title = "";
    report::yearOfPub = 2018;
    report::institution = "";
    report::department = "";
    supervisor = "";
    degree = "";

}

//regular constructor
thesis::thesis(int theID, string theAuthor, string theTitle, int theYear, string theInst, string theDep, int numPAge, string theSuperv, string theDeg) {

    report::id = theID;
    report::author = theAuthor;
    report::title = theTitle;
    report::yearOfPub = theYear;
    report::institution = theInst;
    report::department = theDep;
    supervisor = theSuperv;
    degree = theDeg;

}

//getter for number of page which is always one for a thesis
int thesis::getNumberOfPages() {
    return 1;
}

//member function which prints out info for a thesis
void thesis::print() {
    std::cout << "\nThe department is  " << report::department << endl << "The institution is " << institution << endl << "The id is " << report::id << endl << "The author is " << report::author << endl << "The title is " << report::title << endl << "The year of publication is " << report::yearOfPub << endl << "The supervisor is " << supervisor << endl << "The degree is " << degree << endl;
}

//setter for number of pages
void thesis::setNumOfPages(int numOfPages) {
    thesis::numOfPages = numOfPages;
}

//the destructor
thesis::~thesis() {
//
}
