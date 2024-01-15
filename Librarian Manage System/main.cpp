/*
Petar Atanasov
M00916537
*/
#include "librarian.h"
using namespace std;

// set the librarian class with values details
Librarian librarianLog(1234, "Name: Bob Christensen", "Address: 15 King's Street", "Email: bobCh@yahoo.com", 123456);

// Library managment system for book file
void LMS()
{
    cout << "\nOPENING LYBRARY MANAGMENT FILE\n";

    string file = "";
    cout << "\nEnter your file name where the books are stored. For example(file.txt)\n";
    cin >> file;

    // open the library_books.cvs
    ifstream filename(file);

    if (filename.is_open())
    {
        cout << "The file is open." << endl;
        // get the values of the library books file
        string bookID, bookName, pageCount,
            authorFirstName, authorLastName,
            bookType, line;
        
        vector<Book> books;

        getline(filename, line);
        while (getline(filename, line))
        {
            stringstream pushString(line);
            getline(pushString, bookID, ',');
            getline(pushString, bookName, ',');
            getline(pushString, pageCount, ',');
            getline(pushString, authorFirstName, ',');
            getline(pushString, authorLastName, ',');
            getline(pushString, bookType, ' ');
            // print the values and convert the bookId form string to int
            cout << stoi(bookID) << " --- " << bookName << " --- " << pageCount << " --- " << authorFirstName << " --- " << authorLastName << " --- " << bookType;
            
            books.emplace_back(stoi(bookID), bookName, authorFirstName, authorLastName);
        }

        cout << "\n The library books are added. " << endl;
        filename.close();
    }
    else
    {
        cout << "\nThe file failed to open.\n"
             << "Try again." << endl;
        exit(0);
    }
}

// get member ID
int GMID()
{
    vector<Member> members;
    // get a regex for members id
    regex rgxMID("^[0-9]+$");
    // set a string to hold the checkin
    string checkMemID = "";

    cout << "To manage member, enter it is ID: " << endl;
    cin >> checkMemID;

    // assign a flag for checking
    bool flag = true;

    while (flag)
    {
        if (regex_match(checkMemID, rgxMID))
        {
            // check for existing member id in members vector
            if (stoi(checkMemID) < members.size())
            {
                flag = false;
            }
            else
            {
                cout << "Wrong input or the member's ID does not exist. Try Again." << endl;
                cin >> checkMemID;
            }
        }
        else
        {
            cout << "Wrong input or the member's ID does not exist. Try Again." << endl;
            cin >> checkMemID;
        }
    }
    return stoi(checkMemID);
}

// get book ID
int GBID()
{
    vector<Book *> books;
    // get a regex for book ID
    regex rgxBID("^[0-9]+$");
    // set a string to hold the checkin
    string checkBID = "";

    cout << "To manage a book, enter it's ID: " << endl;
    cin >> checkBID;
    // assign a flag for checking
    bool flag = true;

    while (flag)
    {
        if (regex_match(checkBID, rgxBID))
        {
            // check for existing book id in books vector
            if (stoi(checkBID) < books.size())
            {

                flag = false;
            }
            else
            {
                cout << "Wrong input or the book's ID does not exist. Try Again." << endl;
                cin >> checkBID;
            }
        }
        else
        {
            cout << "Wrong input or the book's ID does not exist. Try Again." << endl;
            cin >> checkBID;
        }
    }
    return stoi(checkBID);
}
// display menu
string printMenu()
{
    string input = "0";
    // create memberId and bookID as integers;
    int memberID, bookID;
    vector<Member> members;

    while (!(input == "1" || input == "2" || input == "3" || input == "4" || input == "6"))
    {
        cout << "\nEnter the option that you want to access: \n"
             << " 1. Add member.\n"
             << " 2. Issue a book to a member.\n"
             << " 3. Return a book.\n"
             << " 4. Show all of the borrowed books.\n"
             << " 6. Exit." << endl;

        cin >> input;

        // the switch is for the input of the user
        switch (stoi(input))
        {
        case 1:
            // librarain --> add a member
            librarianLog.addMember();
            break;
        case 2:
            if (members.size() == 0)
            {
                cout << "Create a member. Members does not exist yet!" << endl;
            }
            else
            {
                // issue book
                memberID = GMID();
                bookID = GBID();
                librarianLog.issueBook(memberID, bookID);
            }
            break;
        case 3:
            if (members.size() == 0)
            {
                cout << "Create a member. Members does not exist yet!" << endl;
            }
            else
            {
                // return book
                memberID = GMID();
                bookID = GBID();
                librarianLog.returnBook(memberID, bookID);
            }
            break;
        case 4:
            if (members.size() == 0)
            {
                cout << "Create a member. Members does not exist yet!" << endl;
            }
            else
            {
                // display borrowed books
                memberID = GMID();
                librarianLog.displayBorrowedBooks(memberID);
            }
            break;
        case 6:
            cout << "You chose to exit the system. Goodbye! " << endl;
            exit(0);
            break;

        default:
            break;
        }
    }
    return input;
}

// validation for librarain id
bool verifyStaffID(string ID)
{
    regex rgxStaffID("^[0-9]+$");
    return regex_match(ID, rgxStaffID);
}
// validation for librarian name
bool verifyStaffName(string name)
{
    regex rgxStaffName("/(^[a-zA-Z][a-zA-Z\s]{0,20}[a-zA-Z]$)/");
    return regex_match(name, rgxStaffName);
}

void verifyLibrarianLog()
{
    cout << "\nWELCOME TO THE STAFF MENU.\n";

    cout << "\nEnter librarian details to continue:\n "
         << "\n 0. for Staff ID. "
         << "\n 1. for Staff Name. "
         << "\n 4. to Exit. " << endl;

    // variable to hold user input
    string input = "";

    // check the regex for librarian ID
    while (input != "0" && input != "4")
    {
        cout << "Enter your Staff ID: " << endl;
        cin >> input;

        switch (verifyStaffID(input))
        {
        case true:
            if (input == "0")
            {
                // check regex for librarian name
                while (input != "1" || input != "4")
                {
                    cout << "Enter your Staff Name: " << endl;
                    cin >> input;

                    switch (verifyStaffName(input))
                    {
                    case true:
                        if (input == "1")
                        {
                            return;
                        }
                        else if (input == "4")
                        {
                            exit(0);
                        }
                        else
                        {
                            cout << "Staff Name not recognised. " << endl;
                        }
                        break;

                    default:
                        cout << "Invalid name format " << endl;
                        break;
                    }
                }
            }
            else
            {
                cout << "Librarian details are not recognised. " << endl;
            }
        default:
            cout << "Staff ID not recognised. " << endl;
            break;
        }
    }
}


int main()
{
    // start message
    cout << "\nLIBRARY MANAGMENT SYSTEM FOR STAFF ONLY\n";

    // open the file
    LMS();

    // verify librarian login
    verifyLibrarianLog();

    // show the menu 
    printMenu();

    return 0;
};