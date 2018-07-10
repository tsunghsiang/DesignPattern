# Macros

SRC=./src
INCLUDE=./include
CPP=g++
CPPFLAGS=-g -std=c++11 -I$(INCLUDE)

# Targets

DEP_OBJ = main.o \
		  DuckAdapter.o \
		  MallardDuck.o \
		  TurkeyAdapter.o \
		  WildTurkey.o

main : $(DEP_OBJ)
	@(echo "Generating " $@ "...")
	@($(CPP) $(CPPFLAGS) -o $@ $^; rm -rf *.o)

main.o : $(SRC)/main.cpp $(INCLUDE)/*.hpp
	@(echo "Building " $@ "...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

DuckAdapter.o : $(SRC)/DuckAdapter.cpp $(INCLUDE)/DuckAdapter.hpp
	@(echo "Building " $@ "...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

MallardDuck.o : $(SRC)/MallardDuck.cpp $(INCLUDE)/MallardDuck.hpp
	@(echo "Building " $@ "...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

TurkeyAdapter.o : $(SRC)/TurkeyAdapter.cpp $(INCLUDE)/TurkeyAdapter.hpp
	@(echo "Building " $@ "...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

WildTurkey.o : $(SRC)/WildTurkey.cpp $(INCLUDE)/WildTurkey.hpp
	@(echo "Building " $@ "...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

clean:
	@(echo "Remove object and executable files ...")
	@(rm -rf main *.o)
