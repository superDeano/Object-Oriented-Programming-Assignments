//
// Created by Dean Chong San on 2017-11-12.
//

#include "Time1.h"
#include <iostream>
#include <iomanip>

using namespace std;

//The constructor; also sets the time variables to 0
Time1 :: Time1 ()
{
    int hour {0}, minute{0}, second {0};
}

//Member Function which will change the time only if it makes sense
void Time1::setTime(int h, int m, int s)
{
    hour = (h >=0 && h < 24)? h:0;
    minute = (m >= 0 && m <60)? m : 0;
    second = (s>=0 && s<60)? s : 0;
}

//Member Function which prints the time in universal format
void Time1::printUniversal()
{
    cout << setfill('0')<<setw(2)<<hour<< ":"<<setw(2)<<minute<<":" <<setw(2)<<second<<endl;
}

//Member Function which prints the time in standard format
void Time1::printStandard() {
    cout << ((hour ==0 || hour == 12)?12 : hour %12)<<":"<<setfill('0')<<setw(2)<< minute<<":"<<setw(2)<<second << (hour<12?" AM":" PM")<<endl;
}

//Member Function which increments the time in standard format
void Time1::tickTimeStandard()
{
    second+=1;

    if (second > 59)
    {
        minute += 1;
        second = second % 60;
    }
    if (minute>59)
    {
        hour += 1;
        minute = minute%60;
    }
    if (hour > 23)
    {
        second +=1;
        hour = hour%24;
    }

}

//Member Function which increments the time in Universal format
void Time1::tickTimeUni()
{
    second+=1;

    if (second > 59)
    {
        minute += 1;
        second = second % 60;
    }
    if (minute>59)
    {
        hour += 1;
        minute = minute%60;
    }
    if (hour > 23)
    {
        second +=1;
        hour = hour%24;
    }

}