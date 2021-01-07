  
CC = g++ -std=c++11 -g -Wall
all: mergesort insertsort

mergesort:  merge.o file_io.o
	$(CC) merge.o file_io.o -o mergesort


insertsort:  insert.o file_io.o
	$(CC) insert.o file_io.o -o insertsort

insert.o: insert.cpp insert.h
	$(CC) -c insert.cpp
merge.o: merge.cpp merge.h
	$(CC) -c merge.cpp
file_io.o: file_io.cpp file_io.h
	$(CC) -c file_io.cpp


clean:
	rm *.o $(exe_file)

tar:
	tar -cvf $(exe_file).tar *.cpp *.h bft.txt Makefile