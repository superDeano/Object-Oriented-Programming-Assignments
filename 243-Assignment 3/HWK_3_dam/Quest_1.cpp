//
//  Quest_1.cpp
//
//  Created by Dean Chong San on 2017-10-25.
//  Copyright © 2017 Dean Chong San. All rights reserved.
//
/*
 The password of the manager is "helloworld"
 */
//Included libaries
#include <iostream>
#include <array>
#include <iomanip>
#include <string>
using namespace std;

//Function Prototypes
void showsInfoAboutClub(array<double, 10> &dataBase);
void chooseWhatToDo(array<double,10> &dataBase);
void verifyManagerToMakeChanges(array<double,10>&Trying);
void changeThePrices(array <double, 10>&dataBase);
void calculateFinalMembershipPrices(array <double, 10>&f);
void calculateRegularPrice(array <double, 10>&r);
void calculatePersoTrain(array <double, 10>&p);
void calculatebootcamp(array <double, 10>&b);
void whatstatusOfPerson(array <double, 10>&dataBase);
void displayFinalPrices(array<double,10> display);


//Displays the different Prices offered by the club
void showsInfoAboutClub(array<double, 10> &dataBase)
{
//Displays prices with an alignment
    cout << "\nWelcome to your Local Fitness club!\n\nThese are the prices:\nRegular" <<setw (30) << dataBase [0]<<" $"<< endl
        << "Personal Training"<< setw (20)<< dataBase [1] <<" $"<<endl
        << "Bootcamp" << setw(29)<< dataBase [2] <<" $"
        <<"\nDiscount for senior members"<< setw(10)<<fixed<<setprecision(2)<<dataBase[4]<<"%"
        <<"\nDiscount for students"<< setw (16)<<fixed<<setprecision(2)<<dataBase[3]<<" %"<<endl;

//Then Calls the functions what to do
chooseWhatToDo(dataBase);
        }

//Function which calculates the amount of regular price the client must pay for the amount of months they choose
void calculateRegularPrice(array<double, 10> &r)
{
    short whattheychose;
            cout << "\nPlease enter the number of months, maximum a year" << endl;
            cin >> whattheychose;
//Makes sure that the person enters only the amount of months they want in a year
    while (whattheychose < 0||whattheychose > 12)
    {
        cout << "\nPlease enter the number of months"<<endl;
        cin >> whattheychose;
    }
//If they choose a full year, they get a 10% discount
    if (whattheychose == 12 )
        {
        r [5] = 0.9 * (whattheychose * r[0]);
        }
//For any other number of months they choose, they do not get the 10% discount
    else
        {
       r [5] = (whattheychose * r[0]);
        }
}

//Function which checks what group of the population the client is: senior, student or neither
void whatstatusOfPerson (array<double, 10> &dataBase)
{
    short theTypeOfPerson;
    cout <<"\nPlease choose if\n1 - The member is part of the senior members\n2 - The member is a student\n3 - The member is neither"<<endl;
    cin >> theTypeOfPerson;
//makes sure the user enters a value between 1 and 3 only
    while (theTypeOfPerson < 1 ||theTypeOfPerson > 3)
    {
    cout <<"\nPlease choose if\n1 - The member is part of the senior members\n2 - The member is a student\n3 - The member is neither"<<endl;
    cin >> theTypeOfPerson;
    }
    
/*Checks the value entered and does the necessary calculations based on what option was chosen
 based on the options which was chosen by the worker, the client will get the right discount or not
 The prices are stored in an array*/
    switch (theTypeOfPerson)
    {
case 1 :
        { dataBase[9] = (dataBase [8]* dataBase [4]);}
    break;
case 2 :
        { dataBase[9] = dataBase [8] * dataBase[3]; }
    break;
default:
        { dataBase[9] = dataBase [8];}
    break;
    }
//Calls the function which will display the final price to the customer
    displayFinalPrices(dataBase);
}

//Function which displays the total the customer needs to pay
void displayFinalPrices(array<double, 10> display)
{
    cout << "\nThe final price to be paid is " << display[9]<< "$"<<endl;
}

