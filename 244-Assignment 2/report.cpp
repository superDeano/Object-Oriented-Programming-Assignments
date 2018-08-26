//
// Created by Dean Chong San on 2018-02-10.
//
#include <iostream>
#include "report.h"

using std::endl;

//setters
void report::setDepartment(const string &department) {
    report::department = department;
}

void report::setInstitution(const string &institution) {
    report::institution = institution;
}

//main constructor
report::report() {

    department = "";
    institution = "";
    reference::id = 0;
    reference::author = "";
    reference::title = "";
    reference::yearOfPub = 2018;

}

//regular constructor
report::report(int theID, string theAuthor, string theTitle, int theYear, string theInstitu, string theDep) {

    department = theDep;
    institution = theInstitu;
    reference::id = theID;
    reference::author = theAuthor;
    reference::title = theTitle;
    reference::yearOfPub = theYear;

}

//getters
string report::getInstitution() {
    return std::string();
}

string report::getDepartment() {
    return std::string();
}

//member function which prints info about a report
void report::print() {
    std::cout << "\nThe department is  " << department << endl << "The institution is " << institution << endl << "The id is " << reference::id << endl << "The author is " << reference::author << endl << "The title is " << reference::title << endl << "The year of publication is " << reference::yearOfPub << endl;
}

//The destructor
report::~report() {
    //
}