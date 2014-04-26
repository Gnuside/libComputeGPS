CC=gcc
AR=ar
CFLAGS= -Wall -pedantic -std=c99 -I.
SRCDIR=src
SOURCES=$(wildcard *.[hc])
CFILES=$(wildcard *.c)
OBJS=$(CFILES:.c=.o)
LIBOBJ=libComputeGPS.so
TOCLEAN=$(LIBOBJ) $(OBJS)

%.o: %.c
	$(CC) -c $(CFLAGS) -o $@ $<

$(LIBOBJ): $(OBJS)
	$(CC) -shared -o $@ $(OBJS)


all: $(LIBOBJ)

clean:
	rm -fr $(TOCLEAN)
