//
// Created by Dean Chong San on 2017-11-21.
//

#ifndef ASSIGNMENT_5_DATE_H
#define ASSIGNMENT_5_DATE_H

#include <string>

using namespace std;

//The class Date
class Date {

public:
//The member functions
    Date(int= 1, int= 1, int= 1000);

    void printDate() const;

    void setsDate(int, int, int);

    void changeMonthIntoLetters();

    void printsMonthInLetters();

    int numberOfDays(int, int, int, int, int, int);

    tuple <int, int, int> addNumberOfDaysToADate(int, int, int, int);

private:
//The data members
    int day;
    int month;
    int year;
    string monthInLetter;
};

#endif //ASSIGNMENT_5_DATE_H
