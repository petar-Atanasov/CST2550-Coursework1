#include "member.h"
using namespace std;

// pass the constructor 
Member::Member(int memberID, string name, string address,
    string email) {

    memberID = memberID;
    booksLoaned{};
    


    //getter methods form member.h
    string Member::getMemberID(){
        return memberID;
    }    

    vector<Book::Member> getBooksBorrowed();

    //setter methods from member.h
    void Member::setBooksBorrowed();

}
