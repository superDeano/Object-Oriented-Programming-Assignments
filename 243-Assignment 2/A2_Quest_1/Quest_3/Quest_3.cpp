//
//  Quest.cpp
//  Quest_3
//
//  Created by Dean Chong San on 2017-10-15.
//  Copyright © 2017 Super Deano. All rights reserved.
//

#include <iostream>
using namespace std;
//These are my variables
 int first, adder, total, totaldishes, y, check;


int main() {
    //Title of the program
    cout << "DISH COUNTER"<< endl;
//Asking the user to enter the required variables and storing them
    cout << "\nPlease enter the time required to make the first dish" << endl;
    cin >> first;
  
//If the user enters a negative number for time he'll use to make the first dish, he'll have to try again because he cannot have a negative time
    while ( first <= 0 )
    {
    cout << "Please enter the time required to make the first dish" << endl;
    cin >> first;
    }

//Asking the user how much longer will the next dishes be
    cout << "\nPlease enter how much longer it will take to make the next dish" << endl;
    cin >> adder;

//User has to enter the total amount of time he has to make the dishes
    cout << "\nPlease enter the total amount of time you have" << endl;
    cin >> total;
    
//While loop to check for if the answer is less than 0 because a negative time doesn't make any sense
    while ( total < 0)
    {
    cout << "\nPlease enter the total amount of time you have" << endl;
    cin >> total;
    }
    
//Using a loop to add the amount of minutes for each dish
    while ( y <= total )
    {
//checks if the time added is greater or equal to the total time then the variable check is equal to what the count
        if (y <= total)
        {
            check = totaldishes ;
        }
//y keeps track of the addition of the time
        y += first;
        first = ( first + adder );
//every time the loop is run, that means that another dish can be cooked
         totaldishes += 1;
    }
    
//Display how much dishes the user can cook in the total amount of time he gave
    cout << "\nYou can cook " << check << " dishes in " << total << " minutes"<< endl;
    
    return 96;
            }
