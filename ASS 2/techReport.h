//
// Created by Dean Chong San on 2018-02-10.
//

#ifndef ASS_2_TECHREPORT_H
#define ASS_2_TECHREPORT_H
#include "report.h"

//Derived from the class report.
class techReport : public report {

    //the sole private data member
private:
    string URL;

public:
    //the main constructor
    techReport();

    //the regular constructor
    techReport(int, string, string, int, string, string, string);

    //setter and getter
    const string &getURL() const;

    void setURL(const string &URL);

    //virtual member functions since those are also implemented in other classes
    virtual int getNumberOfPages();

    virtual void print();

    //the destructor
    ~techReport();
};


#endif //ASS_2_TECHREPORT_H
