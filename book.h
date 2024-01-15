/*
Petar Atanasov
M00916537
*/
#pragma once 
#ifndef BOOK_H
#define BOOK_H
#include "member.h"
#include <iostream>
#include <fstream>
#include <string> 
#include <sstream>
#include <chrono> // use it for date manipulation
#include <ctime>
#include <algorithm> // used for to find vectors

using namespace std;
class Member;
class Book{
    // private data members for the Book class
    private: 
    int bookID;                 // book ID
    string bookName;            // Name of the book
    string authorFirstName;     // Author First Name
    string authorLastName;      // Author Last Name 
    string bookType;            // The book type#
    time_t dueDate;             // The due date of the book
    Member* borrower = nullptr;

    public:
    // get constructor and initilize book objects
    Book(int bookID, string bookName, string authorFirstName,
    string authorLastName);

    // getter methods 
    string getbookID();
    string getbookName();
    string getAuthorFristName();
    string getAuthorLastName();
    // otherwise gives and error messages when is string,
    // and is not converted to time_t 
    time_t getDueDate();

    // setter methods 
    void setDueDate(time_t date);

    // other methods
    void returnBook();          //Return the occupied book
    void borrowBook(Member* borrower, time_t dueDate);         //Borrowing a book
};
#endif // BOOK_