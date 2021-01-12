  
CC = g++ -std=c++11 -g -Wall
all: mergesort insertsort

mergesort:  merge.o util.o
	$(CC) merge.o util.o -o mergesort


insertsort:  insert.o util.o
	$(CC) insert.o util.o -o insertsort

insert.o: insert.cpp insert.h
	$(CC) -c insert.cpp
merge.o: merge.cpp merge.h
	$(CC) -c merge.cpp
util.o: util.cpp util.h
	$(CC) -c util.cpp


clean:
	rm *.o mergesort insertsort

tar:
	tar -cvf $(exe_file).tar *.cpp *.h Makefile