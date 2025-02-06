# Simple Makefile for hello.c
CC = gcc

TARGET = hello
SRC = hello.c

# all is just a name, there is nothing special about it
# you could juist as easily call it "fred".  This setup
# will work and will give the message "nothing to be done"
# if the timestamp on hello.c is newer than the timestamp of
# hello. 

all: $(TARGET)
hello: hello.c
	$(CC) -o $(TARGET) $(SRC)

clean:
	rm -f $(TARGET)