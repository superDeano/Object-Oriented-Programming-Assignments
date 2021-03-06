//
// Created by Dean Chong San on 2018-01-20.
//
#include "customer.h"
#include "room.h"
#include <string>
#include "date.h"
#include <tuple>

using namespace std;

#ifndef QUESTION_3_RESERVATION_H
#define QUESTION_3_RESERVATION_H


class reservation {

public:

    //Default and another constructor
    reservation();

    reservation(const customer, const room);

    reservation(int, const customer&, const room&, const Date&, int);

    string getCustomerName() const;

    void printReservationInfo();

    int getRoomNumber();

    void setTheRoom(int);

    //Assigning room to a customer
    void assignRoom ( const customer&, const room&, const Date&, int);

	//Returns the date the customers reserved the room in 3 integers
	tuple <int, int, int>  getReservationDates();
	
	//Returns the date the customer is leaving in 3 int
    tuple <int, int, int>  getLeavingDates();
    
    int getNumberOfNights() const;

    room returnRoom();

    int returnRoomNum();

    void setDaysOfStay(int);

    void setArrivalDate(int, int, int);

    ~reservation();

private:

    int reservationNumber;
    customer aCustomer;
    room theRoom;
    Date theArrivalDate;
    int numberOfNights;

};


#endif //QUESTION_3_RESERVATION_H
