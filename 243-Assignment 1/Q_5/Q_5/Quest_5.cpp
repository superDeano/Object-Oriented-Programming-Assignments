//
//  Quest_5.cpp
//  Q_5
//
//  Created by Dean Chong San on 2017-09-30.
//  Copyright © 2017 Super Deano. All rights reserved.
//



//includes the library iostream
#include <iostream>

//Allows to not have to always use std
using namespace std;

//The main function
int main()

{
    
//The main variable salary
    int salary;
    
    
//Ask the user to enter the amount he gets per year
    cout << "Enter your annual salary to know the amount of federal tax you will pay."<< endl;
    
//Stores the amount entered in salary
    cin >> salary;
    
    
//Checks whether salary is smaller than 45 grant
    if (salary < 45000)
  
//Calculate the federal taxes for his salary
    {  salary = salary * 0.06;
  
//Displays the taxes user will pay
    cout << "\nYour taxes will be equal to " << salary << " $" << endl;
    }
    
//Checks if salary is between 45 and 75 grant included
    else if ( salary >= (45000) || salary <= 75000)
    
    {
    
//Calculating the federal taxes
        salary = salary * 0.10;
 
//Displayes the taxes user will pay
    cout << "\nYour taxes will be equal to " << salary << " $" << endl;
    }
    
//Checks if salary is more than 75 grant
    else if ( salary > 75000)
    
//Calculating the taxes
    { salary = salary * 0.12;
 
//Displays taxes to be paid by the user to the user
        cout << "\nYour taxes will be equal to " << salary << " $" <<endl;
    }
    
//End
    return 0;
}
