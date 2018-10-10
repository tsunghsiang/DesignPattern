# MACROS

SRC_DIR = .
INCLUDE_DIR = .
OBJ_DIR = .
INCLUDE = $(addprefix -I, $(INCLUDE_DIR))

CXX = g++
CXX_FLAGS = -g -D DEBUG -std=c++14

TARGET = main
SRC = $(shell find $(SRC_DIR) -name "*.cpp")

.PHONY: $(TARGET) clean

main: $(SRC)
	$(CXX) $(CXX_FLAGS) -o $@ $< 

clean:
	rm -rf $(OBJ_DIR)/%.o
	rm -rf $(TARGET)

