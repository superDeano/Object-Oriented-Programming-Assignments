#include <iostream>
#include "Passenger.h"
#include <string>
#include <array>

using namespace std;

//Function Prototypes

void firstPassMenu(passenger *, passenger *);

void getInfoPass1();

void getInfoPass2(passenger *);

void changeInfoForPass1(passenger *, passenger *);

void changeInfoForPass2(passenger *, passenger *);

void showAllInfoPass1(passenger *, passenger *);

void showAllInfoPass2(passenger *, passenger *);

void showNamePass1(passenger *, passenger *);

void showIDPass1(passenger *, passenger *);

void showAddPass1(passenger *, passenger *);

void showTelPass1(passenger *, passenger *);

void showDoBPass1(passenger *, passenger *);

void showNamePass2(passenger *, passenger *);

void showIDPass2(passenger *, passenger *);

void showAddPass2(passenger *, passenger *);

void showTelPass2(passenger *, passenger *);

void showDoBPass2(passenger *, passenger *);

void mainMenu(passenger *, passenger *);

void secondPassMenu(passenger *, passenger *);

int leTerminateur(passenger *, passenger *);


//Function which terminates the program and deletes the two objects
int leTerminateur(passenger *testing1, passenger *testing2) {
    cout << "\nDeleting the objects \n...\n...\n..." << endl;
    delete testing1, testing2;

    cout << "..." << endl;
    cout << "..." << endl;
    cout << "\nDone" << endl;

    return 96;
}

//function which acts are the main original menu
void mainMenu(passenger *testing1, passenger *testing2) {
    short userChoice;

    //Displaying the available options to the user
    cout << "\nMain Menu\n\nChoose between one of the following\n1 - Change info first passenger\n2 - Menu First Passenger\n3 - Change info second passenger\n4 - Menu Second Passenger\n5 - End the program " << endl;
    ws(cin);
    cin >> userChoice;

    //makes sure that the user enters a number between 1 and 5 only
    while (userChoice < 1 || userChoice > 5) {
        cout << "\nMain Menu\n\nChoose between one of the following\n1 - Change info first passenger\n2 - Menu First Passenger\n3 - Change info second passenger\n4 - Menu Second Passenger\n5 - End the program " << endl;
        ws(cin);
        cin >> userChoice;
    }
    //Depending on what the user chose, the right function will be called
    switch (userChoice) {
        case 1:
            changeInfoForPass1(testing1, testing2);
            break;
        case 2:
            firstPassMenu(testing1, testing2);
            break;
        case 3:
            changeInfoForPass2(testing1, testing2);
            break;
        case 4:
            secondPassMenu(testing1, testing2);
            break;
        default:
            leTerminateur(testing1, testing2);
            break;
    }
}

//The main function in all its glory
int main() {
//The Title
    cout << "PASSENGERS" << endl;
    //First the user will always be asked to enter information for the first passenger object
    getInfoPass1();

    return 0;
}

//Function whereby the user is first asked to enter information for the first passenger
void getInfoPass1() {
    int passengerID, day, month, year;
    string name, address, telephone;

    cout << "\nEnter the following information for the first passenger" << endl;

    cout << "\nEnter the ID:" << endl;
    cin >> passengerID;

    cout << "\nEnter the name:" << endl;
    //ws(cin) so that the getline does not take whatever has been inputted by the user in previous lines
    ws(cin);
    getline(cin, name);

    cout << "\nEnter the address:" << endl;
    ws(cin);
    getline(cin, address);

    cout << "\nEnter the telephone number:" << endl;
    cin >> telephone;

    cout << "\nEnter the date of birth(DD-MM-YYYY):" << endl;
    ws(cin);
    cin >> day >> month >> year;

    //That is when the new passenger is created
    passenger *testing1 = new passenger(passengerID, name, address, telephone, day, month, year);

    //Calls this function to enter info for the second passenger
    getInfoPass2(testing1);

}

//Function which displays all the information about passenger one
void showAllInfoPass1(passenger *testing1, passenger *testing2) {
    cout << "The ID is " << testing1->getPassengerID() << endl;
    cout << "The name is " << testing1->getDefname() << endl;
    cout << "The address is " << testing1->getDefaddress() << endl;
    cout << "The telephone is " << testing1->getDeftelephone() << endl;
    cout << "The date of birth is ";
    testing1->getDateOfBirth();
    cout << endl;
    cout << "\nreturning back to First Passenger Menu" << endl;

    //After all the info have been displayed, the program returns to the menu for the first passenger
    firstPassMenu(testing1, testing2);
}

