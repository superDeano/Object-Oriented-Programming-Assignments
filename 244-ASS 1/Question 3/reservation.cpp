//
// Created by Dean Chong San on 2018-01-20.
//
#include <iostream>
#include "reservation.h"

//getter
int reservation::getRoomNumber() {
    return theRoom.getRoomNumber();
}

//setter
void reservation::setTheRoom(int theChosenRoom) {
    reservation::theRoom.setRoomType(theChosenRoom);
}

//getter
string reservation::getCustomerName() const {
    return aCustomer.getName();
}

//function which prints a reservation info
void reservation::printReservationInfo() {

    cout << "\nName : " << aCustomer.getName() << endl;
    cout << "Reservation Number : " << reservationNumber << endl;
    cout << "Room Type : " << theRoom.getRoomType() << endl;
    cout << "Arrival Date : ";
    theArrivalDate.printDate();
    cout << "Number of Nights : " << numberOfNights << endl;

}

//Default Constructor
reservation::reservation() {

    reservationNumber = 0;
    numberOfNights = 0;
}

//Constructor
reservation::reservation(int res, const customer &c, const room &r, const Date &d, int numStay) {
    reservationNumber = res;
    aCustomer = c;
    theRoom = r;
    theArrivalDate = d;
    numberOfNights = numStay;
}

//Constructor
void reservation::assignRoom(const customer &newCustomer, const room &newRoom, const Date &date, int stay) {

    aCustomer = newCustomer;
    theRoom = newRoom;
    theArrivalDate = date;
    numberOfNights = stay;
}

//Returns reservation date with 3 integers
tuple <int, int, int>  reservation::getReservationDates(){

    return make_tuple(theArrivalDate.getDay(), theArrivalDate.getMonth(), theArrivalDate.getYear());
};

//Returns leaving date with 3 integers
tuple <int, int, int>  reservation::getLeavingDates(){
    int d, m, y;
   tie(d, m, y) =  theArrivalDate.addNumberOfDaysToADate(theArrivalDate.getDay(), theArrivalDate.getMonth(), theArrivalDate.getYear(), numberOfNights);

    return make_tuple(d, m, y);
};

room reservation::returnRoom() {
    return  theRoom;
}

//Constructor
reservation::reservation(const customer aNewCus , const room oneRoom) {
aCustomer = aNewCus;
theRoom = oneRoom;
}


int reservation::getNumberOfNights() const {
    return numberOfNights;
}

int reservation::returnRoomNum() {
    return theRoom.getRoomNumber();
}

void reservation::setDaysOfStay(int days) {
    numberOfNights = days;
}

void reservation::setArrivalDate(int d, int m, int y) {
    theArrivalDate.setsDate(d, m ,y);
}

//The Destructor
reservation::~reservation() {
    //
}