//Function which enable the manager to change the prices of the services
void changeThePrices(array<double, 10> &dataBase)
{
//array which stores the name for several variables in the array dataBase
array <string, 5> dataBaseName {"new price for Regular Price","new price for Personal Training","new price for Bootcamp","new discount for students","new discount for senior members" };

//An array which will display the correct symbol for each category when
array<char, 6> symbolFordataBase {'$', '$','$','%','%', '\0'};
double priceChange = 0.0;
size_t i =0;

    cout <<"\nEnter the price for each category. Enter 3663 if you are done changing the prices"<<endl;
/*
 Loop which enables the manager to change prices for each category one by one
 The loop will end if the manager decides he has finished changing the prices by entering 3663 or if the loop reaches the variable in the array dataBase with index 4.
 After each change, the new price change for that particular category and the name of the latter will be displayed
 As soon as the manager has done changing the prices by entering 3663, the program displays "no further changes made" and returns to the menu
 */
    while (priceChange != 3663 && i <= 4)
        {
            size_t x=0;
                cout <<"\nEnter the "<< dataBaseName[i]<<endl;
                cin >> priceChange;
            
        if (priceChange != 3663)
            {
            dataBase[x]= priceChange;
            cout << "\nThe " <<dataBaseName[i]<< " is "<< dataBase[i]<< symbolFordataBase [i] <<endl;
            }
        else
            {
            cout <<"\nNo further changes made" << endl;
            }
    i+=1;
        }
//Once the prices have been changed, the program returns back to the first menu
    showsInfoAboutClub(dataBase);
}

//Function which asks the user to either calculate prices for client or to allow manager to change the prices.
void chooseWhatToDo(array<double, 10> &dataBase)
{
    short x;
    cout << "\nSelect between one of the two options to continue\n1 - Calculate the amount to be paid\n2 - Change the prices"<<endl;
    cin>> x;
//Makes sure the user doesnt enter a number smaller than 1 or a number bigger than 2
    while (x <1 || x> 2)
    {
    cout << "\nSelect between one of the two options to continue\n1 - Calculate the amount to be paid\n2 - Change the prices"<<endl;
    cin>> x;
    }
//Based on what the user has chosen, the specific function will be called
    if (x == 1)
    calculateFinalMembershipPrices(dataBase);
    else if (x == 2)
    verifyManagerToMakeChanges(dataBase);
}

//Function which calculates the price to pay for each session of personal training taken
void calculatePersoTrain(array<double, 10> &p)
{
    int numberOfSessionsPerso;
    cout <<"\nEnter the number of sessions for Personal Training"<<endl;
    cin >> numberOfSessionsPerso;
//Makes sure the user doesnt enter a negative number
    while (numberOfSessionsPerso < 0)
    {
        cout <<"\nEnter the number of sessions for Personal Training"<<endl;
        cin >> numberOfSessionsPerso;
    }
//Calculates the price for the amount of session for personal training and saves it in the dataBase
    p[6]= numberOfSessionsPerso* p[1];
}

//Function which calculates the price to pay for each session of personal training taken
void calculatebootcamp(array<double, 10> &b)
{
    int numberOfSessionsBoot;
    cout <<"\nEnter the number of sessions for Bootcamp"<<endl;
    cin >> numberOfSessionsBoot;
//Makes sure the user doesnt enter a negative number
    while (numberOfSessionsBoot < 0)
    {
        cout <<"\nEnter the number of sessions for Bootcamp"<<endl;
        cin >> numberOfSessionsBoot;
    }
//Calculates the price for the amount of session for personal training and saves it in the dataBase
    b[7]= numberOfSessionsBoot* b[2];
}

//Verifies the manager's password to allow him to modify prices
void verifyManagerToMakeChanges (array<double, 10> &Trying)
{
    
    string managerspassword = "helloworld";
    cout <<"\nPlease enter your Password to begin"<<endl;
    cin >> managerspassword;
//If an incorrect password is entered, the program returns back to the first menu
    if (managerspassword != "helloworld")
    {
    cout <<"\nWrong password, returning back to menu"<<endl;
        showsInfoAboutClub(Trying);
    }
//If the right password is entered then manager can change the prices
    else
    {
        changeThePrices(Trying);
    }
}
//Function which calculates all the prices by calling serval other functions
void calculateFinalMembershipPrices(array<double, 10> &f)
{
    calculateRegularPrice(f);
    calculatePersoTrain(f);
    calculatebootcamp(f);
    f[8]= f[5]+f[6]+f[7];
    whatstatusOfPerson(f);
}
int main() {
    
//array which stores the prices
array<double ,10> dataBase {22, 34, 125, 0.70, 0.75, 0.0,0.0,0.0,0.0,0.0};

//Displays a title for the app
    cout <<"LOCAL FITNESS\n";
    
//Start with this function
    showsInfoAboutClub(dataBase);
    
    return 0;
}
