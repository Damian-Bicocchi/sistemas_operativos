all: helloworld

helloworld: helloworld.c
	gcc -Wall --std=c99 -o helloworld helloworld.c

clean:
	rm -f helloworld

run: helloworld
	./helloworld

.PHONY: all clean run
