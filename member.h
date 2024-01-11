#pragma once
#ifndef MEMBER_H
#define MEMBER_H
#include "book.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Book;
class Member {

    private: 
    int memberID;
    vector<Book.Member> booksLoaned;

    public:
    // create the constructor and initilize member objects 
    Member(int memberID, string name, string address,
     string email);

    // getter methods 
    string getMemberID();
    vector<book> getBooksBorrowed();

    // setter methods
    void* setBooksBorrowed(const book& book);
};

#endif // MEMBER_H
