//
// Created by Dean Chong San on 2018-01-19.
//
#include "customer.h"
#include <string>
#include <iostream>

using namespace std;

customer::customer(string name, string address, string tel, int day, int month, int year) {

    Name = name;
    Address = address;
    Tel = tel;
    dateOfBirth.setsDate(day, month, year);

}

string customer::getName() const {
    return Name;
}

const string &customer::getAddress() const {
    return Address;
}

void customer::setAddress(const string &Address) {
    customer::Address = Address;
}

const string &customer::getTel() const {
    return Tel;
}

void customer::setTel(const string &Tel) {
    customer::Tel = Tel;
}

Date customer::getDateOfBirth() {
    cout << dateOfBirth.getDay() << "/" << dateOfBirth.getMonth() << "/" << dateOfBirth.getYear() << endl;
}

void customer::setDateOfBirth(int day, int month, int year) {
    dateOfBirth.setsDate(day, month, year);
}

customer::customer() {
    Name = "";
    Address = "";
    Tel = "";
    dateOfBirth.setsDate(1, 1, 2018);

}
void customer::setCustomerName(string theName) {
    Name = theName;
}