//
// Created by Dean Chong San on 2018-01-20.
//
#include <iostream>
#include "reservation.h"

using namespace std;

//constructor
reservation::reservation(int reservationnumber, string customername, int roomtype, int day, int month, int year, int nightstaying) {

    reservationNumber = reservationnumber;
    aCustomer.setCustomerName(customername);
    theArrivalDate.setsDate(day, month, year);
    numberOfNights = nightstaying;
    theRoom.setRoomType(roomtype);
}

//getter
string reservation::getTheRoom() {
    return theRoom.getRoomType();
}

//setter
void reservation::setTheRoom(int theChosenRoom) {
    reservation::theRoom.setRoomType(theChosenRoom);
}

//getter
string reservation::getCustomerName() const {
    return aCustomer.getName();
}

//function which prints out the info
void reservation::printReservationInfo() {

    cout << aCustomer.getName() << endl;
    cout << "Reservation Number : " << reservationNumber << endl;
    cout << "Room Type " << theRoom.getRoomType() << endl;
    cout << "Arrival Date: ";
    theArrivalDate.printDate();
    cout << endl;
    cout << "Number of Nights : " << numberOfNights;

}

//Returns reservation date with 3 integers
tuple<int, int, int> reservation::getReservationDates() {

    return make_tuple(theArrivalDate.getDay(), theArrivalDate.getMonth(), theArrivalDate.getYear());
};

//Returns leaving date with 3 integers
tuple<int, int, int> reservation::getLeavingDates() {
    int d, m, y;
    tie(d, m, y) = theArrivalDate.addNumberOfDaysToADate(theArrivalDate.getDay(), theArrivalDate.getMonth(), theArrivalDate.getYear(), numberOfNights);

    return make_tuple(d, m, y);
};

//getter
room reservation::returnRoom() {
    return theRoom;
}

//constructor
reservation::reservation(const customer aNewCus, const room oneRoom) {
    aCustomer = aNewCus;
    theRoom = oneRoom;
}

//getter
int reservation::getNumberOfNights() const {
    return numberOfNights;
}

//getter
int reservation::returnRoomNum() {
    return theRoom.getRoomNumber();
}

//setter
void reservation::setDaysOfStay(int days) {
    numberOfNights = days;
}

//setter
void reservation::setArrivalDate(int d, int m, int y) {
    theArrivalDate.setsDate(d, m ,y);
}


