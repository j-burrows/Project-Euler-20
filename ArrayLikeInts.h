/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Filename:	ArrayLikeInts.h
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Author:		Jonathan Burrows
 |	Date:		November 12th 2012
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
#ifndef ARRAYLIKEINTS_H
#define ARRAYLIKEINTS_H 1
#include <stdio.h>
#include <stdlib.h>

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Subroutine:	print_ali
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	prints an array like integer
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	@param:	array_like_int, the array that will be displayed like an integer.
 | 			ali_sig_fig, 	largest sigificant figure of the array, the index which will be 
 |			first displayed.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void print_ali(int* array_like_int, int ali_sig_fig);

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Subroutine:	fill_array
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	fills an array with a given value.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	@param:		array, 		the array whos contents will be filled.
 |				array_len, 	the length of the passed array.
 |				value, 		the value that all elements in the array will be set to.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void fill_array(int* array, int array_len, int value);

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	array_sum
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	sums all elements in an array
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	@param:		array, 		the array whos elements will be summed.
 |				array_len, 	the length of the passed in array.
 | 	@return:	the sum of all elements in the array.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
int array_sum(int* array, int array_len);
/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Subroutine:	multiply_array_like_int
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Purpose:	multiplies an array as if it were an integer
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	@param:		array_like_int, the array whos contents will be altered to hold the product 
 |							of itself with a given value.
 |				ali_len, the length of the array passed in.
 |				ali_sig_fig, the value of the largest index who holds a value.
 |				mult, 		the value that will be multiplied to every element.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Algorithm:	goes through every element, from largest to smallest index, multiplying the 
 |				contents by the given value. If the product is greater than ten, it 
 |				continues to be carried over to the next index. Continues until there is no 
 |				remainder left.
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void multiply_array_like_int(int* array_like_int, int ali_len, int* ali_sig_fig, int mult);

#endif