//Function which asks the user to enter information for the second passenger for the first time
void getInfoPass2(passenger *testing1) {
    int passengerID, day, month, year;
    string name, address, telephone;

    cout << "\nEnter the following information for the second passenger" << endl;

    cout << "\nEnter the ID:" << endl;
    cin >> passengerID;

    cout << "\nEnter the name:" << endl;
    ws(cin);
    getline(cin, name);

    cout << "\nEnter the address:" << endl;
    ws(cin);
    getline(cin, address);

    cout << "\nEnter the telephone number:" << endl;
    cin >> telephone;

    cout << "\nEnter the date of birth(DD-MM-YYYY):" << endl;
    ws(cin);
    cin >> day >> month >> year;

    //The second passenger object is then created
    passenger *testing2 = new passenger(passengerID, name, address, telephone, day, month, year);

    //The program then goes to the main menu as this function is called
    mainMenu(testing1, testing2);
}

//Function which represents the menu of options for the first passenger
void firstPassMenu(passenger *testing1, passenger *testing2) {
    int choice;
//Displaying the title of the menu
    cout << "\nFirst Passenger" << endl;
    //Displaying the choices of options for the first passenger object
    cout << "\nChoose between one of the following: \n\n1 - Display ID \n2 - Display name \n3 - Display address \n4 - Display telephone \n5 - Display date of birth \n6 - Display all info \n7 - Return to Main Menu" << endl;
    cin >> choice;

    //Makes sure that only a number between 1 and 7 is enterred without crashing the program
    while (choice < 1 || choice > 7) {
        cout << "\nChoose between one of the following: \n\n1 - Display ID \n2 - Display name \n3 - Display address \n4 - Display telephone \n5 - Display date of birth \n6 - Display all info \n7 - Return to Main Menu" << endl;
        cin >> choice;
    }
    //Depending on what the user has chosen the right function will be called
    switch (choice) {
        case 1:
            showIDPass1(testing1, testing2);
            break;
        case 2:
            showNamePass1(testing1, testing2);
            break;
        case 3:
            showAddPass1(testing1, testing2);
            break;
        case 4:
            showTelPass1(testing1, testing2);
            break;
        case 5:
            showDoBPass1(testing1, testing2);
            break;
        case 6:
            showAllInfoPass1(testing1, testing2);
            break;
        case 7: {
            cout << "\nreturning to Main Menu" << endl;
            mainMenu(testing1, testing2);
        }
            break;
    }
}

//Function which represents the menu of options for the second passenger
void secondPassMenu(passenger *testing1, passenger *testing2) {
    short whatUserWants;
//Displaying the title of the menu
    cout << "\nSecond Passenger" << endl;
    //Displaying the options available to the user
    cout << "\nChoose between one of the following:\n1 - Display ID \n2 - Display name \n3 - Display address \n4 - Display telephone \n5 - Display date of birth \n6 - Display all info \n7 - Return to Main Menu" << endl;
    ws(cin);
    cin >> whatUserWants;
    //makes sure only a number between 1 and 7 is entered to prevent it from crashing the program
    while (whatUserWants < 1 || whatUserWants > 7) {
        cout << "\nChoose between one of the following:\n1 - Display ID \n2 - Display name \n3 - Display address \n4 - Display telephone \n5 - Display date of birth \n6 - Display all info \n7 - Return to Main Menu" << endl;
        ws(cin);
        cin >> whatUserWants;
    }
    //Switch to call the right function
    switch (whatUserWants) {
        case 1:
            showIDPass2(testing1, testing2);
            break;
        case 2:
            showNamePass2(testing1, testing2);
            break;
        case 3 :
            showAddPass2(testing1, testing2);
            break;
        case 4:
            showTelPass2(testing1, testing2);
            break;
        case 5:
            showDoBPass2(testing1, testing2);
            break;
        case 6:
            showAllInfoPass2(testing1, testing2);
            break;
        case 7: {
            cout << "\nreturning to Main Menu" << endl;
            mainMenu(testing1, testing2);
        }
            break;
    }
}

//Function which displays the name of the first passenger
void showNamePass1(passenger *testing1, passenger *testing2) {
    cout << "\nThe name is " << testing1->getDefname() << endl;
    cout << "\nreturning back to First Passenger Menu" << endl;
    //Then allows the user to go back to the previous menu
    firstPassMenu(testing1, testing2);
}

