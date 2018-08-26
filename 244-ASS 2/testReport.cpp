#include "report.h"


int main() {

    //Testing the class report by creating an object using the regular constructor
    report oneRep(5729, "HJohn LEnoo", "Neda Dept", 4752, "JaskTo", "NYPD");

    //printing the current info
    oneRep.print();

    //changing some info
    oneRep.setDepartment("LSPD");
    oneRep.setInstitution("CIA");

    //printing the new info now
    oneRep.print();

    return 79;
}