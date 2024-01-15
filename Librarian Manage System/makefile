CXX = g++
CXXFLAGS = -g -Wall -Wextra -Wpedantic

.PHONY : all
all : program Catch2test

Catch2test : test.cpp person.o member.o book.o librarian.o
	$(CXX) $(CXXFLAGS) -o $@ $^

program : main.cpp person.o member.o book.o librarian.o
	$(CXX) $(CXXFLAGS) -o $@ $^

person.o : person.cpp person.h
	$(CXX) $(CXXFLAGS) -c $<

member.o : member.cpp member.h
	$(CXX) $(CXXFLAGS) -c $<

book.o : book.cpp book.h
	$(CXX) $(CXXFLAGS) -c $<

librarian.o : librarian.cpp librarian.h
	$(CXX) $(CXXFLAGS) -c $<

.PHONY : clean
clean : 
	rm *.o
	rm program
	rm Catch2test