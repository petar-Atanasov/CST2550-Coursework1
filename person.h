#pragma once 
#ifndef PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
#include "member.h"
#include "librarian.h"

using namespace std;

class Person {
    private: 
    string name;
    string address;
    string email;

    public:
    //create the constructor 
    Person();
    //setter methods 
    void setName(string name);
    void setAddress(string address);
    void setEmail(string email);

    //getter methods 
    string getName();
    string getAddress();
    string getEmail();
};


#endif //PERSON_H