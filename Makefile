CC=gcc
AR=ar
MAKE=make
CFLAGS= -Wall -pedantic -std=c99
SRCDIR=src
SOURCES=$(wildcard $(SRCDIR)/*.[hc])
CFILES=$(wildcard $(SRCDIR)/*.c)
OBJS=$(CFILES:.c=.o)


SUBDIRS = src

.PHONY: subdirs $(SUBDIRS)

subdir: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

tests: src
	$(MAKE) -C $@

run_test: src tests
	$(MAKE) -C $@ run

clean:
	for dir in $(SUBDIRS); do \
		$(MAKE) clean -C $$dir; \
		done
