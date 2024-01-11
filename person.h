#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "member.h"
#include "librarian.h"

using namespace std;

class Person
{
private:
    string name;
    string address;
    string email;

public:
    // create the constructor
    Person(const string& name, const string& address, const string& email);
    // setter methods
    void setName(const string &nm);
    void setAddress(const string &adrs);
    void setEmail(const string &eml);

    // getter methods
    string getName() const;
    string getAddress() const;
    string getEmail() const;
};

#endif // PERSON_H