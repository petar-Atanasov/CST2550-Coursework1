#include "person.h"
using namespace std;

//pass the constructor 
Person::Person(/*const string&*/ string name, /*const string&*/ string address, /*const string&*/ string email)
    /*: name(name), address(address), email(email)*/{}    

//setter methods from person.h
    void Person::setName(/*const string&*/ string nm){
        name = nm;
        cout << "Enter your name. "<< endl;
        cin >> nm;
    }
    void Person::setAddress(/*const string&*/ string adrs){
        address = adrs;
        cout << "Enter your address. "<< endl;
        cin >> adrs;
    }
    void Person::setEmail(/*const string&*/ string eml){
        email = eml;
        cout << "Enter you email address. "<< endl;
        cin >> eml;
    }

    //getter methods from person.h
    string Person::getName() const {
        return name;
    }
    string Person::getAddress() const {
        return address;
    }
    string Person::getEmail() const {
        return email;
    }