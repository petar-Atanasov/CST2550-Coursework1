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
void Librarian::issueBook(int memberID, int bookID)
{
    cout << "\n--- Member name: " << members[memberID].getName() << " ---"
         << "\n--- Member ID: " << members[memberID].getMemberID() << " ---"
         << "\n--- Book name: " << books[bookID - 1]->getbookName() << " ---"
         << "\n--- Book ID: " << books[bookID - 1]->getbookID() << " ---";

    // fix the book class borrower with this
    books[bookID - 1]->borrowBook(&members[memberID], time(nullptr) + (3600 * 24 * 3));
}
void Librarian::returnBook(int memberID, int bookID)
{
    // first check if memberid, bookid exist
    if ((memberID < 0 || memberID >= members.size()) && bookID <= 0 || bookID > books.size())
    {
        cout << "This is an invalid member id: " << memberID
             << " or invalid book id: " << bookID
             << ". Try again!" << endl;

        return;
    }
    Book* book = books[bookID - 1];
    Member& member = members[memberID];
    // here get the borrowed books into variable which is automaticly updated itself 
    auto booksAreBorrowed = member.getBooksBorrowed();
    //set a variable which is finding if book is being borrowed already 
    auto booksFound = find(booksAreBorrowed.begin(), booksAreBorrowed.end(), book);

    if(booksFound == booksAreBorrowed.end()){
        cout << "No one has borrowed this book yet. "<< endl;
        return;
    } else {
        //return the book
        book-> returnBook();
        // then calculate fine
        calcFine(memberID); 
        // and remove the member borrowed book
        member.getBooksBorrowed().erase(booksFound);
        
    }

}
void Librarian::calcFine(int memberID)
{
    // check for valid member id
    if (memberID < 0 || memberID >= members.size())
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