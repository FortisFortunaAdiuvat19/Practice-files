CC = gcc
flags := -Wall -I. -std=c23
ldflags := -lm

.PHONY: clean


all: fc

fc: filecompressor.o
	$(CC) $(flags) $^ -o $@ $(ldflags)

filecompressor.o: filecompressor.c
	$(CC) $(flags) -c $^

clean:
	rm -f *.o zz