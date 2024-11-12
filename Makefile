CC = gcc
CFLAGS = -Wall -Wextra -O2
LDFLAGS = -L$(PWD) -lnothingx
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
	cp $(LIB) /usr/local/lib/
	mkdir /usr/local/include/nothingx
	cp nothingx.h nothingx.c /usr/local/include/nothingx/

clean:
	rm -f *.o $(TARGET) $(LIB)

.PHONY: all clean
