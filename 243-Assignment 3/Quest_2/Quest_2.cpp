//
//  Quest_2.cpp
//
//  Created by Dean Chong San on 2017-10-26.
//  Copyright © 2017 Dean Chong San. All rights reserved.
//

#include <iostream>
#include <array>
#include <math.h>
#include <iomanip>
using namespace std;

//Global array to store the data
array<int , 10> catchAllNumbers{0,0,0,0,0,0,0,0,0,0};

//Function Prototypes
void firstMenu();
void userEnterNumber();
void doubleTheNumber1();
void squareRootTheNumber2();
void raisingTheNumber3();
void separatingTheDigits();
void displayingEachDigitReverse();
void summingTheDigits();
int finiLeProg();

//Function which displays a number of choices for the user to enter
void firstMenu()
{
    short usersChoice;
    cout <<"\nBelow are some options that can be done with your number, choose one to continue\n\n0 - Enter a New Number\n1 - Double The Number\n2 - Square Root The Number\n3 - Raise The Number To a Power of your Choice\n4 - Display The Number in Reverse\n5 - Add All The Digits Of The Number\n6 - Terminate the Program"<<endl;
    cin >> usersChoice;

//While loop which checks that the users only enters values from 0 to 5
    while (usersChoice<0 ||usersChoice>6)
    {
    cout <<"\nBelow are some options that can be done with your number, choose one to continue\n\n0 - Enter a New Number\n1 - Double The Number\n2 - Square Root The Number\n3 - Raise The Number To a Power of your Choice\n4 - Display The Number in Reverse\n5 - Add All The Digits Of The Number\n6 - Terminate the Program"<<endl;
    cin >> usersChoice;
    }

//Based on what the user has chosen the correct function will be called
    switch (usersChoice)
    {
        case 0 : userEnterNumber();
    break;
        case 1 : doubleTheNumber1();
    break;
        case 2 : squareRootTheNumber2();
    break;
        case 3 : raisingTheNumber3();
    break;
        case 4  : displayingEachDigitReverse();
    break;
        case 5 : summingTheDigits();
    break;
        default: finiLeProg();
    break;
    }
}

//Function which allows the user to enter the number
void userEnterNumber()
{
    int saveTheNumber;
    cout <<"\nPlease enter a number between 10 and 999"<<endl;
    cin >>saveTheNumber;
    while (saveTheNumber <10||saveTheNumber>999)
    {
        cout <<"\nPlease enter a number between 10 and 999"<<endl;
        cin >>saveTheNumber;
    }
    catchAllNumbers [0] = saveTheNumber;

/*After the number was entered and saved in the array, it is checked whether it is a prime number
 The bool variable is returned false if when divided by some numbers the remainder is 0
 A prime number can only return a reminder of 0 when divided by itself and not the other prime number
 If the number is prime, then the program displays that it is*/
    bool checkForPrime;
    for(int i = 3; i <= saveTheNumber; i++)
    {
        checkForPrime = true;
        for(int n = 2; n <= i - 1; n++)
        {
            if(i % n == 0)
            {checkForPrime = false;}
        }
    }
    if(checkForPrime){
        cout<<"True, " << catchAllNumbers[0] << " is a prime number!" << endl;}
    
//The function to separate the digits of the number is then called
    separatingTheDigits();
}

//Function which separates the number into individual digits
void separatingTheDigits()
{ int holdingIt;

//If the number is two digits, then only two spaces are required to save the digits
    if (catchAllNumbers[0]<=99)
    {
        catchAllNumbers[6]=catchAllNumbers[0]%10;
        holdingIt = catchAllNumbers[0]/10;
        catchAllNumbers[7]= holdingIt%10;
    }
//If the number is three digits, three spaces are required to save the digits
    else
    {
        holdingIt = catchAllNumbers[0]/10;
        catchAllNumbers[6]=catchAllNumbers[0]%10;
        catchAllNumbers[7]=holdingIt%10;
        holdingIt = holdingIt/10;
        catchAllNumbers[8]=holdingIt%10;
    }
//Calling the function menu to enable the user to do something else
    firstMenu();
}


//Function which doubles and displays the number
void doubleTheNumber1()
{
    catchAllNumbers[1] = 2* catchAllNumbers[0];
    cout << "\nThe number doubled is "<< catchAllNumbers[1]<< endl;
//Calling the function menu to enable the user to do something else
    firstMenu();
}

//Function which gives and displays the square root of the number the user input
void squareRootTheNumber2()
{ double justToDisplay;
    justToDisplay = sqrt(catchAllNumbers[0]);
    cout << "\nThe square root the number is "<< setprecision(3) <<justToDisplay<<endl;
//Calling the function menu to enable the user to do something else
    firstMenu();
}

//Function which will take the number to the power of what the user choses
void raisingTheNumber3()
{
//Asks the user to choose which power to be raised
    short powerToBeRaised;
    cout <<"\nChoose between 2, 3 and 4 to raise the power of the number"<<endl;
    cin >> powerToBeRaised;
//Makes sure user only enters a number between 2 and 4
    while (powerToBeRaised<2||powerToBeRaised>4)
    {
        cout <<"\nChoose between 2, 3 and 4 to raise the power of the number"<<endl;
        cin >> powerToBeRaised;
    }
    catchAllNumbers[3] = pow (catchAllNumbers[0], powerToBeRaised);
    cout << "\nThe number raised to the power of " << powerToBeRaised << " is "<<catchAllNumbers[3]<<endl;
//Calling the function menu to enable the user to do something else
    firstMenu();
}

//Function Which will display the number in the reverse order
void displayingEachDigitReverse()
{
    if (catchAllNumbers[0]<=9)
        cout << "\nThe number reversed is "<< catchAllNumbers[0]<<endl;
   else if(catchAllNumbers[0]<= 99)
        cout << "\nThe number reversed is "<< catchAllNumbers [6]<<catchAllNumbers[7]<<endl;
    else
        cout << "\nThe number reversed is "<< catchAllNumbers [6]<<catchAllNumbers[7]<<catchAllNumbers[8]<<endl;
//Calling the function menu to enable the user to do something else
    firstMenu();
}

//Function which add all the digits of the number and displays the result
void summingTheDigits()
{
    catchAllNumbers[9] = (catchAllNumbers[6]+catchAllNumbers[7]+catchAllNumbers[8]);
    cout <<"\nThe summation of all the digits is "<< catchAllNumbers[9]<< endl;
//Calling the function menu to enable the user to do something else
    firstMenu();
}

//Function which will end the program
int finiLeProg()
{
return 0;
}


int main()
{
    cout << "Number Tricks"<<endl;
    userEnterNumber();
    return 0;
}
