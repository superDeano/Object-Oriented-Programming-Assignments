//
// Created by Dean Chong San on 2018-01-24.
//

#ifndef QUESTION_4_HOTEL_H
#define QUESTION_4_HOTEL_H

#include "reservation.h"
#include "room.h"
#include <string>
#include <vector>
#include <tuple>

using std::vector;
using std::string;

class hotel {

private:
    string Name;
    string Address;
    string Tel;
    int numRooms;
    room *Rooms;
    vector<reservation> theReservations;
    Date forCalculation;
    int counterReg;
    int counterSuite;

public:

    //Constructorss
    hotel();

    hotel(string, string, string, int);

    //setters and getters
    const string &getName() const;

    void setName(const string &Name);

    const string &getAddress() const;

    void setAddress(const string &Address);

    const string &getTel() const;

    void setTel(const string &Tel);

    int getNumRooms() const;

    void setNumRooms(int numRooms);

    room *getRooms() const;

    void setRooms(room *Rooms);

    void roomOccupationStatus(int, int, int);

    void listCusReservdDateInt(int, int, int, int, int, int);

    void listOfCustomersReservedSuite(int, int, int, int, int, int);

    void listOfCustomersReservedReg(int, int, int, int, int, int);

    void listOfCustomersStayLongerThan(int);

    bool isHotelBooked();

    void infoHotel();

    void newReservationReg(const customer &, int, int, int, int);

    void newReservationSuite(const customer &, int, int, int, int);

    //Destructor
    ~hotel();
};


#endif //QUESTION_4_HOTEL_H

