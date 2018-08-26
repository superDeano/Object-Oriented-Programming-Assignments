#include <iostream>
#include "student.h"
using namespace std;


student s1, s2;
string lastName1, address1,lastName2, address2;

//Function prototypes
void menu();
void modInfoStudent1();
void modInfoStudent2();
void showInfoStud1();
void showInfoStud2();
void showInfoBoth();
void ifRelatives();
void ifNeighbours();
int leTerminateur();

//Function which displays information related to both students
void showInfoBoth() {
    cout<<"\nInformation about Student 1"<<endl;

    s1.returnIdNumber();
    s1.returnFullName();
    s1.returndoB();
    s1.returnAge();
    s1.returnTelephoneNum();
    s1.returnAddress();

    cout<<"\nInformation about Student 2"<<endl;

    s2.returnIdNumber();
    s2.returnFullName();
    s2.returndoB();
    s2.returnAge();
    s2.returnTelephoneNum();
    s2.returnAddress();

    menu();
}



int main() {
    cout << "STUDENTS" << endl;

    modInfoStudent1();

    return 0;
}

//Function which allows user to enter info for first student
void modInfoStudent1(){
    string firstName, dateOfBirth;
    int idNum, areaCodeNum, restTelNum;

    cout <<"\nModify Information for the First Student"<<endl;

    cout <<"\n\nEnter the ID number"<<endl;
    cin >>idNum;
    s1.modifyIdNumber(idNum);

    cout <<"\nEnter the first name"<<endl;
    cin >> firstName;
    s1.modifyFirstName(firstName);

    cout << "\nEnter the last name"<<endl;
    cin >> lastName1;
    s1.modifyLastName(lastName1);

    cout << "\nEnter the Date of Birth YYYY-MM-DD (without Space)"<<endl;
    cin >> dateOfBirth;
    s1.modifydoB(dateOfBirth);

    cout <<"\nEnter the area code for the telephone"<<endl;
    cin >> areaCodeNum;
    cout <<"\nEnter the last 7 digits of the number"<<endl;
    cin >>restTelNum;
    s1.modifyTelephoneNum(areaCodeNum, restTelNum);

    cout <<"\nEnter the address"<<endl;
    cin >> address1;
    s1.modifyAddress(address1);

    modInfoStudent2();
}

//Function which allows user to enter info for second student
void modInfoStudent2(){
    string firstName, dateOfBirth;
    int idNum, areaCodeNum, restTelNum;

    cout << "\nModify Information for the Second Student" << endl;

    cout << "\n\nEnter the ID number" << endl;
    cin >> idNum;
    s2.modifyIdNumber(idNum);

    cout << "\nEnter the first name" << endl;
    cin >> firstName;
    s2.modifyFirstName(firstName);

    cout << "\nEnter the last name" << endl;
    cin >> lastName2;
    s2.modifyLastName(lastName2);

    cout << "\nEnter the Date of Birth YYYY-MM-DD (without Space)" << endl;
    cin >> dateOfBirth;
    s2.modifydoB(dateOfBirth);

    cout << "\nEnter the area code for the telephone" << endl;
    cin >> areaCodeNum;
    cout << "\nEnter the last 7 digits of the number" << endl;
    cin >> restTelNum;
    s2.modifyTelephoneNum(areaCodeNum, restTelNum);

    cout << "\nEnter the address" << endl;
    cin >> address2;
    s2.modifyAddress(address2);
    menu();
}

//Function which shows information for student 1 only
void showInfoStud1(){
    cout<<"\nInformation about Student 1"<<endl;

    s1.returnIdNumber();
    s1.returnFirstName();
    s1.returnLastName();
    s1.returnFullName();
    s1.returndoB();
    s1.returnAge();
    s1.returnTelephoneNum();
    s1.returnAddress();

    menu();
}

//Function which shows information for student 2 only
void showInfoStud2(){
    cout<<"\nInformation about Student 2"<<endl;

    s2.returnIdNumber();
    s1.returnFirstName();
    s1.returnLastName();
    s2.returnFullName();
    s2.returndoB();
    s2.returnAge();
    s2.returnTelephoneNum();
    s2.returnAddress();

    menu();
}

//Function which ends the program
int leTerminateur() {
    return 96;
}

//Function which determines if the 2 students share the same last name
void ifRelatives(){
    //compareLastName returns true or false and depending on the result, the right sentence will be printed
    bool checkingLastName = s1.compareLastName(lastName1,lastName2);
    (checkingLastName ? cout <<"\nTrue, they share the same Last Name."<<endl: cout<<"False, they don't have the same Family Name."<<endl);
    menu();
}

//Function which determines if the 2 students are roommates
void ifNeighbours(){
    //compareAddress will return true or false and depending on the result, the right sentence will be printed
    bool checkingAdd = s2.compareAddress(address1,address2);
    (checkingAdd ? cout <<"\nTrue, they are roommates."<<endl: cout<<"False, they are not roommates."<<endl);
    menu();
}

/*Function which displays the options available to the user and based on what the user chose, will call the right function*/
void menu()
{
    short option;
    cout <<"\nChoose between the following\n1 - Show info of Student 1\n2 - Show info of Student 2\n3 - Show info of both\n4 - Show if the Students are relatives\n5 - Show if Students are roommates\n6 - Enter Info again\n7 - End"<<endl;
    cin >> option;
    while (option <1 ||option>7)
    {
        cout <<"\nChoose between the following\n1 - Show info of Student 1\n2 - Show info of Student 2\n3 - Show info of both\n4 - Show if the Students are relatives\n5 - Show if Students are roommates\n6 - Enter Info again\n7 - End"<<endl;
        cin >> option;
    }
    switch (option)
    {
        case 1: showInfoStud1();
            break;
        case 2: showInfoStud2();
            break;
        case 3: showInfoBoth();
            break;
        case 4: ifRelatives();
            break;
        case 5: ifNeighbours();
            break;
        case 6: modInfoStudent1();
            break;
        default: leTerminateur();
            break;
    }
}

