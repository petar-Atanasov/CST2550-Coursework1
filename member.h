#pragma once
#ifndef MEMBER_H
#define MEMBER_H
#include "book.h"
#include "person.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Book;
class Member : public Person
{

private:
    int memberID;
    vector<Book> booksLoaned;

public:
    // create the constructor and initilize member objects
    Member(int memberID, const string& name, const string& address,
           const string& email);

    // getter methods
    string getMemberID() const;
    vector<Book> getBooksBorrowed() const;

    // setter methods
    void setBooksBorrowed(const Book& book);
};

#endif // MEMBER_H