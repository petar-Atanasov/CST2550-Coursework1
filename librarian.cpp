#include "librarian.h"
using namespace std;

// pass the constructor
Librarian::Librarian(int staffID, string name, string address,
    string email, int salary){
    
    staffID = 0;
    salary = 0;

    // other methods 
    void Librarian::issueBook(int memberID, int bookID);
    void Librarian::returnBook(int memberID, int bookID);
    void Librarian::calcFine(int memberID);
    void Librarian::addMember();     

    void Librarian::displayBorrowedBooks(int memberID);
    // setter methods
    void Librarian::setStaffID(int staffID);
    void Librarian::setSalary(int salary);

    //getter methods
    int Librarian::getStaffID(){
        return staffID;
    }
    int Librarian::getSalary(){
        return salary;
    }
}   
