CC=gcc
AR=ar
CFLAGS= -Wall -pedantic -std=c99
SRCDIR=src
SOURCES=$(wildcard $(SRCDIR)/*.[hc])
CFILES=$(wildcard $(SRCDIR)/*.c)
OBJS=$(CFILES:.c=.o)

SUBDIRS = src tests

.PHONY: subdirs $(SUBDIRS)

subdir: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

tests: src

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) clean -C $$dir; \
		done
