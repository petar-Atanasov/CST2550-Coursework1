#include "librarian.h"
// #include "person.h"
using namespace std;

// pass the constructor
Librarian::Librarian(int staffID, const string& name, const string& address,
    const string& email, int salary)
{
    
    this-> memberID;
    this-> setName(name);
    this-> setAddress(address);
    this-> setEmail(email);

}   
// other methods from librarian.h
    void Librarian::issueBook(int memberID, int bookID);
    void Librarian::returnBook(int memberID, int bookID);
    void Librarian::calcFine(int memberID);
    void Librarian::addMember();     

    void Librarian::displayBorrowedBooks(int memberID);
    // setter methods from librarian.h
    void Librarian::setStaffID(int staffID);
    void Librarian::setSalary(int salary);

    //getter methods from librarian.h
    int Librarian::getStaffID(){
        return staffID;
    }
    int Librarian::getSalary(){
        return salary;
    }