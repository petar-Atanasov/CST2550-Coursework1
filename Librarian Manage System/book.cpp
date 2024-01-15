/*
Petar Atanasov
M00916537
*/
#include "book.h"
using namespace std;

// pass the constructor 
Book::Book(int bookID, string bookName, string authorFirstName, string authorLastName){

    // initilize member variables to default value for the cpp file
    this->bookID = bookID;
    this->bookName = bookName;
    this->authorFirstName = authorFirstName;
    this->authorLastName = authorLastName;
}
 //getter methods from book.h
string Book::getbookID()
{
    string bookid = to_string(bookID);
    return bookid;
}

string Book::getbookName()
{
    return bookName;
}

string Book::getAuthorFristName()
{
    return authorFirstName;
}

string Book::getAuthorLastName()
{
    return authorLastName;
}

time_t Book::getDueDate()
{
    return dueDate;
}

// setter methods from book.h
void Book::setDueDate(time_t date)
{
    this-> dueDate = date;
}

// other methods from book.h
void Book::returnBook()
{
    // dueDate = "";
    this-> borrower = nullptr;
    cout << "The book has been returned!\n " << endl;
}
void Book::borrowBook(Member* borrower, time_t dueDate){
    this-> borrower = borrower;

    setDueDate(dueDate);
}