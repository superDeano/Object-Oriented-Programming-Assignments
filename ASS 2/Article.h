//
// Created by Dean Chong San on 2018-02-10.
//
#include "reference.h"

#ifndef ASS_2_ARTICLE_H
#define ASS_2_ARTICLE_H

//It is derived from the base class reference. Put public so it can change some protected data members
class Article : public reference {

private:
    string journal;
    int startPage;
    int endPage;


public:

    //main constructor
    Article();

    //regular constructor
    Article(int, string, string, int, string, int, int);

    //Setters and Getters
    const string &getJournal() const;

    void setJournal(const string &);

    int getStartPage() const;

    void setStartPage(int);

    int getEndPage() const;

    void setEndPage(int);

    //virtual member functions because they can also be called in other classes.
    virtual int getNumberOfPages();

    virtual void print();

    ~Article();

};


#endif //ASS_2_ARTICLE_H
