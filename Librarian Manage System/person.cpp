/*
Petar Atanasov
M00916537
*/
#include "person.h"
using namespace std;

// pass the default constructor
Person::Person() {}

// pass the parameterized constructor
Person::Person(string name, string address, string email) {}

// setter methods from person.h
void Person::setName(string nm)
{
    cout << "\nWELCOME\n";
    regex rgxNM("[a-zA-Z -]+");

    cout << "\nEnter your name: " << endl;
    cin >> nm;

    while (!regex_match(nm, rgxNM))
    {
        cout << "The entered name was wrong! Please try again: " << endl;
        cin >> nm;
    }
    name = nm;
}
void Person::setAddress(string adrs)
{
    regex rgxADDR("[a-zA-Z0-9 -]+");

    cout << "\nEnter your address: " << endl;
    cin >> adrs;

    while (!regex_match(adrs, rgxADDR))
    {
        cout << "The entered address was wrong! Please try again: " << endl;
        cin >> adrs;
    }
    address = adrs;
}
void Person::setEmail(string eml)
{
    regex rgxEml("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");

    cout << "\nEnter your email address: " << endl;
    cin >> eml;

    while (!regex_match(eml, rgxEml))
    {
        cout << "The entered email was wrong! Please try again: " << endl;
        cin >> eml;
    }
    email = eml;
}

// getter methods from person.h
string Person::getName()
{
    return name;
}
string Person::getAddress()
{
    return address;
}
string Person::getEmail()
{
    return email;
}