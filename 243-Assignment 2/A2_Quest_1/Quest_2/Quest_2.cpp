//
//  Quest_2.cpp
//  Quest_2
//
//  Created by Dean Chong San on 2017-10-15.
//  Copyright © 2017 Super Deano. All rights reserved.
//

#include <iostream>
using namespace std;

//These are my variables which will be used to count the number of apartments
int amountAparts, amountApartsRented, amountApartsUnRented, aparttobe;
//These are mainly the financial variables
double baseRent, maintananceRented, maintananceUnRented, rentIncrease, profits, maxProfits;


//This functions will ask the user to input the value for each variable and do the necessary calculations
double findingProfit ( double profit)
{
//Title of the program
    cout << "PROFIT CALCULATOR" << endl;
//Asking the user to enter an amount and storing that amount
    cout << "\nPlease enter the total amount of apartments that you own:"<< endl;
    cin >> amountAparts;
    cout << "\nPlease enter the base rent for each apartment ($)" << endl;
    cin >> baseRent;
    cout << "\nPlease enter the cost of maintanance for each rented apartment ($)" << endl;
    cin >> maintananceRented;
    cout << "\nPlease enter the cost of maintance for each unrented apartment ($)" << endl;
    cin >> maintananceUnRented;
    cout << "\nPlease enter the rent increase per apartment unit ($)" << endl;
    cin >> rentIncrease;
    
//Using a for loop to calculate for which amount of rented apartments will the user obtain the maximum profits
    for ( amountApartsUnRented = 0; amountApartsUnRented <= amountAparts; ++amountApartsUnRented )
    {
//Get the amount of apartment not rented for each turn of the loop
        amountApartsRented = amountAparts - amountApartsUnRented;
//Calculate the profits then for each turn for a particular amount of apartment rented and not rented
        profits = ( (amountApartsRented * baseRent) + (rentIncrease * amountApartsUnRented) - (amountApartsRented * maintananceRented) - (amountApartsUnRented * maintananceUnRented));
     
//While in the loop, whenever the maximum profit is achieved, it is recorded, as well as the amount of rented apartments required to achieve the maximum profit
    if ( profits >= maxProfits  )
        {
        maxProfits = profits;
        aparttobe = amountApartsRented;
        }
    }
    
//The end of the function findinqProfit returns the value 0.0
    return 0.0;
}


//This is the main function in all its glory!!!
int main()
    {
    
//The function findingProfit is then activated
    findingProfit( profits );
        
//The resulting maximum profit and the required amount of apartments to be rented is then displayed to the user
    cout << "\nThe amount of maximum profit is " << maxProfits << "$\n" << endl << "Then, " << aparttobe << " apartments are to be rented to obtain this profit.\n" << endl;
   

    return 96;
        
    }
