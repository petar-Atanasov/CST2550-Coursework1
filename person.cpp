#include "person.h"
using namespace std;

//pass the constructor 
Person::Person(){
    
    name = "";
    address = "";
    email = "";

    //setter methods from person.h
    void Person::setName(string name){
        name = name;
    }
    void Person::setAddress(string address){
        address = address;
    }
    void Person::setEmail(string email){
        email = email;
    }

    //getter methods from person.h
    string Person::getName(){
        return name;
    }
    string Person::getAddress(){
        return address;
    }
    string Person::getEmail(){
        return email;
    }
}