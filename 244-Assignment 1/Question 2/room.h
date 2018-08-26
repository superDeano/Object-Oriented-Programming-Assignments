//
// Created by Dean Chong San on 2018-01-20.
//
#include <string>

#ifndef QUESTION_2_ROOM_H
#define QUESTION_2_ROOM_H


class room {

public:

    //Variables which enable for easy instanting of room objects
    static const int SUITE = 1;

    static const int REGULAR = 0;

    static const int AVAILABLE = 0;

    static const int NOTAVAILABLE = 1;

    //Constructors
    room();

    room(int, int, int);

    //Member function
    void getRoomInfo();

    //Setters and Getters
    int getRoomNumber() const;

    void setRoomNumber(int roomNumber);

    bool isRoomAvailabilty() const;

    void setRoomAvailabilty(bool roomAvailabilty);

    std::string getRoomType() const;

    void setRoomType(int roomType);

    ~room();
private:

    //The private variables
    int roomNumber;
    bool roomAvailabilty;
    std::string roomTypeInLetters;

};


#endif //QUESTION_2_ROOM_H
