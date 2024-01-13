/*
Petar Atanasov
M00916537
*/
#pragma once
#ifndef MEMBER_H
#define MEMBER_H
#include "person.h"
#include <vector>

using namespace std;
class Book;
class Person;
class Member: public Person{

    // private:
private:
    int memberID;
    vector<Book*> booksLoaned;

public:
    // create the constructor and initilize member objects
    Member(int memberID, string name, string address, string email);

    //*******Encapsulation*******//
    // getter methods
    string getMemberID();
    vector<Book*> getBooksBorrowed();

    // setter methods
    void setBooksBorrowed(Book* book);
};

#endif // MEMBER_H