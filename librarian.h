#pragma once
#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <iostream>
#include <string>
#include "book.h"
#include "member.h"

using namespace std;

class Librarian {

    private: 
    int staffId;
    int salary;

    public:
    // create the constructor and initilize librarian objects
    Librarian(int staffID, string name, string address,
    string email, int salary);

    // other methods 
    void issueBook(int Member memberID, int bookID);
    void returnBook(int memberID, int bookID);
    void calcFine(int memberID);
    // add member
    void addMember();

    // show method
    void displayBorrowedBooks(int memberID);

    // setter methods
    void setStaffID(int staffID);
    void setSalary(int salary);

    //getter methods
    int getStaffID();
    int getSalary();
};

#endif //LIBRARIAN_H
