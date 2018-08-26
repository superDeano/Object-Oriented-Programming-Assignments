//
// Created by Dean Chong San on 2018-01-24.
//
#include <iostream>
#include "hotel.h"

using namespace std;


//Setters and Getters
const string &hotel::getName() const {
    return Name;
}

void hotel::setName(const string &Name) {
    hotel::Name = Name;
}

const string &hotel::getAddress() const {
    return Address;
}

void hotel::setAddress(const string &Address) {
    hotel::Address = Address;
}

const string &hotel::getTel() const {
    return Tel;
}

void hotel::setTel(const string &Tel) {
    hotel::Tel = Tel;
}

int hotel::getNumRooms() const {
    return numRooms;
}

void hotel::setNumRooms(int numRooms) {
    hotel::numRooms = numRooms;
}

room *hotel::getRooms() const {
    return Rooms;
}

void hotel::setRooms(room *Rooms) {
    hotel::Rooms = Rooms;
}

//Default Constructor
hotel::hotel() {

    Name = "The Hotel";
    Tel = "687439849384";
    Address = "169 Big Boul Montrial\nJ6TU7V\nCanada";
    numRooms = 100;
    counterReg = 0;
    room *rooms = new room[numRooms];
    for (int y = 0; y <= numRooms; y ++) {
        rooms[y].setRoomNumber(y);
        if (y == (numRooms - (numRooms / 5))) {
            rooms[y].setRoomType(room::SUITE);
        }

    }
    counterSuite = (numRooms - (numRooms / 5));

}

//Constructor
hotel::hotel(string name, string address, string tel, int numberofRooms) {
    Name = name;
    Address = address;
    Tel = tel;
    numRooms = numberofRooms;
    counterReg = 0;
    room *rooms = new room[numRooms];

    for (int y = 0; y <= numRooms; y ++) {
        rooms[y].setRoomNumber(y);
        if (y == (numRooms - (numRooms / 5))) {
            rooms[y].setRoomType(room::SUITE);
        }

    }
    counterSuite = (numRooms - (numRooms / 5));
}

/*Function which checks if all the rooms of the hotels are booked. Does a loop to go through all the rooms of the hotels and if there is one room free then it leaves the loop and says that the hotel isn't fully booked*/
bool hotel::isHotelBooked() {
    int x = 0;
    int roomAllBooked = 0;
    while (x <= numRooms) {
        if (Rooms[x].isRoomAvailabilty() == true) {
            roomAllBooked = 1;
            break;
        } else roomAllBooked = 0;
        x ++;
    }
    switch (roomAllBooked) {
        case 1:
            return true;
            break;
        default:
            return false;
            break;
    }

}


/*Function which displays a list of customers who reserved a room in a certain interval. Therefore two dates of three integers are taken for the interval. To know if a reservation is part of the interval, the date the number of days from a reference date is used to check if the stay of one customer is in the interval. If this is true then the customer name is printed*/
void hotel::listCusReservdDateInt(int day1, int month1, int year1, int day2, int month2, int year2) {
    int differenceDaysInt1, differenceDaysInt2, differenceIntStay = 0;
    int d, m, y, stay = 0;

    for (int x = 0; x <= theReservations.size(); x ++) {
        tie(d, m, y) = theReservations[x].getLeavingDates();
        differenceDaysInt1 = forCalculation.numberOfDays(day1, month1, year1, 1, 1, 2018);
        differenceDaysInt2 = forCalculation.numberOfDays(day2, month2, year2, 1, 1, 2018);
        differenceIntStay = forCalculation.numberOfDays(d, m, y, 1, 1, 2018);
        if ((differenceIntStay >= differenceDaysInt1) && (differenceIntStay <= differenceDaysInt2)) {
            std::cout << theReservations[x].getCustomerName() << endl;
        }
    }
}


/*Function which works similarly like the listCusReservdDateInt, except that in addition to checking the dates of stay, it also checks if the room is suite and then prints the customer name*/
void hotel::listOfCustomersReservedSuite(int day1, int month1, int year1, int day2, int month2, int year2) {
    int differenceDaysInt1, differenceDaysInt2, differenceIntStay = 0;
    int d, m, y, stay = 0;

    for (int x = 0; x <= theReservations.size(); x ++) {
        tie(d, m, y) = theReservations[x].getLeavingDates();
        differenceDaysInt1 = forCalculation.numberOfDays(day1, month1, year1, 1, 1, 2018);
        differenceDaysInt2 = forCalculation.numberOfDays(day2, month2, year2, 1, 1, 2018);
        differenceIntStay = forCalculation.numberOfDays(d, m, y, 1, 1, 2018);
        if ((differenceIntStay >= differenceDaysInt1) && (differenceIntStay <= differenceDaysInt2) &&
            (theReservations[x].getTheRoom() == "Suite")) {
            std::cout << theReservations[x].getCustomerName() << endl;
        }
    }
}

