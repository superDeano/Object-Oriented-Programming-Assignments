//
//  main.cpp
//  Quest_5
//
//  Created by Dean Chong San on 2017-10-16.
//  Copyright © 2017 Super Deano. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

//Prototypes of the different functions used
int convertto24hmorning (int);
int convertto24hafternoon (int);
int convertto12h (int, int);
void gettimein24h();
void gettimein12h();
int transfertime (int,int);
void displaytimein12h (int, int);
void displaytimein24hmorning (int, int);
void displaytimein24hafternoon (int, int);

//Function to obtain the time from the user in the 12 Hour format
void gettimein12h ()
{
int enter112h, enter212h, checktimezone;
    
//Asks the user to specify whether the time to be input in the 12 Hour format is the morning or the afternoon
        cout << "Please choose one of the following options\n1 - The morning\n2 - The afternoon"<<endl;
        cin >> checktimezone;
    
//Making sure that the user enters only a value between 1 and 2
    while (checktimezone >2 ||checktimezone<1)
    {
        cout << "Please choose one of the following options\n1 - The morning\n2 - The afternoon"<<endl;
        cin >> checktimezone;
    }

//Decide how to change the time into 24H based on whether the time is in the morning or afternoon
    switch (checktimezone)
    {
        case 1 : {
        cout << "Please enter the time in 12H"<<endl;
        cin >> enter112h >> enter212h;

//Checks if the user entered the minutes greater than 60, the right amount of the hours and asks him to enter a correct time
    while (enter212h >= 60)
        {
        cout << "Please enter the time correctly in 12H"<<endl;
        cin >> enter112h >> enter212h;
        }
//Now calling this function to display the time
        displaytimein24hmorning(enter112h, enter212h);
                  }
            break;
            
//We are here if the time is in the afternoon
        case 2 :{
            cout << "Please enter the time in 12H"<< endl;
            cin >> enter112h >> enter212h;
    
//Checks that the user enters only a correct format for the time in 12Hour format
            while (enter212h >= 60||enter112h >12)
            {
            cout << "Please enter the time correctly in 12H"<< endl;
            cin >> enter112h >> enter212h;
            }
//Now calling this function to display the time
    displaytimein24hafternoon(enter112h, enter212h);
                }
            break;
    }
}

//This function provides the user with the options of how to convert the time
void choosesomething ()
{
    short x;
//User has to chose between of the 2 options in order to convert his time
        cout << "\nPlease choose one of the following options\n1 - convert time from 12H to 24H\n2 - convert time from 24H to 12H"<< endl;
        cin >> x;
//Makes sure that the user only inputs values between 1 and 2
    while (x < 1||x > 2)
        {
        cout << "\nPlease choose one of the following options\n1 - convert time from 12H to 24H\n2 - convert time from 24H to 12H"<<endl;
        cin >> x;
        }
//Depending on what the user has chosen, the right function will be called
    switch (x)
    {
        case 1 : gettimein12h();
            break;
        case 2 : gettimein24h();
            break;
    }
    
}

//Function which takes in the time in 24H format from the user
void gettimein24h()
{
    int enter124h , enter224h;
        cout << "Please enter the time in 24H"<<endl;
        cin >> enter124h >> enter224h;
    
//Making sure the user enters a correct time in the 24 H format
    while (enter124h > 24||enter224h >= 60)
        {
        cout << "Please enter the time correctly in 24H"<<endl;
        cin >> enter124h >> enter224h;
        }
//Now calling this function to display the time
    displaytimein12h(enter124h, enter224h);
}

//Function to display the time in 12H
void displaytimein12h (int enter124h, int enter224h)
{
//Checks if time the hour is bigger than 12 then the time is in the afternoon
    if (enter124h > 12)
    {
//since the time is the afternoon, the right time in 12H in computed in the function below
        int newtime3 = convertto12h(enter124h, enter224h);
        
//Displays the correct converted time in 12 Hour format with PM to indicate that it is the afternoon
        cout << "\nThe time is then " << newtime3 << ":"<< setfill ('0') <<setw (2)<< enter224h <<" PM"<<endl;
    }
    else if ( enter124h == 12)
        cout << "\nThe time is then " << enter124h <<":"<< setfill ('0') <<setw (2)<< enter224h<< " PM"<<endl;
    else
//Since the time is less or equal to 12 then the time is already in the 12H formart for the morning then the time can be displayed with AM
        cout << "\nThe time is then " << enter124h << ":"<< setfill ('0') <<setw (2)<< enter224h <<" AM"<<endl;
}

//Function which will transform the afternoon time from 12H to 24H format
int convertto24hafternoon ( int x)
{
    return  x += 12;
}

//Function which converts the afternoon time from 24H to 12H format
int convertto12h ( int x, int y)
{
    return x -= 12;
}

//Function which takes the time in the morning in 12h format and displays it in 24h format
void displaytimein24hmorning (int enter112h, int enter212h)
{
    //Since the time is already in the morning then the correct time can already be displayed to the user
    cout << "\nThe time in 24H is then " << enter112h << ":"<< setfill ('0') <<setw (2)<< enter212h <<endl;
}

//function which takes the time in afternoon in 12h format and displays it tot the 24h format
void displaytimein24hafternoon (int enter112h, int enter212h)
{
    //Since the user's time is in the afternoon, the correct time will be computed in the function below
    int newtime2 = convertto24hafternoon(enter112h);
    
    //Then display the time which has been converted into 24 H from the function
    cout << "\nThe time in 24H then is " << newtime2 << ":"<< setfill ('0') <<setw (2)<< enter212h << endl;
}

//The main function
int main()
{
        cout << "TIME CONVERTER\n\n\nHello, Dear user!"<<endl;
//Start with the function asking the user which format to convert to which format
        choosesomething ();
    return 96;
}
