//
// Created by Dean Chong San on 2018-02-10.
//

#include "techReport.h"
#include <iostream>

using std::endl;

//setter and getter
const string &techReport::getURL() const {
    return URL;
}

void techReport::setURL(const string &URL) {
    techReport::URL = URL;
}

//main constructor which sets data members to "default" values
techReport::techReport() {

    report::id = 0;
    report::author = "";
    report::title = "";
    report::yearOfPub = 2018;
    report::institution = "";
    report::department = "";
    URL = "";

}

//Regular constructor
techReport::techReport(int theID, string theAuthor, string theTitle, int theYear, string theInst, string theDep, string theUrl) {

    report::id = theID;
    report::author = theAuthor;
    report::title = theTitle;
    report::yearOfPub = theYear;
    report::institution = theInst;
    report::department = theDep;
    URL = theUrl;

}

//function which return the number of page which is always 1
int techReport::getNumberOfPages() {
    return 1;
}

//Member function which prints out info about a Tech Report
void techReport::print() {
    std::cout << "\nThe department is  " << report::department << endl << "The institution is " << report::institution << endl << "The id is " << report::id << endl << "The author is " << report::author << endl << "The title is " << report::title << endl << "The year of publication is " << report::yearOfPub << endl << "The URL is " << URL << endl;
}

//The destructor
techReport::~techReport() {
//
}