/*Function which works similarly like listOfCustomersReservedSuite but instead of checking the type of room for suite, it checks if the rooms are Regular then prints the customer name*/
void hotel::listOfCustomersReservedReg(int day1, int month1, int year1, int day2, int month2, int year2) {
    int differenceDaysInt1, differenceDaysInt2, differenceIntStay = 0;
    int d, m, y, stay = 0;

    for (int x = 0; x <= theReservations.size(); x ++) {
        tie(d, m, y) = theReservations[x].getLeavingDates();
        differenceDaysInt1 = forCalculation.numberOfDays(day1, month1, year1, 1, 1, 2018);
        differenceDaysInt2 = forCalculation.numberOfDays(day2, month2, year2, 1, 1, 2018);
        differenceIntStay = forCalculation.numberOfDays(d, m, y, 1, 1, 2018);
        if ((differenceIntStay >= differenceDaysInt1) && (differenceIntStay <= differenceDaysInt2) &&
            (theReservations[x].getTheRoom() == "Regular")) {
            std::cout << theReservations[x].getCustomerName() << endl;
        }
    }
}

/*Functions which goes through the vector of reservations and checks for the stay and if the stay of a customer is longer or equal to the one which has to be compared, the name of the customer is printed*/
void hotel::listOfCustomersStayLongerThan(int durationStay) {

    for (int x = 0; x <= theReservations.size(); x ++) {
        if (theReservations[x].getNumberOfNights() >= durationStay) {
            cout << theReservations[x].getCustomerName() << endl;
        }

    }

}


//Function which prints information about a hotel
void hotel::infoHotel() {
    cout << "\n" << Name << endl;
    cout << "Address : " << Address << endl;
    cout << "Telephone : " << Tel << endl;
    cout << "Total number of rooms : " << numRooms << endl;
}


/*Function which allows for the new reservation for a regular room to be made, taking in an object of customer and room. The counterReg keeps track of the number of rooms which have been booked*/
void hotel::newReservationReg(const customer &aNewCus, int days, int d, int m, int y) {
    reservation aResr(aNewCus, Rooms[counterReg]);

    theReservations.emplace_back(aResr);
theReservations[counterReg].setDaysOfStay(days);
    theReservations[counterReg].setArrivalDate(d,m,y);
    Rooms[counterReg].setRoomAvailabilty(false);
    counterReg ++;

}

//Function which allows for a new reservation for a room of type suite
void hotel::newReservationSuite(const customer &aNewCus, int days, int d, int m, int y) {
    reservation aResr(aNewCus, Rooms[counterSuite]);

    theReservations.emplace_back(aResr);
theReservations[counterSuite].setDaysOfStay(days);
    theReservations[counterSuite].setArrivalDate(d, m ,y);
    Rooms[counterSuite].setRoomAvailabilty(false);
    counterSuite ++;

}

/*This functions takes in a certain date. Check if that date is in the interval of a reservation. If so then puts the rooms availabilty to false (Room is not available) and displays the list of every room*/
void hotel::roomOccupationStatus(int da, int mo, int ye) {
    int differenceDaysStart, differenceDaysLeave, differenceDate = 0;
    int d, m, y, d1, m1, y1 = 0;


    differenceDate = forCalculation.numberOfDays(da, mo, ye, 1, 1, 2018);
    for (int x = 0; x <= theReservations.size(); x ++) {
        tie(d, m, y) = theReservations[x].getLeavingDates();
        tie(d1, m1, y1) = theReservations[x].getReservationDates();
        differenceDaysStart = forCalculation.numberOfDays(d1, m1, y1, 1, 1, 2018);
        differenceDaysLeave = forCalculation.numberOfDays(d, m, y, 1, 1, 2018);
        if ((differenceDate >= differenceDaysStart) && (differenceDate <= differenceDaysLeave)) {
        Rooms[theReservations[x].returnRoomNum()].setRoomAvailabilty(false);
        }
    cout << Rooms[x].getRoomNumber() << " : " <<Rooms[x].isRoomAvailabilty()<< endl;
    }
}

//Destructor
hotel::~hotel() {
    //
}