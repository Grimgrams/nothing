CC =gcc
CFLAGS = -Wall -Wextra -02
TARGET = nothing

all: $(TARGET)

$(TARGET): nothing.o
$(CC) $(CFLAGS) -o $(TARGET) nothing.o

nothing.o: nothing.c
	$(CC) $(CFLAGS) -c nothing.c

clean:
rm -f *.o $(TARGET)

.PHONY: all clean
