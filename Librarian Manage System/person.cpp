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
void Person::setName(string name)
{
    cout << "\nWELCOME\n";
    regex rgxNM("^ [a-z] [-a-z0-9_]*$");

    cout << "\nEnter your name: " << endl;
    cin >> name;

    while (!regex_match(name, rgxNM))
    {
        cout << "The entered name was wrong! Please trt again: " << endl;
        cin >> name;
    }
    name = name;
}
void Person::setAddress(string address)
{
    regex rgxADDR("[A-Za-z0-9'.-s,]");

    cout << "\nEnter your address: " << endl;
    cin >> address;

    while (!regex_match(address, rgxADDR))
    {
        cout << "The entered address was wrong! Please trt again: " << endl;
        cin >> address;
    }
    address = address;
}
void Person::setEmail(string email)
{
    regex rgxEml(("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+"));

    cout << "\nEnter your email address: " << endl;
    cin >> email;

    while (!regex_match(email, rgxEml))
    {
        cout << "The entered email was wrong! Please try again: " << endl;
        cin >> email;
    }
    email = email;
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