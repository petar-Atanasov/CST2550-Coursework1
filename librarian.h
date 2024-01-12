#pragma once
#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include <iostream>
#include <string>
#include "book.h"
#include "member.h"
// #include "person.h"

using namespace std;
class Member; 
// class Person; 
class Librarian : public Member/*, public Person, public Book*/ {
    private: 
    int staffID;
    int salary;

    public:
    // create the constructor and initilize librarian objects
    Librarian(int staffID, /*const string&*/ string name, /*const string&*/ string address,
    /*const string&*/ string email, int salary);

    // other methods 
    void issueBook(int memberID, int bookID);
    void returnBook(int memberID, int bookID);
    void calcFine(int memberID);
    // add member
    void addMember();

    // show method
    void displayBorrowedBooks(int memberID);

    // setter methods
    void setStaffID(int stafFID);
    void setSalary(int salary);

    //getter methods
    int getStaffID();
    int getSalary();
};

#endif //LIBRARIAN_H