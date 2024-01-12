#pragma once
#ifndef MEMBER_H
#define MEMBER_H
// #include "book.h"
#include "person.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Book;
// class Person;
class Member : public Book, public Person {

// private:
    protected:
    int memberID;
    vector<Book> booksLoaned;

public:
    // create the constructor and initilize member objects
    Member(int memberID, /*const string&*/ string name, /*const string&*/ string address,
           /*const string&*/ string email);

    // getter methods
    string getMemberID() const;
    vector<Book> getBooksBorrowed() const;

    // setter methods
    void setBooksBorrowed(const Book& book);
};

#endif // MEMBER_H