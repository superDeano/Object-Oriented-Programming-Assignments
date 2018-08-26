//
// Created by Dean Chong San on 2018-02-10.
//
#include "report.h"
#ifndef ASS_2_THESIS_H
#define ASS_2_THESIS_H

//Class derived from the class report
class thesis : public report {

private:
//private data members
    int numOfPages;
    string supervisor;
    string degree;


public:

    //the def constructor
    thesis();

    //the regular constructor
    thesis(int, string, string, int, string, string, int, string, string);

    //setters and getters
    const string &getSupervisor() const;

    void setSupervisor(const string &supervisor);

    const string &getDegree() const;

    void setNumOfPages(int numOfPages);

    void setDegree(const string &degree);

    //virtual member functions because they were also implemented in other classes and can be used in any required classes
    virtual int getNumberOfPages();

    virtual void print();

    //the destructor
    ~thesis();
};


#endif //ASS_2_THESIS_H
