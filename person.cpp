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
    cout << "Enter your name: " << endl;
    cin >> nm;
    name = nm;
}
void Person::setAddress(string adrs)
{
    cout << "Enter your address: " << endl;
    cin >> adrs;
    address = adrs;
}
void Person::setEmail(string eml)
{
    regex rgxEml(("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+"));
    do
    {
        cout << "Enter your email address: " << endl;
        cin >> eml;

        if (!regex_match(eml, rgxEml))
        {
            cout << "The entered email was wrong! Please try again: " << endl;
            cin >> eml;
        }
    } while (!regex_match(eml, rgxEml));

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