//
// Created by Dean Chong San on 2018-02-10.
//

#include "reference.h"

using std::string;


//Derived from the base class reference and put public so it can modify protected data members
class report : public reference {

protected:
    string department;
    string institution;

public:

    //The main constructor
    report();

    //the regular constructor
    report(int, string, string, int, string, string);

    //setters and getters
    string getInstitution();

    string getDepartment();

    void setDepartment(const string &department);

    void setInstitution(const string &institution);

    virtual void print();

    //The destructor
    ~report();
};


//#endif //ASS_2_REPORT_H
