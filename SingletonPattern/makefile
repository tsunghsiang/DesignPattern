# MACRO

CPP = g++
CPPFLAG = -std=c++11 -g

# TARGET

main: main.o ChocolateBoiler.o
	@(echo "Compiling " $@ " ...")
	@($(CPP) $(CPPFLAG) -o $@ $^)

main.o: main.cpp ChocolateBoiler.hpp 
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c $<)

ChocolateBoiler.o: ChocolateBoiler.cpp ChocolateBoiler.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c $<)

clean: 
	@(echo "Remove all executable and object files ...")
	@(rm -rf *.o main)
