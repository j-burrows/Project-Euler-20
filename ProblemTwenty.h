/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Filename:	ProblemTwenty.h
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	To make a program that can compute and display n factorial, where n is a 
 |				given number.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Author:		Jonathan Burrows
 |	Date:		November 12th 2012
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
#ifndef PROBLEMTWENTY_H
#define PROBLEMTWENTY_H 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayLikeInts.h"

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	set_factorial
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	Creates an array of size n*n, then proceeds to multiply the contents, like 
 |				an array, by values 1-n. Producing an array whos each index holds a 
 |				significant digit of the nth factorial.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
int* set_factorial(int nth, int* ali_len, int* ali_sig_fig);

#endif
