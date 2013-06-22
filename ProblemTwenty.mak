#ProblemTwenty.mak
CC = gcc
WARNINGS = -Wall

all: ProblemTwenty.exe

ProblemTwenty.exe: ProblemTwenty.o ArrayLikeInts.o
	$(CC) $(WARNINGS) ArrayLikeInts.o ProblemTwenty.o -o ProblemTwenty
	
ArrayLikeInts.o: ArrayLikeInts.c ArrayLikeInts.h
	$(CC) -c ArrayLikeInts.c
	
ProblemTwenty.o: ProblemTwenty.c ProblemTwenty.h
	$(CC) -c ProblemTwenty.c

clean:
	rm -rf *o ProblemTwenty.exe
