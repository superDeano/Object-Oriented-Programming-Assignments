//
// Created by Dean Chong San on 2017-11-21.
//

#include <iostream>
#include "date.h"
#include <string>
#include <array>
#include <tuple>

using namespace std;

//Constructor
Date::Date(int d, int m, int y) {
    day = d;
    month = m;
    year = y;

}

//function which prints the date
void Date::printDate() const {
    //Prints the date in form of dd/mm/yyyy
    cout << endl << day << "/" << month << "/" << year << "\n";

}

//function which will change the date
void Date::setsDate(int d, int m, int y) {
    bool isTheDateInvalid{false};

//makes sure that the date cannot have a month and day bigger than 12 and 31 respectively or smaller than 1
    if (d < 1 || d > 31 || m < 1 || m > 12)
        isTheDateInvalid = true;
        /*Since we are not dealing with leap years, February will not have more than 28 days
         * Therefore if the month is February and there's more than 28 days, the date is invalid*/
    else if (m == 2 && d > 28)
        isTheDateInvalid = true;

        /*Some months have 30 days, if such month is entered with 31 days, like for november, then the date is invalid*/
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
        isTheDateInvalid = true;
    else
        isTheDateInvalid = false;
/*Loop so that user has the chance to enter another date*/
    while (isTheDateInvalid == true) {
        cout << "\nInvalid Date!!" << endl;
        cout << "\nPlease enter the dates (DD-MM-YYYY)" << endl;
        cin >> d >> m >> y;
        //Checks again if the date is valid;
        if (d > 31 || m > 12)
            isTheDateInvalid = true;
        else if (m == 2 && d > 29)
            isTheDateInvalid = true;
        else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30)
            isTheDateInvalid = true;
        else
            isTheDateInvalid = false;
    }
    //If the date is valid then the data members received the data
    day = d;
    month = m;
    year = y;
    //calls that function immediately to convert and store the name of the month already
    changeMonthIntoLetters();

}

//function which will convert the month into letters
void Date::changeMonthIntoLetters() {
    //Looks what month it is then associates the right name and stores the name so that it can be quickly accessed
    switch (month) {
        case 1:
            monthInLetter = "January";
            break;
        case 02:
            monthInLetter = "February";
            break;
        case 03:
            monthInLetter = "March";
            break;
        case 04:
            monthInLetter = "April";
            break;
        case 05:
            monthInLetter = "May";
            break;
        case 06:
            monthInLetter = "June";
            break;
        case 07:
            monthInLetter = "July";
            break;
        case 8 :
            monthInLetter = "August";
            break;
        case 9:
            monthInLetter = "September";
            break;
        case 10:
            monthInLetter = "October";
            break;
        case 11:
            monthInLetter = "November";
            break;
        case 12:
            monthInLetter = "December";
            break;
    }
}

//function which prints the month only in letters
void Date::printsMonthInLetters() {
    cout << "\nThe month is " << monthInLetter << endl;
}

