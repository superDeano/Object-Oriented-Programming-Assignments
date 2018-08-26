//
// Created by Dean Chong San on 2017-11-11.
//

//Inclusion of the Header file roman.h
#include "roman.h"
#include <iostream>
#include <string>

using namespace std;

//The constructor, and declaring the variable number decimal to be 0
roman::roman()
{

   unsigned int numberDec{0};
    numberInRoman;
}


//The member function which gets the roman number in string and stores it in a private data variable
void roman::setRomNumber(string n)
{
    numberInRoman = n;
    convertNumber();
}


/*The member function which converts the number from roman numeral to Decimal.
 * It uses a loop to check each character of the string to convert the value in Decimal.
 * Since the order matters for Roman Numeral, there is a variable which checks whats the value before and adjusts its decimal counterpart
 * so that the correct value is obtained in decimal*/
void roman::convertNumber()
{
    int keepingTrack{0};

for (int i {0};i < numberInRoman.size(); ++i)
    {


        switch (numberInRoman[i])
        {
            case 'I':
                numberDec += 1;
                if(keepingTrack<1)
                {
                    numberDec-= 2*keepingTrack;
                }
                keepingTrack =1;
                break;
            case 'V':
                numberDec += 5;
                if (keepingTrack<5)
                {
                    numberDec-= 2*keepingTrack;
                }
                keepingTrack =5;
                break;
            case 'X':
                numberDec += 10;
                if (keepingTrack<10)
                {
                    numberDec-= 2*keepingTrack;
                }
                keepingTrack = 10;
                break;
            case 'L':
                numberDec += 50;
                if (keepingTrack<50)
                {
                    numberDec -= 2*keepingTrack;
                }
                keepingTrack = 50;
                break;
            case 'C':
                numberDec += 100;
                if (keepingTrack<100)
                {
                    numberDec-=2*keepingTrack;
                }
                keepingTrack = 100;
                break;
            case 'D':
                numberDec += 500;
                if (keepingTrack<500)
                {
                    numberDec -= 2* keepingTrack;
                }
                keepingTrack = 500;
                break;
            case 'M':
                numberDec += 1000;
                if (keepingTrack<1000)
                {
                    numberDec -= 2*keepingTrack;
                }
                keepingTrack = 1000;
                break;
        }

    }
}


//The member function which prints the number in Roman Numeral
void roman::printRomNumber()
{
    cout << "\nThe Roman number is "<<numberInRoman<<endl;
}


//The member function which prints the number in decimal format
void roman::printDecNumber() {
    cout <<"\nThe Number is "<<numberDec<<endl;
}