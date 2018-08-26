Q2
testing1.getName();
testing1.getPassID();
testing1.getTelePh1();
testing1.getDoB();
testing1.getAddress();
Int 
new delete 
class passenger (){

}
passenger::passenger() {
    int passengerID{0};
    array<string, 4> info{"hey", "Just", "a ", "test"};


}

void passenger::getPassID() {
    cout << "\nEnter the ID:" << endl;
    cin >> passengerID;
}

void passenger::getName() {

    cout << "\nEnter the name:" << endl;
    getline(cin, info[0]);

}

void passenger::getAddress() {

    cout << "\nEnter the address:" << endl;
    ws(cin);
    getline(cin, info[1]);

}

void passenger::getTelePh1() {

    cout << "\nEnter the telephone number:" << endl;
    cin >> info[2];

}

void passenger::getDoB() {
    int day, month, year;

    cout<<"\nEnter the date of birth(DD-MM-YYYY):"<<endl;
    cin >> day >> month >> year;
    dateOfBirth.setsDate(day, month, year);
}