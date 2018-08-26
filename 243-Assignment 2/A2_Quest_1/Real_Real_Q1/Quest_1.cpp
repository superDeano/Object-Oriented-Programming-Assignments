//
//  Quest_1.cpp
//  Real_Real_Q1
//
//  Created by Dean Chong San on 2017-10-13.
//  Copyright © 2017 Super Deano. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

double result;

//The function to find e
double adding_e (double z, int count, int total)
{
//if the function hits the amount inputted by the user it stops and returns this
    if (count == total)
        return (2*z);
//when the function begins, it starts with this
    else if (count == 0)
        return (2 + 1/ adding_e(z, ++count, total));
//for the rest of the numbers, the function is recalled until the count reaches the value which the user has inputted
    else
//The function does this calculation for every integer until it reaches the integer inputted by the user and then adds all the results 
        return ( z +( z / (adding_e((++z), ++count, total))));
}

int main(){

    double x;
//Title of the program
    cout << "FINDING e"<<endl;
//Asking the user to
    cout << "\nPlease enter a number to calculate e" << endl;
//Brings in the value from the user which will determine the amount of time the function will repeat itself
    cin >> x;
//Inputs the value given by the user in the function
    result = adding_e( 1 ,0, x ) ;
    
//Displays the value of e with 15 decimal places
    cout <<setprecision (15)<< result << endl;
    return 96;
     }

