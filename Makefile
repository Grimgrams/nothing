CC = gcc
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -L$(PWD) -lnothingx

PREFIX ?= /usr/local
LIBDIR = $(PREFIX)/lib
INCLUDEDIR = $(PREFIX)/include/nothingx

INCLUDES = -I$(PWD)
TARGET = nothing
LIB = libnothingx.a


all: $(LIB) $(TARGET)

$(LIB): nothingx.o
	ar rcs $(LIB) nothingx.o

nothingx.o: nothingx.c nothingx.h
	$(CC) $(CFLAGS) -c nothingx.c

$(TARGET): nothing.o
	 $(CC) $(CFLAGS) -o $(TARGET) nothing.o $(LDFLAGS)

nothing.o: nothing.c nothingx.h
	$(CC) $(CFLAGS) $(INCLUDES) -c nothing.c

install:
	install -d $(DESTDIR)$(LIBDIR)
	install -d $(DESTDIR)$(INCLUDEDIR)

	install -m 755 $(LIB) $(DESTDIR)$(LIBDIR)
	install -m 644 nothingx.h nothingx.c $(DESTDIR)$(INCLUDEDIR)


clean:
	rm -f *.o $(TARGET) $(LIB)

.PHONY: all clean
