all: 
	gcc -o ccat ccat.c

install:
	gcc -o ccat ccat.c
	cp ccat /usr/bin

clean: rm -fr ccat
