//
// Created by Dean Chong San on 2018-01-19.
//

#ifndef ASSIGNMENT_1_CUSTOMER_H
#define ASSIGNMENT_1_CUSTOMER_H

#endif //ASSIGNMENT_1_CUSTOMER_H

#include <string>
#include "date.h"

class customer {

private:

    //The private variables
    string Name;
    string Address;
    string Tel;
    Date dateOfBirth;

public:

    //Several Constructors
    customer(string, string, string, int, int, int);

    customer();

    customer(string) {};

    //Setters and Getters
    const string &getName() const;

    const string &getAddress() const;

    void setAddress(const string &Address);

    const string &getTel() const;

    void setTel(const string &Tel);

     Date getDateOfBirth();

    void setDateOfBirth(int, int, int);

    void setCustomerName(string);

};


