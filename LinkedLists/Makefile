CC=gcc

SRC= $(shell find ./src -name "*.c")
INCPATH=-I./hdr

CFLAGS=-g -Wall

TARGET=list

all: test

test: $(TARGET)
	./$(TARGET) 

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(INCPATH) $^ -o $@

clean:
	rm -f $(TARGET)
