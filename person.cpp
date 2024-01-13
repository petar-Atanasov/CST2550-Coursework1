/*
Petar Atanasov
M00916537
*/
#include "person.h"
using namespace std;

// pass the default constructor 
Person::Person(){}

// pass the parameterized constructor
Person::Person(string name, string address, string email) {}

// setter methods from person.h
void Person::setName(string nm)
{
    this->name = nm;
}
void Person::setAddress(string adrs)
{
    this->address = adrs;
}
void Person::setEmail(string eml)
{
    this->email = eml;
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