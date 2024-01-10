#include "book.h"
using namespace std;

// pass the constructor 
Book::Book(int bookID, string bookName, string authorFirstName,
    string authorLastName){

    // initilize member variables to default value for the cpp file
    bookID = bookID;
    bookName = bookName;
    authorFirstName = authorFirstName;
    authorLastName = authorLastName;
    bookType = "";
    dueDate = "";
    borrower;

    //getter methods from book.h
    string Book::getbookID(){
        return bookID;
    }

    string Book::getbookName(){
        return bookName;
    }

    string Book::getAuthorFristName(){
        return authorFirstName;
    }

    string Book::getAuthorLastName(){
        return authorLastName;
    }

    string Book::getDueDate(){
        return dueDate;
    }

    // setter methods from book.h
    void Book::setDueDate(){
        dueDate = date;
    }

    // other methods from book.h
    void Book::returnBook(){
        dueDate = "";
        borrower;
    }


}
    
