# Makefile for Nibbles
SRC_DIR :=
OBJ_DIR := /obj
SRC_FILES := $(wildcard *.cpp)
OBJ_FILES := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC_FILES))
# -wall prints all warning messages
# -g
LDFLAGS :=
CPPFLAGS :=
CXXFLAGS :=

# OBJS := casino.o main.o nibAbstractView.o Nibbles.o nibBoard.o \
nibCoord.o nibGame.o nibSnake.o nibTextView.o

# SRC_FILES := $(wildcard /*.cpp)

nibbles: $(OBJ_FILES)
	gcc $(LDFLAGS) -o $@ $^

# Automatic dependency graph generation
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	gcc $(CPPFLAGS) $(CXXFLAGS) -c -o $@ $<

