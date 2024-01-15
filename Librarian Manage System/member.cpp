/*
Petar Atanasov
M00916537
*/
#include "member.h"
using namespace std;

// pass the constructor
Member::Member(int memberID, string name, string address, string email)
{

    this->memberID = memberID;
    this->setName(name);
    this->setAddress(address);
    this->setEmail(email);
}
// getter methods form member.h
string Member::getMemberID()
{
    string memid = to_string(memberID);
    return memid;
}

vector<Book *> Member::getBooksBorrowed()
{
    return booksLoaned;
}

// setter methods from member.h
void Member::setBooksBorrowed(Book *book)
{
    booksLoaned.push_back(book);
}