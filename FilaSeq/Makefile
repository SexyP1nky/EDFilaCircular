CC = gcc
CFLAGS = -Wall -Wextra -std=c99
TARGET = fila_circular

all: $(TARGET)

$(TARGET): main.o FilaCircular.o
	$(CC) $(CFLAGS) -o $(TARGET) main.o FilaCircular.o

main.o: main.c FilaCircular.h
	$(CC) $(CFLAGS) -c main.c

FilaCircular.o: FilaCircular.c FilaCircular.h
	$(CC) $(CFLAGS) -c FilaCircular.c

clean:
	rm -f *.o $(TARGET)
