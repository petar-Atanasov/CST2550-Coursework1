/*
Petar Atanasov
M00916537
*/
#pragma once
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include <regex>

using namespace std;

class Person
{
private:
    string name;
    string address;
    string email;

public:
    // default constructor 
    Person();
    // create the parametized constructor
    Person(string name, string address, string email);
    // setter methods
    void setName(string name);
    void setAddress(string address);
    void setEmail(string email);

    // getter methods
    string getName();
    string getAddress();
    string getEmail();
};

#endif // PERSON_H