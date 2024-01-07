/*
Petar Atanasov
M00916537
*/
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>

using namespace std;

class Book {
    
    private: 
    int bookID;
    string bookName;
    string authorFirstName;
    string authorLastName;
    string bookType;
    time_t currentTime = time(nullptr);
    char* dueDate = ctime(&currentTime);


    public:
    // get constructor and initilize book objects
    Book(int bookID, string bookName, string authorFirstName,
    string authorLastName);

    // getter methods 
    string getbookID();
    string getbookName(){
        return bookName;
    }
    string getAuthorFristName(){
        return authorFirstName;
    }
    string getAuthorLastName(){
        return authorLastName;
    }
    string getDueDate(){
        return dueDate;
    }

    // setter methods 
    void setDueDate();

    // other methods
    void returnBook();
    void borrowBook();
};


class Member {

    private: 
    int memberId;
    vector<Book> booksLoaned;
    

    public:
    // create the constructor and initilize member objects 
    Member(int memberID, string name, string address,
     string email);

    // getter methods 
    string getMemberID(string id);
    vector<Book> getBooksBorrowed();

    // setter methods
    void setBooksBorrowed( const Book& book);
};


class Librarian {

    private: 
    int staffId;
    int salary;

    public:
    // create the constructor and initilize librarian objects
    Librarian(int staffID, string name, string address,
    string email, int salary);

    // add member
    void addMember();

    // other methods 
    void issueBook(int memberID, int bookID);
    void returnBook(int memberID, int bookID);
    void calcFine(int memberID);

    // show method
    void displayBorrowedBooks(int memberID);

    // setter methods
    void setStaffID(int staffID);
    void setSalary(int salary);

    //getter methods
    int getStaffID(){
        return staffId;
    }
    int getSalary(){
        return salary;
    }
};

class Person {
    private: 
    string name;
    string address;
    string email;

    public:
    //setter methods 
    void setName(string name);
    void setAddress(string address);
    void setEmail(string email);

    //getter methods 
    string getName(){
        return name;
    }
    string getAddress(){
        return address;
    }
    string getEmail(){
        return email;
    }
};
int main(){
    
    return 0;
};
