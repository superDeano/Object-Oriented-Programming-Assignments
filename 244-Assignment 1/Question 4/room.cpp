//
// Created by Dean Chong San on 2018-01-20.
//
#include <string>
#include "room.h"
#include <iostream>

using namespace std;

//Default constructor which instantiates the different variables
room::room() {
    roomNumber = 0000;
    roomAvailabilty = true;
    roomTypeInLetters = "Regular";
}

//Constructor which takes all info
room::room(int roomnumber, int roomfree, int roomtype) {

    roomNumber = roomnumber;
    if (roomfree == 1) {
        roomAvailabilty = true;
    } else
        roomAvailabilty = false;

    if (roomtype == 1) {
        roomTypeInLetters = "Suite";
    } else
        roomTypeInLetters = "Regular";
}

//Getter
int room::getRoomNumber() const {
    return roomNumber;
}

//Setter
void room::setRoomNumber(int roomNumber) {
    room::roomNumber = roomNumber;
}

//Getter
bool room::isRoomAvailabilty() const {
    return roomAvailabilty;
}

//Setter
void room::setRoomAvailabilty(bool roomAvailabilty) {
    room::roomAvailabilty = roomAvailabilty;
}

//Getter
string room::getRoomType() const {
    return roomTypeInLetters;
}

//Setter
void room::setRoomType(int roomType) {
    switch (roomType) {
        case 1:
            roomTypeInLetters = "Suite";
            break;
        default:
            roomTypeInLetters = "Regular";
            break;
    }
}

//Member function to print all info about a room
void room::getRoomInfo() {
    cout << "\nThe Room number is " << roomNumber << endl;
    cout << "The Room type is " << roomTypeInLetters << endl;
    (roomAvailabilty) ? cout << "The Room is available" << endl : cout << "The room is not available" << endl;

}

//Constructor
room::room(int roomNum, int roomTyp){
    roomNumber = roomNum;
   switch (roomTyp) {
       case 1:
           roomTypeInLetters = "Suite";
           break;
       default:
           roomTypeInLetters = "Regular";
           break;
   }
    roomAvailabilty = true;
}

room::~room(){
    //
}
