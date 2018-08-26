//
//  A2_Q1.cpp
//  A2_Quest_1
//
//  Created by Dean Chong San on 2017-10-06.
//  Copyright © 2017 Super Deano. All rights reserved.
//

#include <iostream>
using namespace std;
double x, y;
int opt;
double addition (double x, double y )
{
    x = x + y;
    cout << "The result of the addition is "<< x<< endl ;
    return (0.0);
}
double substraction (double x, double y )
{
    x = x - y;
    cout << "The result of the substraction is "<<x<< endl ;
    return (0.0);
}
double multiplication (double x, double y )
{
    x = x*y;
    cout <<"The result of the multiplication is "<< x<< endl ;
    return (0.0);
}
double division (double x, double y )
{
    x = x/y;
    cout <<"The result of the division is "<< x<< endl ;
    return (0.0);
}
int main() {

    
    cout << "Please enter a number to choose one of the following options only \n1 - Addition \n2 - Substraction\n3 - Multiplication\n4 - Division"<<endl;
    cin >> opt;
   
    while ( opt >4 || opt < 1)
    {
        cout << "Please enter a number to choose one of the following options \n1 - Addition \n2 - Substraction\n3 - Multiplication\n4 - Division"<< endl;
        cin >> opt;
    }
    cout << "Enter the two numbers"<<endl;
    cin >> x >> y;
    
    if (opt == 1)
    {
        addition (  x, y);
        
    }
    else if (opt == 2)
        
    {substraction (x, y);
        
    }
    
    else if (opt == 3){
        multiplication (x , y);
    }
    else
    { division (x, y);
        
    }
    return 0;
}
