//
// Created by Dean Chong San on 2018-02-10.
//
#include "reference.h"

using std::string;

#ifndef ASS_2_CLASSBOOK_H
#define ASS_2_CLASSBOOK_H

//Derived from the base class reference and put public so it can change protected data members
class book : public reference {

private:
    string publisher;
    int numOfPages;

public:
    //Main constructor
    book();

    //regular constructor
    book(int, string, string, int, string, int);

    //virtual member function because these can also be used differently in the other derived classes
    virtual int getNumberOfPages();

    virtual void print();

    //setters and getters
    const string &getPublisher() const;

    void setPublisher(const string &publisher);

    int getNumOfPages() const;

    void setNumOfPages(int numOfPages);

    //The destructor
    ~book();
};


#endif //ASS_2_CLASSBOOK_H

