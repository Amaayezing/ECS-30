paint.out: main.o board.o addAndDelete.o drawLines.o getInput.o
	gcc -g -Wall -Werror -o paint.out main.o board.o addAndDelete.o drawLines.o getInput.o
	
board.o: board.c board.h inputStruct.h
	gcc -g -Wall -Werror -c -o board.o board.c
	
main.o: main.c board.h getInput.h inputStruct.h
	gcc -g -Wall -Werror -c -o main.o main.c
	
addAndDelete.o: addAndDelete.c addAndDelete.h getInput.h inputStruct.h board.h
	gcc -g -Wall -Werror -c -o addAndDelete.o addAndDelete.c

drawLines.o: drawLines.c drawLines.h inputStruct.h getInput.h board.h
	gcc -g -Wall -Werror -c -o drawLines.o drawLines.c

getInput.o: getInput.c getInput.h inputStruct.h board.h drawLines.h addAndDelete.h
	gcc -g -Wall -Werror -c -o getInput.o getInput.c
	
clean:
	rm -f *.o *.out
