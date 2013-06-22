/*ArrayLikeInts.h*/
#ifndef ARRAYLIKEINTS_H
#define ARRAYLIKEINTS_H 1
#include <stdio.h>
#include <stdlib.h>

/* prints an array like integer*/
void print_ali(int* array_like_int, int ali_sig_fig);

/* fills an array with a given value.*/
void fill_array(int* array, int array_len, int value);

/* sums all elements in an array */
int array_sum(int* array, int array_len);

/* multiplies an array as if it were an integer */
void multiply_array_like_int(int* array_like_int, int ali_len, int* ali_sig_fig, int mult);

#endif
