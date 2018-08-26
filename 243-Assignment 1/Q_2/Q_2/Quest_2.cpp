//  Quest_2.cpp
//  Q_2
//
//  Created by Dean Chong San on 2017-09-30.
//  Copyright © 2017 Super Deano. All rights reserved.
//


//Will include the library iostream
#include <iostream>

//This enable us to not write std everytime
using namespace std;

//The main function
int main() {
    
//These are the variables to be used, all assigned to be 0 to begin
    int number1, number2, sum, prod, diff = 0;
    
//Asks the user to enter two numbers
    cout << "***************************************************"<<endl;
    cout << "\nHello! Please insert 2 numbers" << endl;
    
//The first number is stored in the variable number1
    cin >> number1;
    
//Stores the second number in number2
    cin>> number2;
    
//Does the sum of the two entered numbers
    sum = number1 + number2;
    
//Does the product of the two entered numbers
    prod = number1 * number2;
    
//Substracts the first number from the second number
    diff = number1 - number2;
    
//Displays a message and the results
    cout << "\n***************************************************"<<endl;
    cout<< "\nThe results are:" <<
    "\n" <<
    "\n" << "The sum of the two numbers is " << sum << "\n \n"<<
    "Their product is " << prod << "\n \n"<<
    "And finally, the difference is " << diff<< endl;
    
    cout << "\n***************************************************\n"<< endl;
    return 0;
}


