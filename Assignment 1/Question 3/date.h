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
    //the member functions

    Date ();

    Date(int, int, int);

    void printDate() const;

    void setsDate(int, int, int);

    void changeMonthIntoLetters();

    void printsMonthInLetters();

    int numberOfDays(int, int, int, int, int, int);

    int getDay() const;

    int getMonth() const;

    int getYear() const;

    tuple <int, int, int> addNumberOfDaysToADate(int, int, int, int);//Returns the date in the form of three integers after the number of days was added


private:
    //the variables or data members
    int day;
    int month;
    int year;
    string monthInLetter;

};

#endif //ASSIGNMENT_5_DATE_H
