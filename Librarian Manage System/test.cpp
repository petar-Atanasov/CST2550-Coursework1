/*
Petar Atanasov
M00916537
*/

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "person.h"
#include "member.h"
#include "book.h"
#include "librarian.h"


// create a test case for person
TEST_CASE("Test person file", "[Person]"){
    Person person;
    person.setName("Winnie the Poooh");
    person.setAddress("100 Aker Wood");
    person.setEmail("winnieThePooh@yahoo.com");
    REQUIRE(person.getName("Winnie the Poooh"));
    REQUIRE(person.getAddress("100 Aker Wood"));
    REQUIRE(person.getEmail("winnieThePooh@yahoo.com"));
}

// create a test case for member
TEST_CASE("Test member file", "[Member]"){
    Member member(0, "Winnie the Poooh", "100 Aker Wood", "winnieThePooh@yahoo.com");
    REQUIRE(member.getMemberID("0"));
    REQUIRE(member.getName("Winnie the Poooh"));
    REQUIRE(member.getAddress("100 Aker Wood"));
    REQUIRE(member.getAddress("winnieThePooh@yahoo.com"));
} 

// create a test case for book
TEST_CASE("Test book file", "[Book]"){
    Book book(34, "Nature", "Ralp Waldo", "Emerson");
    REQUIRE(book.getbookID() == "34");
    REQUIRE(book.getbookName() == "Nature");
    REQUIRE(book.getAuthorFristName() == "Ralp Waldo");
    REQUIRE(book.getAuthorLastName() == "Emerson");
}

// create a test case for librarian
TEST_CASE("Test librarian file", "[Librarian]"){
    Librarian librarian(00045, "Eren Jeager", "Paradis Island", "eren.Jeager@yahoo.com", 45000);
    REQUIRE(librarian.getStaffID() == 00045);
    REQUIRE(librarian.getName() == "Eren Jeager");
    REQUIRE(librarian.getAddress() == "Paradis Island");
    REQUIRE(librarian.getEmail() == "eren.Jeager@yahoo.com");
    REQUIRE(librarian.getSalary() == 45000);
}