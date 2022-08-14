snake: createBoard.o retPotential.o printBoardRev.o printBoard.o freeBoard.o main.o
	gcc -Wall -std=c99 createBoard.o retPotential.o printBoardRev.o printBoard.o freeBoard.o main.o -o snake

createBoard.o: createBoard.c header.h
	gcc -Wall -std=c99 -c createBoard.c

retPotential.o: retPotential.c header.h
	gcc -Wall -std=c99 -c retPotential.c

printBoard.o: printBoard.c header.h
	gcc -Wall -std=c99 -c printBoard.c

printBoardRev.o: printBoardRev.c header.h
	gcc -Wall -std=c99 -c printBoardRev.c

freeBoard.o: freeBoard.c header.h
	gcc -Wall -std=c99 -c freeBoard.c

main.o: main.c header.h
	gcc -Wall -std=c99 -c main.c

clean:
	rm *.o snake