# Macro

CPP = g++
INCLUDE = ./include
SRC = ./src
CPPFLAG = -g -std=c++11 -I$(INCLUDE)

# Targets

DEP_OBJ = main.o \
		  RemoteControl.o \
		  MacroCommand.o \
		  StereoRadioOffCommand.o \
		  StereoRadioOnCommand.o \
		  StereoCdOffCommand.o \
		  StereoCdOnCommand.o \
		  StereoDvdOffCommand.o \
		  StereoDvdOnCommand.o \
		  Stereo.o \
		  GarageDoorLightOffCommand.o \
		  GarageDoorLightOnCommand.o \
		  GarageDoorCloseCommand.o \
		  GarageDoorOpenCommand.o \
		  GarageDoor.o \
		  CeilingFanOffCommand.o \
		  CeilingFanMediumCommand.o \
 		  CeilingFanLowCommand.o \
 		  CeilingFanHighCommand.o \
		  CeilingFan.o \
		  LightOffCommand.o \
		  LightOnCommand.o \
		  Light.o
			 
main: $(DEP_OBJ)
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -o $@ $^; rm -rf *.o)

main.o: $(SRC)/main.cpp $(INCLUDE)/*.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)	

RemoteControl.o : $(SRC)/RemoteControl.cpp $(INCLUDE)/RemoteControl.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

MacroCommand.o : $(SRC)/MacroCommand.cpp $(INCLUDE)/MacroCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

StereoRadioOffCommand.o : $(SRC)/StereoRadioOffCommand.cpp $(INCLUDE)/StereoRadioOffCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

StereoRadioOnCommand.o : $(SRC)/StereoRadioOnCommand.cpp $(INCLUDE)/StereoRadioOnCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

StereoDvdOffCommand.o : $(SRC)/StereoDvdOffCommand.cpp $(INCLUDE)/StereoDvdOffCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

StereoDvdOnCommand.o : $(SRC)/StereoDvdOnCommand.cpp $(INCLUDE)/StereoDvdOnCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

StereoCdOffCommand.o : $(SRC)/StereoCdOffCommand.cpp $(INCLUDE)/StereoCdOffCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

StereoCdOnCommand.o : $(SRC)/StereoCdOnCommand.cpp $(INCLUDE)/StereoCdOnCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

Stereo.o : $(SRC)/Stereo.cpp $(INCLUDE)/Stereo.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

GarageDoorLightOffCommand.o : $(SRC)/GarageDoorLightOffCommand.cpp $(INCLUDE)/GarageDoorLightOffCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

GarageDoorLightOnCommand.o : $(SRC)/GarageDoorLightOnCommand.cpp $(INCLUDE)/GarageDoorLightOnCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

GarageDoorCloseCommand.o : $(SRC)/GarageDoorCloseCommand.cpp $(INCLUDE)/GarageDoorCloseCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

GarageDoorOpenCommand.o : $(SRC)/GarageDoorOpenCommand.cpp $(INCLUDE)/GarageDoorOpenCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

GarageDoor.o : $(SRC)/GarageDoor.cpp $(INCLUDE)/GarageDoor.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

CeilingFanOffCommand.o : $(SRC)/CeilingFanOffCommand.cpp $(INCLUDE)/CeilingFanOffCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

CeilingFanMediumCommand.o : $(SRC)/CeilingFanMediumCommand.cpp $(INCLUDE)/CeilingFanMediumCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

CeilingFanLowCommand.o : $(SRC)/CeilingFanLowCommand.cpp $(INCLUDE)/CeilingFanLowCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

CeilingFanHighCommand.o : $(SRC)/CeilingFanHighCommand.cpp $(INCLUDE)/CeilingFanHighCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

CeilingFan.o : $(SRC)/CeilingFan.cpp $(INCLUDE)/CeilingFan.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

LightOffCommand.o : $(SRC)/LightOffCommand.cpp $(INCLUDE)/LightOffCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

LightOnCommand.o : $(SRC)/LightOnCommand.cpp $(INCLUDE)/LightOnCommand.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

Light.o : $(SRC)/Light.cpp $(INCLUDE)/Light.hpp
	@(echo "Generating " $@ " ...")
	@($(CPP) $(CPPFLAG) -c -o $@ $<)

clean:
	@(echo "Remove object and executable files ...")
	@(rm -rf *.o main)
