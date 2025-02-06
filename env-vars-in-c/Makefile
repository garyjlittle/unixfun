CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGETS = makefile_env getenv
MYINT = 47

all: $(TARGETS)

makefile_env: makefile_env.o
	$(CC) $(CFLAGS) -o makefile_env makefile_env.o

makefile_env.o: makefile_env.c
	$(CC) $(CFLAGS) -DMYINT=$(MYINT) -c makefile_env.c

getenv: getenv.o
	$(CC) $(CFLAGS) -o getenv getenv.o

getenv.o: getenv.c
	$(CC) $(CFLAGS) -c getenv.c

clean:
	rm -f $(TARGETS) *.o