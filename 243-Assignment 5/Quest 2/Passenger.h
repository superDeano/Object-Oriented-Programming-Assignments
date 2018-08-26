//
// Created by Dean Chong San on 2017-11-22.
//
#include <string>
#include <array>
#include "Date.h"

using namespace std;

#ifndef QUEST_2_PASSENGER_H
#define QUEST_2_PASSENGER_H


//The class passenger
class passenger {

public :

    //The member functions
    passenger(int, string, string, string, int, int, int);

    void setName();

    void setAddress();

    void setTelephone();

    void setDOB();

    void setPassID();

    int getPassengerID() const;

    const string &getDefname() const;

    const string &getDefaddress() const;

    const string &getDeftelephone() const;

    const Date &getDateOfBirth() const;


private:
//The private data members (aka the variables)
    int passengerID;
    string defname, defaddress, deftelephone;
    Date dateOfBirth;

};


#endif //QUEST_2_PASSENGER_H
