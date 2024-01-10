/*
Petar Atanasov
M00916537
*/
#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <vector>
#include "book.h"
#include "member.h"
#include "librarian.h"
#include "person.h"

using namespace std;

int main(){
    
    ifstream file("library_book.csv");
    if(file.is_open()){
        cout << "The file is open."
    }
    else {
        file.fail();
        cout << "The file failed to be open"
    }

    
    return 0;
};
