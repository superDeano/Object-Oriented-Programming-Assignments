//
// Created by Dean Chong San on 2017-11-12.
//
#include <string>
#include <iostream>
#include <sstream>
#include "student.h"
using namespace std;

//The constructor
student ::student() {
    int idNumber{0}, areaCode{0},restPhoneNumber{0};
    string firstName, lastName, doB, address;
};

//Member Function which displays the ID number
void student::returnIdNumber() {
    cout <<"\nThe ID number is "<<idNumber<<endl;
}


//Member Function which displays the First Name
void student::returnFirstName() {
    cout<<"\nThe first name is "<<firstName<<endl;
}

//Member Function which displays the last name
void student::returnLastName() {
    cout<<"\nThe last name is "<<lastName<<endl;
}

//Member Function which displays the full name of a student
void student::returnFullName() {
    cout<<"\nThe full name is "<<firstName << " "<<lastName<<endl;
}

//Member Function which returns the birthday
void student::returndoB() {
    string year, month;
    int numDay,numMonth;
    //Variables to store the year which the student was born
    year= doB.substr(0,4);

    //Take the month from the string and treats it as an integer
    istringstream ( doB.substr(4,2) ) >> numMonth;

    //Take the day from the string and treats it as an integer
    istringstream (doB.substr(6,2))>>numDay;

    //Based on the number of the month, the month will then be spelled correctly
    switch (numMonth){
        case 01: month ="January";
            break;
        case 02: month ="February";
            break;
        case 03: month ="March";
            break;
        case 04: month ="April";
            break;
        case 05: month ="May";
            break;
        case 06: month ="June";
            break;
        case 07: month ="July";
            break;
        case 8 : month ="August";
            break;
        case 9: month ="September";
            break;
        case 10:month ="October";
            break;
        case 11:month ="November";
            break;
        case 12:month ="December";
            break;
    }

    //Finally displays The date of Birth
    cout <<"\nThe date of Birth is the "<<numDay<< " "<< month <<" "<< year <<endl;
}

//Member Function which displays the address of the student
void student::returnAddress() {
    cout<<"\nThe address is "<<address<<endl;
}

//Member Function which displays the full telephone number
void student::returnTelephoneNum() {
    cout<<"\nThe Telephone Number is ("<<areaCode<<")-"<<restPhoneNumber<<endl;
}

//Member Function which enters the first name of the student in the system
void student::modifyFirstName(string x){
    firstName= x;
}

//Member Function which enters the last name of the student in the system
void student::modifyLastName(string z) {
    lastName =z;
}

//Member Function which enters the date of birth in the system
void student::modifydoB(string d) {
    doB = d;
}

//Member Function which enters the address in the system
void student::modifyAddress(string w) {
    address = w;
}

//Member Function which enters the telephone number including the area code in the system
void student::modifyTelephoneNum(int t1, int t2) {
    areaCode= t1;
    restPhoneNumber = t2;
}

//Member Function which says whether two students have the same last name
bool student:: compareLastName(string a, string b){
    if (a == b)
        return true;
    else return false;
}

//Member Function which says whether two students have the same address
bool student::compareAddress(string o, string l) {
    if (o == l)
        return true;
    else
        return false;
}

//Member Function which enters the student id number
void student::modifyIdNumber(int id) {
    idNumber = id;
}

//Member Function which calculates and returns the age
void student::returnAge() {
    int numDay, numYear, numMonth,age;
    /*Take the part of the year and converts it as a string, then takes 2017 to substract the year the student was born to obtain his age
     * Then displays the age*/
    istringstream(doB.substr(0,4))>>numYear;
    age = 2017 - numYear;
    cout <<"The student is "<<age<<" years old"<<endl;
}

