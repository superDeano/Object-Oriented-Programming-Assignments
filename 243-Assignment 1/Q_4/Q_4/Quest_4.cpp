// Quest_4.cpp
//  Q_4
//
//  Created by Dean Chong San on 2017-09-30.
//  Copyright © 2017 Super Deano. All rights reserved.
//


//Includes the library iostream
#include <iostream>

// Allows me not to always write std
using namespace std;

//The main function
int main() {
    
//The creation of variables
    int x, remainder;
    
    
//Ask the user to enter a number
    cout << "Try to enter a number"<< endl;
    
//Stores the number entered in x
    cin >> x;
    
    
//Checks if the number if negative. if it is, user has to enter a positive number
    while  (x < 0 )
        
//Ask the user to enter a positive number
    { cout << "Try to enter a positive number"<< endl;
        
//Stores the number in x
    cin >> x;
}
    

//The remainder of the division is obtained
    remainder = x % 5;
    
    
//if the remainder of the division is 0 displays "is a multiple .. "
    if (remainder == 0)
    {
        cout << "\nThe number "<< x << " is multiple of five";
    }
    
// if remainder is not 0, then displays "is not a multiple..."
    else
        cout << "\nThe number " << x << " is not a multiple of five\n"<< endl;
    
    //The end :P
    return 0;
}
