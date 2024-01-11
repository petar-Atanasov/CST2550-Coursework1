#include "person.h"
using namespace std;

//pass the constructor 
Person::Person(const string& name, const string& address, const string& email)
    : name(name), address(address), email(email){}    

//setter methods from person.h
    void Person::setName(const string& nm){
        name = nm;
    }
    void Person::setAddress(const string& adrs){
        address = adrs;
    }
    void Person::setEmail(const string& eml){
        email = eml;
    }

    //getter methods from person.h
    string Person::getName() const {
        cout << "Enter your name. "<< endl;
        cin >> name;

        return name;
    }
    string Person::getAddress() const {
        cout << "Enter your address. "<< endl;
        cin >> address;
        return address;
    }
    string Person::getEmail() const {
        cout << "Enter you email address. "<< endl;
        cin >> email;
        return email;
    }