CC=gcc

SRC= $(shell find . -name "*.c")
INCPATH=-I./

TARGET=list

all: test

test: $(TARGET)
	./$(TARGET) 

$(TARGET): $(SRC)
	$(CC) $(INCPATH) $^ -o $@

clean:
	rm -f $(TARGET)
