#include <string>

using std::string;


class reference {
/*This is the base class and the data members have been made protected so that the derived classes can easily access them*/
protected:

    int id;
    string title;
    string author;
    int yearOfPub;

public:
//The member functions
    reference();

    //regular constructor
    reference(int, string, string, int);

    //getters
    int getID();

    string getAuthor();

    string getTitle();

    int getYear();

    //member function print is virtual because it is used and called in other classes as well
    virtual void print();

    //The destructor
    ~reference();

    //setters
    void setId(int id);

    void setTitle(const string &title);

    void setAuthor(const string &author);

    void setYearOfPub(int yearOfPub);

};
