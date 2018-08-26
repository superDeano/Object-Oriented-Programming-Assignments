#include <iostream>
#include "hotel.h"


using namespace std;


int main() {
    customer testJonny ("Jony Jobs", "Royal Road", "34567777",12,3,2018);
    customer testReg ("Paul lo", "mister", "234", 4, 5, 2018);
    cout << "Hello, World!" << endl;
    hotel theTrump ("Trump Hotel", "1 Montrael", "555,666-9000", 100);
    theTrump.infoHotel();

    theTrump.isHotelBooked();

    theTrump.newReservationSuite(testJonny, 69, 1 , 3, 2018);

    theTrump.newReservationReg(testReg, 70, 10, 4, 2018);

    theTrump.listCusReservdDateInt(1, 1,2018, 8, 10, 2018);

    theTrump.listOfCustomersStayLongerThan(10);

    theTrump.roomOccupationStatus(2, 4, 2018);

    theTrump.listOfCustomersReservedSuite(1, 1, 2018, 5, 12, 2018);

    theTrump.listOfCustomersReservedReg(1, 1, 2018, 12,12, 2018);
    return 0;
//I'm sorry, it doesnt work and idk why :(
}

