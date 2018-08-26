#include <iostream>
#include "room.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    //Instanting an object from the class room with
    room thePresidentialSuite(6969, room::AVAILABLE, room::SUITE);

    //Trying the member functions
    thePresidentialSuite.getRoomInfo();

    thePresidentialSuite.setRoomAvailabilty(room::NOTAVAILABLE);

    thePresidentialSuite.setRoomType(room::REGULAR);

    thePresidentialSuite.getRoomInfo();

    return 0;

}