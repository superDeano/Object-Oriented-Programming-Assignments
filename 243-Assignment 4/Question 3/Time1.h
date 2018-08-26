//
// Created by Dean Chong San on 2017-11-12.
//
//The interface for the Class Time1
/*Time1 was chosen so as to prevent any interference*/
class Time1
{
public:
    //The constructor
    Time1();
    //Member Function which sets the time
    void setTime(int, int, int);
    //Member Function which prints the time in universal format
    void printUniversal();
    //Member Function which prints the time in standard format
    void printStandard();
    //Member Function which increments the time in standard format
    void tickTimeStandard();
    //Member Function which increments the time in universal format
    void tickTimeUni();

private:
    //The variables for time: hour, minute, second.
    int hour;
    int minute;
    int second;
};