//
//  Quest_3.cpp
//
//  Created by Dean Chong San on 2017-10-28.
//  Copyright © 2017 Dean Chong San. All rights reserved.
//

#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

array <int, 50> willSaveAllNumbers;
void askUserToEnterNumbers();
void selectionSort();
void displaySortedArray();

//Function which asks the user to enter the 50 numbers
void askUserToEnterNumbers()
{
    cout <<"\nPlease enter 50 integers:"<<endl;
    for (size_t i {0} ; i<=49; i++)
    {
    cin >> willSaveAllNumbers[i];
    }
    
//Then calls in the function which will organize the array
    selectionSort();
}

//Function which will sort the array
void selectionSort()
{
/* Two loops are included so that the two places in an array are sorted are once, then it moves to the next number
 The change will take place only if the number in the next array index is smaller than the current one*/
    int keepItTempor;
    for (size_t start {0} ; start<=49; ++start)
    {
        for (size_t x {0}; x <=49; ++x)
        {
            if( willSaveAllNumbers [x] > willSaveAllNumbers[x + 1])
            {
                keepItTempor = willSaveAllNumbers [x];
                willSaveAllNumbers[x]= willSaveAllNumbers[x+1];
                willSaveAllNumbers [x+1]= keepItTempor;
            }
        }
    }
//When the array is sorted, the function to display it is called
    displaySortedArray();
}

//Function which will display the array which has been sorted
void displaySortedArray()
{
    cout << endl;
    for (size_t x {0}; x <=49; ++x)
    { cout << willSaveAllNumbers[x]<< " ";}
    cout <<endl;
}

int main() {
   
    cout << "SORTING ARRAY\nHello, World!"<<endl;
    askUserToEnterNumbers();
    return 0;
}
