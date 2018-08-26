//
//  Quest_3.cpp
//  Created by Dean Chong San on 2017-09-30.
//  Copyright © 2017 Super Deano. All rights reserved.
//

//Includes the iostream library
#include <iostream>

//enables us to not write std everytime
using namespace std;

int main () {
    
//The variables are created
    double m1, m2, d, g, f;
    
//The two masses, distance are assigned to 0 while g is assinged to the g value
    m1 = d = m2 = 0;
    g = 6.67*10e-11;
    
    
//Says hi and ask the user to enter the first mass
    cout << "Hi, Today we will try to discover Newton's Universal law of gravity! \n\nPlease enter the first mass in Kg to begin!\n";
   
//Stores the first mass
    cin >> m1;
    
//Ask the user to enter the second mass
    cout << "\nGreat now enter the second mass in Kilogram please!"<<endl;
    
//Stores the second mass
    cin >> m2;
    
//Ask the user to enter the distance
    cout << "\nFinally enter the distance in meters between them!"<<endl;
    
//Stores the distance
    cin>> d;

    
//Calculates the force of gravity from the data entered by the user
    f = (((m1 * m2)/( d*d))*g);
    
//Prints out the result
    cout << "\nThe force of gravity between the two masses is "<< f << " N.\n"<<endl;
    
    return 0;
}




