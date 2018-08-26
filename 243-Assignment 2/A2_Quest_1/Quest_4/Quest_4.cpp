//
//  Quest_4.cpp
//  Quest_4
//
//  Created by Dean Chong San on 2017-10-15.
//  Copyright © 2017 Super Deano. All rights reserved.
//

#include <iostream>
using namespace std;

//The recursive function to find GCD
int findinggcd ( int x, int y)
{
//Basically checks if x is negative, then makes it become positive
    if (x < 0)
        x*= -1;
//Checks if y is negative and makes it become positive
    if (y < 0)
        y*=-1;
//The base case, if the two numbers are equal then the function gives back one of the number as the GCD
    if ( x == y)
    {
        return x;
    }
//If the first number is bigger than the second number then function does x - y repeatively
    else if (x > y)
    {
        return findinggcd(x - y , y);
    }
//Just else because the other conditions have been covered
    else
    {
//Meaning if the second number is bigger than the first then the function does y - x repeatively
        return findinggcd( x, y -x );
    }
}

int main ()
{
    int x, y;
//Title of the program
    cout << "FINDING GCD"
//Asks the user to enter the two numbers and stores them
    cout << "\nPlease enter two numbers"<< endl;
    cin >> x >> y;
//Plugs in the two numbers into the recursive function and stores the value in the variable integer
    int result = findinggcd(x, y);
//Then prints the result from the variable result
    cout << "\nThe GCD is " << result << endl;
    
    return 96;
}
