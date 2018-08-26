//
// Created by Dean Chong San on 2017-11-22.
//

#include "Passenger.h"
#include <string>
#include <array>
#include <iostream>

using namespace std;

//The constructor, when called, will give the information to the data members
passenger::passenger(int passID, string name, string address, string telephone, int day, int month, int year) {
    passengerID = passID;
    defname = name;
    defaddress = address;
    deftelephone = telephone;
    dateOfBirth.setsDate(day, month, year);
}

//The function which allows the user to change the ID when needed
void passenger::setPassID() {
    cout << "\nEnter the ID:" << endl;
    cin >> passengerID;
}

//Function which allows to change the name when needed
void passenger::setName() {
    cout << "\nEnter the name:" << endl;
    ws(cin);
    getline(cin, defname);
}

//function which allows to change the address when required
void passenger::setAddress() {
    cout << "\nEnter the address:" << endl;
    ws(cin);
    getline(cin, defaddress);
}

//function which allows to change the data for the telephone when asked
void passenger::setTelephone() {
    cout << "\nEnter the telephone number:" << endl;
    cin >> deftelephone;
}

//function which allows one to change the Date of birth of a passenger if wanted
void passenger::setDOB() {
    int day, month, year;

    cout << "\nEnter the date of birth(DD-MM-YYYY):" << endl;
    ws(cin);
    cin >> day >> month >> year;
    //as the data for the date are entered, the date is then changed
    dateOfBirth.setsDate(day, month, year);
}

//function which gives back the value for the passenger ID
int passenger::getPassengerID() const {
    return passengerID;
}

//function which gives back the value for the passenger name
const string &passenger::getDefname() const {
    return defname;
}

//function which gives back the value for the passenger's address
const string &passenger::getDefaddress() const {
    return defaddress;
}

//function which gives back the value for the passenger's telephone
const string &passenger::getDeftelephone() const {
    return deftelephone;
}

//function which displays back the date of birth
const Date &passenger::getDateOfBirth() const {
   dateOfBirth.printDate();
    return 0;
}


