#include<iostream>
#include "reference.h"
using namespace std;

//The main constructor, instantiating the data members to their  "default" values
reference::reference(){
    id = 0;
    author = "";
    title = "";
    yearOfPub = 2018;    
};

//The regular constructor
reference::reference(int theID ,string theAuthor, string theTitle, int theYear){
    id = theID;
    author = theAuthor;
    title = theTitle;
    yearOfPub = theYear;
};

//Setters and getters
int reference::getID(){
    return id;
};

string reference::getAuthor(){
    return author;
};

string reference::getTitle(){
    return title;
};

int reference::getYear(){
    return yearOfPub;
};

//member function which prints out info
void reference::print() {
cout << "\nThe ID is " << id<<endl;
cout << "The Author is " << author << endl;
cout << "The title is " << title << endl;
cout << "The year is " << yearOfPub <<endl;

}

//destructor
reference::~reference() {
    //
};


//Setters
void reference::setId(int id) {
    reference::id = id;
}

void reference::setTitle(const string &title) {
    reference::title = title;
}

void reference::setAuthor(const string &author) {
    reference::author = author;
}

void reference::setYearOfPub(int yearOfPub) {
    reference::yearOfPub = yearOfPub;
}