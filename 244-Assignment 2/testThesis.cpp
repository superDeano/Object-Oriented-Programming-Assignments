#include"thesis.h"


int main(){

    //creating an object using regular constructor
    thesis thatOne(492837, "JOHn Jack", "The Amigos", 2019, "RCC", "Dep of Agri", 650, "Mrs Magdany", "Docrtor");

    //printing existing info
    thatOne.print();

    //changing info
    thatOne.setDepartment("Dep of Chem");
    thatOne.setInstitution("McGall");
    thatOne.setDegree("Bac");
    thatOne.setSupervisor("Mr Stones");

    //printing new info
    thatOne.print();


    return 0;
}