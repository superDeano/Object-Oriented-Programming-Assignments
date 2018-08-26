#include <iostream>
#include "customer.h"

using namespace std;

int main() {
//instantiating the object
    customer newCustomer("i am A New Customer", "1 this is a Test Cali", "514 67464 048", 1, 2, 2003);
    cout << "Hello, World!" << endl;

    //Trying the member functions
    newCustomer.printAllCustomerInfo();
    newCustomer.setTel("6996274932");
    newCustomer.setAddress("2 what Test man");
    newCustomer.setDateOfBirth(17, 8, 1975);
    newCustomer.printAllCustomerInfo();
    return 0;
}