  
CC = g++ -std=c++11 -g -Wall
all: mergesort insertsort insertTime mergeTime

mergesort:  merge.o util.o mergesort.o
	$(CC) merge.o util.o mergesort.o -o mergesort

insertsort:  insert.o util.o insertsort.o
	$(CC) insert.o util.o insertsort.o -o insertsort

insertTime:  insertsort.o util.o insertTime.o
	$(CC) insertsort.o util.o insertTime.o -o insertTime

mergeTime:  mergesort.o util.o mergeTime.o
	$(CC) mergesort.o util.o mergeTime.o -o mergeTime

insert.o: insert.cpp insert.h
	$(CC) -c insert.cpp
merge.o: merge.cpp merge.h
	$(CC) -c merge.cpp
mergesort.o: mergesort.cpp mergesort.h
	$(CC) -c mergesort.cpp
insertsort.o: insertsort.cpp insertsort.h
	$(CC) -c insertsort.cpp
util.o: util.cpp util.h
	$(CC) -c util.cpp
insertTime.o: insertTime.cpp insertTime.h
	$(CC) -c insertTime.cpp
mergeTime.o: mergeTime.cpp mergeTime.h
	$(CC) -c mergeTime.cpp


clean:
	rm *.o mergesort insertsort insertTime mergeTime

tar:
	tar -cvf $(exe_file).tar *.cpp *.h Makefile