//
// Created by Dean Chong San on 2018-01-19.
//

#include "customer.h"
#include "date.h"
#include <string>
#include <iostream>


using namespace std;

//Default constructor, Initializes name, address and tel to nothing and puts in the date of birth to a date
customer::customer() {
    Name = "";
    Address = "";
    Tel = "";
    dateOfBirth.setsDate(1, 1, 2018);
};

//Constructor if only a string name is given to it
customer::customer(string name) {
    Name = name;
    Address = "";
    Tel = "";
    dateOfBirth.setsDate(1, 1, 2018);
};

//Constructor if all information are given
customer::customer(string name, string address, string tel, int day, int month, int year) {

    Name = name;
    Address = address;
    Tel = tel;
    dateOfBirth.setsDate(day, month, year);

};

//getter
const string &customer::getName() const {
    return Name;
};

//getter
const string &customer::getAddress() const {
    return Address;
};

//setter
void customer::setAddress(const string &Address) {
    customer::Address = Address;
}

//getter
const string &customer::getTel() const {
    return Tel;
}

//setter
void customer::setTel(const string &Tel) {
    customer::Tel = Tel;
}

//prints date of birth
void customer::getDateOfBirth() {
    cout << dateOfBirth.getDay() << "/" << dateOfBirth.getMonth() << "/" << dateOfBirth.getYear() << endl;
}

//setter for date of birth
void customer::setDateOfBirth(int day, int month, int year) {
    dateOfBirth.setsDate(day, month, year);
}


//Show all info
void customer::printAllCustomerInfo() {
    cout << "\nThe name is " << Name << endl;
    cout << "\nThe address is " << Address << endl;
    cout << "\nThe telephone is " << Tel << endl;
    cout << "\nThe date of birth is ";
    dateOfBirth.printDate();
    cout << endl;

}

//setter
void customer::setCustomerName(string theName) {
    Name = theName;
}

//The Destructor
customer::~customer(){
    //
}