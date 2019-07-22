# MACROS

SRC = ./src
INCLUDE = ./include
BIN = ./bin
OBJ = ./obj
CXX = g++
CXXFLAGS = -g -std=c++11 -I$(INCLUDE)

SOURCES = $(subst $(SRC)/, $(OBJ)/, $(wildcard $(SRC)/*.cpp))
OBJECTS = $(patsubst %.cpp, %.o, $(SOURCES))

# Compilation

build: dir-tree main

main: $(OBJECTS)
	@echo [Build] $@
	@$(CXX) $(CXXFLAGS) -o $(BIN)/$@ $^ 

$(OBJ)/%.o: $(SRC)/%.cpp 
	@echo [Compile] $(notdir $<)
	@$(CXX) $(CXXFLAGS) -o $@ -c $<

.PHONY: clean

dir-tree:
	@echo 'Create directory $(BIN)'
	@mkdir -p $(BIN)
	@echo 'Create directory $(OBJ)'
	@mkdir -p $(OBJ)

clean:
	@echo 'Remove bin/ folder'
	@rm -rf $(BIN)
	@echo 'Remove obj/ folder'
	@rm -rf $(OBJ)
