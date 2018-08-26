#include <iostream>
#include "date.h"

using namespace std;
//The two static objects
Date testing1;
Date testing2;

//function prototypes
void mainMenu(int, int, int, int, int, int);

void printFirstDate(int, int, int, int, int, int);

void printSecondDate(int, int, int, int, int, int);

void printFirstMonth(int, int, int, int, int, int);

void printSecondMonth(int, int, int, int, int, int);

void printNumberOfDays(int, int, int, int, int, int);

void userEntersDates();

int finitLeProg();


//The main function in all its glory
int main() {
    int d1, m1, y1, d2, m2, y2, difference;
    //The title of the program
    cout << "Dates!" << endl;
    //calls the function which asks the user to first enter the dates
    userEntersDates();

    return 0;
}

//function which allows user to enter the two dates
void userEntersDates() {
    int d1, m1, y1, d2, m2, y2;

    cout << "\nPlease enter the first date (DD-MM-YYYY)" << endl;
    cin >> d1 >> m1 >> y1;
    testing1.setsDate(d1, m1, y1);
    cout << "\nPlease enter the second date (DD-MM-YYYY)" << endl;
    cin >> d2 >> m2 >> y2;
    testing2.setsDate(d2, m2, y2);
//then brings the user to the main menu
    mainMenu(d1, m1, y1, d2, m2, y2);
}

//function which then shows a menu, allows the user to choose what he wants to do
void mainMenu(int day1, int month1, int year1, int day2, int month2, int year2) {
    int choice;
    cout << "\nPlease choose one of the following options\n1 - Print first Date\n2 - Print second Date\n3 - Print first Month\n4 - Print second Month\n5 - Get the number of Days between the two dates\n6 - Enter new dates\n7 - End the program." << endl;
    cin >> choice;
    //makes sure only a number between 1 and 7 is entered
    while (choice < 1 || choice > 7) {
        cout << "\nPlease choose one of the following options\n1 - Print first Date\n2 - Print second Date\n3 - Print first Month\n4 - Print second Month\n5 - Get the number of Days between the two dates\n6 - Enter new dates\n7 - End the program." << endl;
        cin >> choice;
    }
    //then calls the appropriate function
    switch (choice) {
        case 1:
            printFirstDate(day1, month1, year1, day2, month2, year2);
            break;
        case 2:
            printSecondDate(day1, month1, year1, day2, month2, year2);
            break;
        case 3:
            printFirstMonth(day1, month1, year1, day2, month2, year2);
            break;
        case 4:
            printSecondMonth(day1, month1, year1, day2, month2, year2);
            break;
        case 5:
            printNumberOfDays(day1, month1, year1, day2, month2, year2);
            break;
        case 6:
            userEntersDates();
            break;
        default :
            finitLeProg();
            break;
    }
}

//Function which brings an end to the program
int finitLeProg() {
    return 96;
}

//function which prints the first date
void printFirstDate(int day1, int month1, int year1, int day2, int month2, int year2) {
    testing1.printDate();
    //allows user to go back to the previous menu
    mainMenu(day1, month1, year1, day2, month2, year2);
}

//function which prints the second date
void printSecondDate(int day1, int month1, int year1, int day2, int month2, int year2) {
    testing2.printDate();
    //allows user to go back to the previous menu;
    mainMenu(day1, month1, year1, day2, month2, year2);
}

//function which prints the month of the first date enterred in letters
void printFirstMonth(int day1, int month1, int year1, int day2, int month2, int year2) {
    testing1.printsMonthInLetters();
    //allows the user to go back to the previous menu
    mainMenu(day1, month1, year1, day2, month2, year2);
}

//function which prints the month of the second date in letters
void printSecondMonth(int day1, int month1, int year1, int day2, int month2, int year2) {
    testing2.printsMonthInLetters();
    //allows the user to go back to the previous menu
    mainMenu(day1, month1, year1, day2, month2, year2);
}


//function which prints the number of days between the two days enterred
void printNumberOfDays(int day1, int month1, int year1, int day2, int month2, int year2) {
    cout << "\nThe number of days between the two days is " << testing1
            .numberOfDays(day1, month1, year1, day2, month2, year2) << endl;
    //brings the user back to the main menu
    mainMenu(day1, month1, year1, day2, month2, year2);
}
