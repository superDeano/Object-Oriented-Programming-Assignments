#include "techReport.h"


int main (){

    //creating an object of report using the regular constructor
    techReport oneTechRep(7857,"Magie","oneLife", 2015, "La Moc","SPVM", "www.magie.com");

    //printing info of the object
    oneTechRep.print(0);

    //changing some values of the data members
    oneTechRep.setInstitution("TRPD");
    oneTechRep.setURL("www.magie.org");
    oneTechRep.setDepartment("DEP of PSY");

    //printing the new info
    oneTechRep.print(0);

    return 89;

}