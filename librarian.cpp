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
void Librarian::issueBook(int memberID, int bookID);
void Librarian::returnBook(int memberID, int bookID);
void Librarian::calcFine(int memberID);
void Librarian::addMember(int memberID, string name, string address, string email)
{
    // assign the size of members() vector to the variable memberID
    //  memberID = members().size();
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