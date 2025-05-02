#COMPILE 

CC = gcc 

#COMPILER FLAGS

CFLAGS = -Wall -Wextra -I./src

#SOURCE AND OBJECT FILES

SRC = $(wildcard src/*.c)
OBJ = $(SRC:.c=.o)

#OUTPUT EXECUTABLE
TARGET = ./text2json

# Default rule
all: $(TARGET)

# Link object files into the final binary
$(TARGET): $(OBJ)
	$(CC) $(OBJ) -o $@

# Compile .c to .o
src/%.o: src/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean compiled files
clean:
	rm -f src/*.o $(TARGET)