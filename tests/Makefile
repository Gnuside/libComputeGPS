CC=gcc
AR=ar
CFLAGS= -Wall -pedantic -std=c99 -I../src
SRCDIR=src
SOURCES=$(wildcard *.[hc])
CFILES=$(wildcard *.c)
OBJS=$(CFILES:.c=.o)
TOCLEAN=$(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

tests: $(OBJS)
	$(CC) $(CFLAGS) -o tests tests.c

all: tests $(OBJS)

run: tests
	./tests

clean:
	rm -fr $(TOCLEAN)
