CC=gcc
AR=ar
CFLAGS= -Wall -pedantic -std=c99
SRCDIR=src
SOURCES=$(wildcard *.[hc])
CFILES=$(wildcard *.c)
OBJS=$(CFILES:.c=)
TOCLEAN=$(OBJS)

%: %.c
	$(CC) $(CFLAGS) -o $@ $<


all: $(OBJS)

clean:
	rm -fr $(TOCLEAN)
