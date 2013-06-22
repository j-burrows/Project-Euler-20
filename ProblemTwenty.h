/* ProblemTwenty.h
 *
 * Purpose: To make a program that can compute and display n factorial, where n is a given number.
 *
 * Author:	Jonathan Burrows
 * Date:	November 12th 2012
 */
#ifndef PROBLEMTWENTY_H
#define PROBLEMTWENTY_H 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ArrayLikeInts.h"

/* sets an array to hold a factorial n! as if each index were a digit in an integer.*/
int* set_factorial(int nth, int* ali_len, int* ali_sig_fig);

#endif
