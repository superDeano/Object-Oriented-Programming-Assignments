#include "reference.h"

int main() {

    //Testing reference by using the regular constructor
    reference oneTesting(769, "Josh McKannel", "The Rainbows", 1998);

    //printing current info about the reference
    oneTesting.print();

    //Changing the year of publication
    oneTesting.setYearOfPub(1990);

    //changing the title
    oneTesting.setTitle("La LA LAnd!");

    //Changing the author
    oneTesting.setAuthor("Mike Bandwidth");

    //now printing the new info
    oneTesting.print();
    return 78;

};