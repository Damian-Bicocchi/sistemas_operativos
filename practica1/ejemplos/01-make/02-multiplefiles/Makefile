CFLAGS = -Wall --std=c11

all: revert

dlinkedlist.o: dlinkedlist.h

revert: dlinkedlist.o revert.c
	gcc $(CFLAGS) dlinkedlist.o revert.c -o revert

clean:
	rm -f dlinkedlist.o revert

run: revert
	./revert

.PHONY: all clean run