//Function which shows the ID of the first passenger
void showIDPass1(passenger *testing1, passenger *testing2) {
    cout << "\nThe ID is " << testing1->getPassengerID() << endl;
    cout << "\nreturning back to First Passenger Menu" << endl;
    //allows the user to go back to the previous menu
    firstPassMenu(testing1, testing2);
}

//Function which shows the address of the first passenger
void showAddPass1(passenger *testing1, passenger *testing2) {
    cout << "\nThe address is " << testing1->getDefaddress() << endl;
    cout << "\nreturning back to First Passenger Menu" << endl;
    //allows the user to go back to the previous menu
    firstPassMenu(testing1, testing2);
}

//Function which displays the telephone of the first passenger
void showTelPass1(passenger *testing1, passenger *testing2) {
    cout << "\nThe telephone number is " << testing1->getDeftelephone() << endl;
    cout << "\nreturning back to First Passenger Menu" << endl;
    //allows the user to go back to the previous menu
    firstPassMenu(testing1, testing2);
}

//functions which shows the date of birth for the first passenger
void showDoBPass1(passenger *testing1, passenger *testing2) {
    cout << "\nThe date of birth is ";
    testing1->getDateOfBirth();
    cout << endl;
    cout << "\nreturning back to First Passenger Menu" << endl;

    //allows the user to go back to the previous menu
    firstPassMenu(testing1, testing2);
}

//function which shows the name of the second passenger
void showNamePass2(passenger *testing1, passenger *testing2) {
    cout << "\nThe name is " << testing2->getDefname() << endl;
    cout << "\nreturning back to Second Passenger Menu" << endl;
    //allows the user to go back to the previous menu
    secondPassMenu(testing1, testing2);
}

//function which shows the ID for the second passenger object
void showIDPass2(passenger *testing1, passenger *testing2) {
    cout << "\nThe ID is " << testing2->getPassengerID() << endl;
    cout << "\nreturning back to Second Passenger Menu" << endl;
    //allows the user to go back to the previous menu
    secondPassMenu(testing1, testing2);
}

//function which shows the address for the second passenger
void showAddPass2(passenger *testing1, passenger *testing2) {
    cout << "\nThe address is " << testing2->getDefaddress() << endl;
    cout << "\nreturning back to Second Passenger Menu" << endl;
    //function which allows the user to go back to the previous menu
    secondPassMenu(testing1, testing2);
}


//function which shows the telephone of the second passenger
void showTelPass2(passenger *testing1, passenger *testing2) {
    cout << "\nThe telephone number is " << testing2->getDeftelephone() << endl;
    cout << "\nreturning back to Second Passenger Menu" << endl;
    //allows the user to go back to the previous menu
    secondPassMenu(testing1, testing2);
}

//function which shows the date of birth for the second passenger
void showDoBPass2(passenger *testing1, passenger *testing2) {
    cout << "\nThe date of birth is ";
    testing2->getDateOfBirth();
    cout << endl;
    cout << "\nreturning back to Second Passenger Menu" << endl;
   //allows the user to go back to the previous menu
    secondPassMenu(testing1, testing2);
}

//function which allows the user to change the data for the second passenger by calling in member functions of the class passenger
void changeInfoForPass2(passenger *testing1, passenger *testing2) {
    testing2->setPassID();
    testing2->setName();
    testing2->setAddress();
    testing2->setTelephone();
    testing2->setDOB();
    cout << "\nreturning back to Main Menu" << endl;
    //allows the user to go back to the previous menu
    mainMenu(testing1, testing2);
}

//function which allows the user to change info for the first passenger using member functions from the class passenger
void changeInfoForPass1(passenger *testing1, passenger *testing2) {
    testing1->setPassID();
    testing1->setName();
    testing1->setAddress();
    testing1->setDOB();
    testing1->setTelephone();
    cout << "\nreturning back to Main Menu" << endl;
    //allows user to go back to the previous menu
    mainMenu(testing1, testing2);
}


//function which shows all collected information about the second passenger
void showAllInfoPass2(passenger *testing1, passenger *testing2) {
    cout << "\nThe ID is " << testing2->getPassengerID() << endl;
    cout << "The name is " << testing2->getDefname() << endl;
    cout << "The address is " << testing2->getDefaddress() << endl;
    cout << "The telephone number is " << testing2->getDeftelephone() << endl;
    cout << "The date of birth is ";
    testing2->getDateOfBirth();
    cout << endl;
    cout << "\n\nreturning back to Second Passenger Menu" << endl;
    //allows the user to go back to the previous menu
    secondPassMenu(testing1, testing2);

}