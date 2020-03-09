# Macros
SRC=src
INCLUDE=include
OBJ=obj
BIN=bin

SRCS=$(wildcard $(SRC)/*.cpp)
OBJS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SRCS))
TARGET=$(BIN)/GumballMachine

# Build Commands
CXX=g++
FLAGS=-std=c++11 -g -I$(INCLUDE)

.PHONY: all dir-tree

all: dir-tree $(TARGET)

$(TARGET): $(OBJS)
	@echo "[BUILD] $(notdir $(TARGET))"
	@$(CXX) $(FLAGS) -o $@ $^

$(OBJ)/%.o: $(SRC)/%.cpp
	@echo "[COMPILE] $(notdir $@)"
	@$(CXX) $(FLAGS) -o $@ -c $< 

dir-tree:
	@echo "[DIR] Create Object Directory"
	@mkdir -p $(OBJ)
	@echo "[DIR] Create Binary Directory"
	@mkdir -p $(BIN)

.PHONY: clean

clean:
	@echo "[CLEAN] Remove Object Files"
	@rm -rf $(OBJ)
	@echo "[CLEAN] Remove Binary Files"
	@rm -rf $(BIN)
