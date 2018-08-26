//
//  Quest_6.cpp
//  Q_6
//
//  Created by Dean Chong San on 2017-09-30.
//  Copyright © 2017 Super Deano. All rights reserved.
//


//Includes the iostream library
#include <iostream>

//Allows to not always have to use std
using namespace std;

//The main function
int main()
{
    
//Naming and creating the different variables
double pi = 0.0;
    
//long long for bigger int values
long long i, n;
    
    
//Asks user to enter the value of n
    cout << "Enter the value of n: ";
    
//Stores the value of n
    cin >> n;
    cout << endl;
  
//Checks the amount that the user inputs, because int has a maximum value it can hold
   while ( n > 99999999)
   {
       
//This ask the user to enter a smaller value if the initial value is too big
       cout << "Enter the value of n: ";
       cin >> n;
       cout << endl;
   }
    
    
//Value entered is now use to dictate the amount of loops
    for ( i = 0; i < n; i++ )
    
    {
       
        
//Checks whether the i is even or odd
    if ( i % 2 == 0)
    
//i is added to pi if it is even
        pi += 1.0 /(2.0 * i + 1.0);

    else
        
//i is substracted from pi if it is odd
        pi -= 1.0 / (2.0 * i +1.0);
     
        
//The end of the loop after n times
    }
    
//The end result of pi is multiplied by 4 to get the real result of pi
    pi = pi * 4;
    
 
//Displays the value of pi
    cout << endl << "pi = " << pi << endl;
    
    return 0;
}



// The main error here was with the fact that the variable was in double and so the calculations had to be made with double numbers etc!
