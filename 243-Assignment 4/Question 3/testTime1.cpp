#include <iostream>
#include "Time1.h"
using namespace std;
//Variable which tells how many times the time should be incremented by one second
unsigned int times;

//Instantiating an object to the class time
Time1 meh;

//Protypes of the functions
void enterThePresentTime();
void enterTimes();
void runTheShow(int);
void chooseHowToDisplay();
int terminator();

int main() {
    //The title
    cout << "Time Testing;" << endl;

    //shows the current time
cout<< "The time is ";
    meh.printUniversal();


    enterThePresentTime();

    return 0;
}

//Function which asks the user how many times the time should be incremented
void enterTimes() {
  cout <<"\nEnter how many times the seconds should be incremented"<<endl;
    cin >> times;
chooseHowToDisplay();
}

//Function which will increment the time based on how many times the user chose and display it accordingly
void runTheShow(int whatTheyChose) {
    switch (whatTheyChose) {
        case 1: {
            for (int i{0}; i < times; ++i) {
                meh.tickTimeStandard();
            }
            meh.printStandard();
            break;
            default: {
                for (int i{0}; i < times; ++i) {
                    meh.tickTimeUni();
                }
                meh.printUniversal();
            }
            break;

        }
    }
enterTimes();
}


//Function which asks the user in which format to display the time
void chooseHowToDisplay() {
    short choice;
    cout <<"\nChoose how to display the time:\n1 - in Standard Format\n2 - in Universal Format\n\n3 - Change the number of seconds to be incremented\n4 - end"<<endl;
    cin >> choice;
    while (choice<1 || choice>3)
    {
        cout <<"\nChoose how to display the time\n1 - in Standard Format\n2 - in Universal Format\n\nChange the number of seconds to be incremented"<<endl;
        cin >> choice;
    }
    if (choice <3)
    runTheShow(choice);
    else if (choice ==3)
        enterTimes();
    else
        terminator();
}


//Function which ends the program
int terminator() {
    return 69;
}

//Function which allows the user to enter a new time
void enterThePresentTime(){
    int hour, minute, second;
    cout<<"\nEnter the time you want"<<endl;
    cin >>hour >> minute >> second;
    meh.setTime(hour, minute, second);
    enterTimes();

}