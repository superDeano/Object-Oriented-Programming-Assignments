//
// Created by Dean Chong San on 2017-11-11.
//
/*This is the interface for the class roman*/

//Inclusion of the file string to be able to use the string variable as prototype
#include <string>

using namespace std;

//The Class
class roman
{

private:
    //The private the variables
    unsigned int numberDec;
    string numberInRoman;

public:
    //The function members, with the first one being the constructor
    roman();
    //Member function to change the value of the variable numberInRoman
   void setRomNumber(string);
    //Member function to convert from roman numeral to decimal
    void convertNumber();
    //Member function to print number in Roman Numeral
    void printRomNumber();
    //Member function to print number in Decimal format
    void printDecNumber();
};