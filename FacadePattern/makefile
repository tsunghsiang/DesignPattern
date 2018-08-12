# MACROS

CPP      = g++
SRC      = ./src
INCLUDE  = ./include
CPPFLAGS = -g -std=c++11 -I $(INCLUDE)

DEP_OBJ = main.o \
		  HomeTheaterFacade.o \
		  Amplifier.o \
		  CdPlayer.o \
		  DvdPlayer.o \
		  PopcornPopper.o \
		  Projector.o \
		  Screen.o \
		  TheaterLights.o \
		  Tuner.o

# TARGETS

main: $(DEP_OBJ)	
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAGS) -o $@ $^; rm -rf *.o)

main.o: $(SRC)/main.cpp $(INCLUDE)/HomeTheaterFacade.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

HomeTheaterFacade.o: $(SRC)/HomeTheaterFacade.cpp $(INCLUDE)/HomeTheaterFacade.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

Amplifier.o: $(SRC)/Amplifier.cpp $(INCLUDE)/Amplifier.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

CdPlayer.o: $(SRC)/CdPlayer.cpp $(INCLUDE)/CdPlayer.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

DvdPlayer.o: $(SRC)/DvdPlayer.cpp $(INCLUDE)/DvdPlayer.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

PopcornPopper.o: $(SRC)/PopcornPopper.cpp $(INCLUDE)/PopcornPopper.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

Projector.o: $(SRC)/Projector.cpp $(INCLUDE)/Projector.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

Screen.o: $(SRC)/Screen.cpp $(INCLUDE)/Screen.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

TheaterLights.o: $(SRC)/TheaterLights.cpp $(INCLUDE)/TheaterLights.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

Tuner.o: $(SRC)/Tuner.cpp $(INCLUDE)/Tuner.hpp
	@(echo "Building " $@ " ...")
	@($(CPP) $(CPPFLAGS) -c -o $@ $<)

# CLEAN

clean:
	@(echo "Remove object executable files ...")
	@(rm -rf main *.o)
