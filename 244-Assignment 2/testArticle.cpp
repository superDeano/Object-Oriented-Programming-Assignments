#include <iostream>
#include "Article.h"
int main() {
    std::cout << "Hello, World!" << std::endl;

    //creation of an object from the class article using the regular constructor
    Article oneArticle (8283, "Jack Monney the Author","Holo Shot theTitle", 1997, "JackSonVil the journal", 0, 999);

    //print the info from the instajntiation of the object
    oneArticle.print();

    //printing the change on number of pages
    std::cout << "\nThe number of pages is " <<oneArticle.getNumberOfPages() <<std::endl;

    //changing the start page
    oneArticle.setStartPage(79);

    //changing the end page
    oneArticle.setEndPage(563);

    //changing the author
    oneArticle.setAuthor("Ney Olso");

    //changing the title
    oneArticle.setTitle("A nice Try");

    //changing the year of publication
    oneArticle.setYearOfPub(2020);

    //printing new info now
    oneArticle.print();

    //printing the change on number of pages since the start page was changed
    std::cout << "\nThe number of pages is " <<oneArticle.getNumberOfPages() <<std::endl;


    return 0;
}