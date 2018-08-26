//The implementation of the Class Roman.
//Inclusion of the header file roman.h
#include <iostream>
#include "roman.h"
#include <string>

using namespace std;

//The object trying instantiated to the class roman
roman trying;


int main()
{
    //Local string variable
    string takeTheNumber;
    //The title
    cout << "Roman Numbers" << endl;

    //Asks the user to enter a number in Roman Numeral
    cout << "\nPlease Enter a number in Roman Numeral" << endl;
    //Takes in the Number
    cin >> takeTheNumber;
    //The object then uses a member function to store the value entered
   trying.setRomNumber(takeTheNumber);

    //Shows the options available to the user now
    cout << "\nPlease choose between one of the following options to begin\n1- display the number in Roman Numeral\n2 - Display the number in decimal"<<endl;
   short theOption;
    cin >> theOption;
    //loop to make sure he enters only a number between 1 and 2
    while (theOption<1||theOption>2)
    {
        cout << "\nPlease choose between one of the following options to begin\n1- display the number in Roman Numeral\n2 - Display the number in decimal"<<endl;
        short theOption;
        cin >> theOption;
    }

    //Based on what the user has chosen, the number in the correct format will then be displayed
    switch (theOption)
    {
        case 1:
            trying.printRomNumber();
            break;
        case 2:
            trying.printDecNumber();
            break;
    }
    return 0;
}