//function which calculates the number of days between two dates
int Date::numberOfDays(int day1, int month1, int year1, int day2, int month2, int year2) {
//The array to know how many days in each month
    array<int, 12> daysInEachMonth{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    //Variables to keep count of the sum of days
    int keepingCountDay1{0}, keepingCountDay2{0}, totalNumberOfDays{
            0}, sortedDay1, sortedDay2, sortedMonth1, sortedMonth2, sortedYear1, sortedYear2;

    //sorts the two dates entered by the user in the correct order
    if (year1 > year2) {
        sortedYear1 = year1;
        sortedYear2 = year2;
        sortedMonth1 = month1;
        sortedMonth2 = month2;
        sortedDay1 = day1;
        sortedDay2 = day2;
    } else {
        sortedYear1 = year2;
        sortedYear2 = year1;
        sortedMonth2 = month1;
        sortedMonth1 = month2;
        sortedDay1 = day2;
        sortedDay2 = day1;
    }

    //if the years are not the same then we take the sum of days between each full years
    if (sortedYear1 != sortedYear2) {

        totalNumberOfDays = (sortedYear1 - sortedYear2 - 1) * 365;


//Calculate how many days until the end of the first year starting from the next month
        for (size_t x = sortedMonth2; x < daysInEachMonth.size(); x ++) {
            keepingCountDay1 += daysInEachMonth[x];
        }
        //Then add the number of days to go in the month
        keepingCountDay1 += daysInEachMonth[sortedMonth1 - 1] - sortedDay2;

        //Calculate the number of days since the beginning of the second year until the month before
        for (int y = 0; y < (sortedMonth1 - 1); y ++) {
            keepingCountDay2 += daysInEachMonth[y];
        }
        //Then add the number of days passed in the month
        keepingCountDay2 += sortedDay1;
//The total days is the addition of everything
        totalNumberOfDays += (keepingCountDay1 + keepingCountDay2 + 1);
    }

        //Does the counting if the two years are the same
    else {
        //if it's the same year, then the program does the right addition/substraction depending on the dates
        if (month1 > month2) {
            for (month2 - 1; month2 < month1 - 1; ++ month2) {
                keepingCountDay1 += daysInEachMonth[month2];
            }
            keepingCountDay1 += ((daysInEachMonth[month2 - 1] - day2) + day1);

        } else if (month2 > month1) {
            for ((month1 - 1); month1 < (month2 - 1); ++ month1) {
                keepingCountDay1 += daysInEachMonth[month1];
            }
            keepingCountDay1 += ((daysInEachMonth[month1 - 1] - day1) + day2);
        }
            //Does the counting if the two years and months are the same
        else {
            if (day1 > day2) {
                keepingCountDay1 = day1 - day2;
            } else {
                keepingCountDay1 = day2 - day1;
            }
        }
        totalNumberOfDays = keepingCountDay1 + keepingCountDay2;
    }
//Caculate how many days have passed in the other year and returns the final answer
    return totalNumberOfDays;
}

tuple <int, int, int> Date::addNumberOfDaysToADate (int d, int m, int y, int adder) {
    int tempDay = d;
    int tempMonth = m;
    int tempYear = y;
    int substractor;


    while (adder > 30) {
        if (tempMonth == 4 || tempMonth == 6 || tempMonth == 9 || tempMonth == 11) {
            substractor = 31 - tempDay;
            tempDay = 1;
            tempMonth += 1;
            adder -= substractor;
            cout << adder << endl;

        } else if (tempMonth == 1 || tempMonth == 3 || tempMonth == 5 || tempMonth == 7 || tempMonth == 8 ||
                   tempMonth == 10 || tempMonth == 12) {
            substractor = 32 - tempDay;
            tempDay = 1;
            tempMonth += 1;
            adder -= substractor;
            cout << adder << endl;

        } else if (tempMonth == 2) {
            substractor = 29 - tempDay;
            tempDay = 1;
            tempMonth += 1;
            adder -= substractor;
            cout << adder << endl;

        } else {
            cout << tempDay << endl;
        }

    }
    if ((adder <= 30) && (adder > 0)) {

        tempDay += adder;

        if ((tempMonth == 4 || tempMonth == 6 || tempMonth == 9 || tempMonth == 11) && tempDay >= 31) {
            tempMonth += 1;
            tempDay -= 30;

            cout << tempDay << "/" << tempMonth << "/" << tempYear << endl;

        } else if ((tempMonth == 1 || tempMonth == 3 || tempMonth == 5 || tempMonth == 7 || tempMonth == 8 ||
                    tempMonth == 10 || tempMonth == 12) && tempDay >= 32) {
            tempMonth += 1;
            tempDay -= 31;
            cout << tempDay << "/" << tempMonth << "/" << tempYear << endl;

        } else if (tempMonth == 2 && tempDay >= 29) {
            tempMonth += 1;
            tempDay -= 28;

            cout << tempDay << "/" << tempMonth << "/" << tempYear << endl;

        }
        else {
            tempDay;
        }

    }


return make_tuple(tempDay, tempMonth, tempYear);
}

//Since leap years are not included, the sum maybe off a few days depending on the number of years between the two days since the extra day for every four years is not counted
