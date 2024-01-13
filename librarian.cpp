/*
Petar Atanasov
M00916537
*/
#include "librarian.h"
using namespace std;

// pass the constructor
Librarian::Librarian(int staffID, string name, string address, string email, int salary)
{
    this->staffID = staffID;
    this->setName(name);
    this->setAddress(address);
    this->setEmail(email);
    this->salary = salary;
}
// other methods from librarian.h
void Librarian::issueBook(int memberID, int bookID) {}
void Librarian::returnBook(int memberID, int bookID) {}
void Librarian::calcFine(int memberID)
{
    // check for valid member id
    if (memberID > 0 || memberID >= members.size())
    {
        cout << "This is an invalid member id: " << memberID << ". Try again!" << endl;

        return;
    }

    vector<Book *> books = members[memberID].getBooksBorrowed();
    // variable for the total amount of the fine
    double toFis = 0.0;

    for (auto &book : books)
    {
        // get the current time with chrono + ctime
        auto currTime = chrono::system_clock::now();
        // set the date up to date converted with to_time_t from chrono
        time_t currDate = chrono::system_clock::to_time_t(currTime);

        // chech for the delay of the book
        if (currDate > book->getDueDate())
        {
            double delayDate = difftime(currDate, book->getDueDate()) / (3600 * 24);
            double fnFBk = delayDate * 1.0;
            // pass the variable for total amount and add it with fine for book 
            toFis += fnFBk;

            cout << "The expired time to return the book is: " << delayDate
                 << " and the applied fine for the member with ID: " << memberID
                 << " is: £" << toFis << '\n';
        }
        else
        {
            cout << "The book has been returned succsessfully on time. "
                 << "You do not have applied fine.\n";
        }
    }
}
void Librarian::addMember(int memberID, string name, string address, string email)
{
    // setName from person.cpp to get the name
    setName(name);
    // setAddress form person.cpp to get the address
    setAddress(address);
    // setEmail form person.cpp to get the email and the regex for it
    setEmail(email);
    // provide directly constructor argument and insert the element in the end
    members.emplace_back(memberID, name, address, email);
    std::cout << "The member ID is: " << memberID << endl;
}
void Librarian::displayBorrowedBooks(int memberID)
{
    // pass the vector for books from librarian.h
    vector<Book *> books = members[memberID].getBooksBorrowed();

    switch (books.size())
    {
    case 0:
        cout << "The member does not own any books yet. " << endl;
        break;
    // loop through the books and print it //
    default:
        cout << "The member owns those books: " << endl;
        for (auto &book : books)
        {
            cout << book->getbookID() << " -- " << book->getbookName() << '\n';
        }
    }
}
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