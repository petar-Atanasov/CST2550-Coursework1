#include "member.h"
using namespace std;

// pass the constructor 
member::member(int memberID, string name, string address,
    string email) {

    memberID = memberID;
    booksLoaned{};
    


    //getter methods form member.h
    string member::getMemberID(){
        return memberID;
    }    

    vector<book::member> getBooksBorrowed();

    //setter methods from member.h
    void member::setBooksBorrowed(const Book& book)

}
