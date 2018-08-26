//
// Created by Dean Chong San on 2017-11-12.
//
//The inclusion of the library to be able to use string variables in prototypes
#include <string>
using namespace std;

//The interface
class student
{
private:
    //The Private data (variables)
    int idNumber;
    int areaCode;
    int restPhoneNumber;
    string firstName;
    string lastName;
    string doB;
    string address;

public:
    //The member functions
  student();
    void returnIdNumber();
    void modifyIdNumber(int);
    void returnFirstName();
    void modifyFirstName(string);
    void returnLastName();
    void modifyLastName(string);
    void returnFullName();
    void returndoB();
    void modifydoB(string);
    void returnAge();
    void returnAddress();
    void modifyAddress(string);
    void returnTelephoneNum();
    void modifyTelephoneNum(int, int);
    bool compareLastName(string, string);
    bool compareAddress(string , string);

};