factorion: factorion.o
	gcc -o factorion -g factorion.o
factorion.o: factorion.c
	gcc -g -c -Wall factorion.c
clean:
	rm -f *.o factorion  
