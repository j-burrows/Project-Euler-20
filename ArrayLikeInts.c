/* ArrayLikeInts.c*/
#include "ArrayLikeInts.h"

/* Subroutine:	print_ali
 * @param:	array_like_int, the array that will be displayed like an integer.
 * 			ali_sig_fig, largest sigificant figure of the array, the index which will be first displayed.
 *
 * Starting from ali_sig_fig, every element from that down will be displayed to screen.
 */
void print_ali(int* array_like_int, int ali_sig_fig){
	int i;
	
	fprintf(stdout,"\n");
	for(i=ali_sig_fig;i>=0;i--){
		fprintf(stdout,"%d",array_like_int[i]);
	}
	fprintf(stdout,"\n");
}

/* Subroutine:	ArrayLikeInts
 * @param:	array, the array whos contents will be filled.
 *			array_len, the length of the passed array.
 *			value, the value that all elements in the array will be set to.
 *
 * Every element in an array is set to the given value.
 */
void fill_array(int* array, int array_len, int value){
	int i;
	for(i=0;i<array_len;i++){
		array[i] = value;
	}
}

/* Function:	array_sum
 * @param:	array, the array whos elements will be summed.
 *			array_len, the length of the passed in array.
 * @return:	the sum of all elements in the array.
 *
 * The sum is set to zero, then indexes 0-array_len of the array are added to the sum.
 */
int array_sum(int* array, int array_len){
	int sum = 0;
	int i;
	for(i=0;i<array_len;i++){
		sum+=array[i];
	}
	return sum;
}

/* Subroutine: multiply_array_like_int
 * @param:	array_like_int, the array whos contents will be altered to hold the product of itself with a given value.
 *			ali_len, the length of the array passed in.
 *			ali_sig_fig, the value of the largest index who holds a value, can be changed.
 *			mult, the value that will be multiplied to every element.
 *
 * goes through every element, from largest to smallest index, multiplying the contents by the given value. If
 * the product is greater than ten, it continues to be carried over to the next index. Continues until there is no 
 * remainder left.
 */
void multiply_array_like_int(int* array_like_int, int ali_len, int* ali_sig_fig, int mult){
	int product;
	int i, j;
	for(i=(*ali_sig_fig);i>=0;i--){
		product = (array_like_int[i]) * (mult);
		array_like_int[i] = 0;
		for( j=0; (j+i) <ali_len; j++){
			if((j+i) > (*ali_sig_fig)){
				(*ali_sig_fig) = i+j;
			}
			product += array_like_int[i+j];
			array_like_int[i+j] = product % 10;
			product /= 10;
			if(product > 0){
				continue;
			}
			else break;
		}
	}
}