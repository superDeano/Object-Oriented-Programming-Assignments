//
//  Quest_4.cpp
//
//  Created by Dean Chong San on 2017-10-28.
//  Copyright © 2017 Dean Chong San. All rights reserved.
//

#include <iostream>
#include <array>
#include<cstdlib>
#include<ctime>
using namespace std;
const size_t row {3} , column {3};

array<array<int, column>, row> superSquare;

int counting{0};


void fillBoard();
void findMagicNumb(array<array<int,row>,column>);
void showBoard();
int showitManTest(array<array<int,row>,column>);
void isMagic(array<array<int,row>,column>, int);
void userEnters();
void launchingTheProg(int);


//Function which fills the array with numbers between 1 to 9 randomly
void fillBoard()
{
    srand(time(0));
    array<int, 9>keepingTrack {0,0,0,0,0,0,0,0,0};
    int keepIt, checking{0};
    bool isItThere{true};
    
    for (size_t x {0}; x<=2 ; ++x)
    {
        for (size_t y {0}; y <= 2; ++y)
        {
            while (isItThere==true)
            {
                keepIt = rand()% (10-1)+1;
         
                for (size_t z {0}; z <keepingTrack.size();++z)
                {
                    if(keepIt==keepingTrack[z])
                    {
                        isItThere = true;
                        break;
                    }
                    else
                        isItThere = false;
                }
            }
    keepingTrack[checking]=keepIt;
    superSquare[x][y]= keepIt;
    isItThere = true;
    ++checking;
        }
    }
    
findMagicNumb(superSquare);
}

//Function which shows the array
int showitManTest(array<array<int,row>,column> b)
{
    cout << b [0][0]<< " "<< b [0][1]<< " "<< b [0][2]<< " "<<endl;
    
    cout << b [1][0]<< " "<< b [1][1]<< " "<< b [1][2]<< " "<<endl;
    
    cout << b [2][0]<< " "<< b [2][1]<< " "<< b [2][2]<< " "<<endl;
    
    cout << "\nThe number of time(s) a magic square occured is "<< counting<<endl;
    return counting;
}

//Function which calculates the magic number
void findMagicNumb(array<array<int,row>,column> superSquare)
{
    int magicNumber{0};
    for (size_t x {0}; x<=2 ; ++x)
    {
        for (size_t y {0}; y <= 2; ++y)
        {
            magicNumber += superSquare [x][y];
        }
    }
    magicNumber/=3;
    isMagic(superSquare, magicNumber);
}

//Function which checks if the square is magic
void isMagic(array<array<int,3>, 3>superSquare, int magicNumber)
{
    int sumCol1, sumCol2, sumCol3, sumRow1, sumRow2, sumRow3, sumDia1, sumDia2;
    
    sumCol1 = superSquare[0][0] + superSquare[1][0] + superSquare[2][0];
    sumCol2 = superSquare[0][1] + superSquare[1][1] + superSquare[2][1];
    sumCol3 = superSquare[0][2] + superSquare[1][2] + superSquare[2][2];
    
    sumRow1 = superSquare[0][0] + superSquare[0][1] + superSquare[0][2];
    sumRow2 = superSquare[1][0] + superSquare[1][1] + superSquare[1][2];
    sumRow3 = superSquare[2][0] + superSquare[2][1] + superSquare[2][2];
    
    sumDia1 = superSquare[0][0] + superSquare[1][1] + superSquare[2][2];
    sumDia2 = superSquare[0][2] + superSquare[1][1] + superSquare[2][0];
    
    if (sumCol1 == sumCol2 == sumCol3 == sumDia1 == sumDia2 == sumRow1 == sumRow2 == sumRow3 == magicNumber)
    {
        counting +=1;
        showitManTest(superSquare);
    }
    else
    {
        fillBoard();
    }
}

//Function which asks the user to enter the number of times
void userEnters()
{
    int howManyTimes;
    cout << "\nPlease enter the number of times"<<endl;
    cin >> howManyTimes;
    launchingTheProg(howManyTimes);
}

//Function which determines the amount of time the magical square will be generated
void launchingTheProg(int howManyTimes)
{
    for (int i = 0; i <= howManyTimes; ++i)
    {
        fillBoard();
    }
}




int main()
{
   cout << "Hello, World!\n"<<endl;
   userEnters();
    return 0;
}
