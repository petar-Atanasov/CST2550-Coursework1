/*
Petar Atanasov
M00916537
*/
#pragma once
#ifndef LIBRARIAN_H
#define LIBRARIAN_H
#include "book.h"
using namespace std;

class Person;
class Librarian: public Person{
private:
    int staffID;
    int salary;
    // create a vector to store your members
    vector<Member> members;

public:
    // create the constructor and initilize librarian objects
    Librarian(int staffID, string name, string address, string email, int salary);

    // other methods
    void issueBook(int memberID, int bookID);
    void returnBook(int memberID, int bookID);
    void calcFine(int memberID);
    // add member
    void addMember();

    // show method
    void displayBorrowedBooks(int memberID);

    // setter methods
    void setStaffID(int staffID);
    void setSalary(int salary);

    // getter methods
    int getStaffID();
    int getSalary();
};

#endif // LIBRARIAN_H