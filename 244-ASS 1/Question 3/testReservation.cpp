#include <iostream>
#include "reservation.h"
#include "date.h"
#include "room.h"
#include "customer.h"

using namespace std;


int main() {

    //Instanting the different objects
    customer theTestCustomer("John Barnes", "1 merseyside", "696969284", 12, 1, 1978);

    Date arrivalDate(19, 8, 2018);

    room hisRoom(656, room::AVAILABLE, room::SUITE);

    room secondTestRoom(910, room::AVAILABLE, room::REGULAR);

    customer secondTestCus("Liv", "22 Testing Road", "A LA O HA", 15, 8, 1984);

    Date secondTestDate(24, 07, 2018);

    //finally creating a reservation object which encompasses the other objects with a first set of objects
    reservation newReservation(110, theTestCustomer, hisRoom, arrivalDate, 67);


    cout << "Hello, World!" << endl;

    //Printing info about the first set of objects
    newReservation.printReservationInfo();

    //Testing member functions
    cout << "The Room number is : " << newReservation.getRoomNumber() << endl;

    cout << "The Customer Name is : " << newReservation.getCustomerName() << endl;

    //Now assigning new room to another customer (second set of objects) but with the same reservation number and testing member functions
    newReservation.assignRoom(secondTestCus, secondTestRoom, secondTestDate, 78);

    newReservation.printReservationInfo();

    cout << "The Room number is : " << newReservation.getRoomNumber() << endl;

    cout << "The Customer Name is : " << newReservation.getCustomerName() << endl;

    return 0;
}