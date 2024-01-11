#include "member.h"
#include "person.h"
using namespace std;

// pass the constructor 
Member::Member(int memberID, const string& name, const string& address,
    const string& email) 
    : memberID(memberID), Person(name, address, email) {

    // this-> memberID;
    this-> setName(name);
    this-> setAddress(address);
    this-> setEmail(email);

}
// getter methods form member.h
string Member::getMemberID() const
{
    string memid = to_string(memberID);
    return memid;
}

vector<Book> Member::getBooksBorrowed() const
{
    return booksLoaned;
}

// setter methods from member.h
void Member::setBooksBorrowed(const Book& book)
{
    booksLoaned.push_back(book);
}