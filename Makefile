ccat: ccat.o
	gcc -o ccat ccat.o

ccat.o:
	gcc -c ccat.c

clean: 
	rm -fr ccat ccat.o

install:
	cp ccat /usr/bin
