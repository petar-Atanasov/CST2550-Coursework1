/*
Petar Atanasov
M00916537
*/
#include "librarian.h"
using namespace std;

// pass the constructor
Librarian::Librarian(int staffID, string name, string address, string email, int salary){
    this->staffID = staffID;
    this->setName(name);
    this->setAddress(address);
    this->setEmail(email);
    this->salary = salary;
}
// other methods from librarian.h
void Librarian::issueBook(int memberID, int bookID);
void Librarian::returnBook(int memberID, int bookID);
void Librarian::calcFine(int memberID);
void Librarian::addMember();

void Librarian::displayBorrowedBooks(int memberID);
// setter methods from librarian.h
void Librarian::setStaffID(int staffID)
{
    this->staffID = staffID;
}
void Librarian::setSalary(int salary)
{
    this->salary = salary;
}

// getter methods from librarian.h
int Librarian::getStaffID()
{
    return staffID;
}
int Librarian::getSalary()
{
    return salary;
}