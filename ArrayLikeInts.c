/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Filename:	ArrayLikeInts.h
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
#include "ArrayLikeInts.h"

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Subroutine:	print_ali
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void print_ali(int* array_like_int, int ali_sig_fig){
	int i;
	
	fprintf(stdout,"\n");
	for(i=ali_sig_fig;i>=0;i--){
		fprintf(stdout,"%d",array_like_int[i]);
	}
	fprintf(stdout,"\n");
}

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Subroutine:	fill_array
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
void fill_array(int* array, int array_len, int value){
	int i;
	for(i=0;i<array_len;i++){
		array[i] = value;
	}
}

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Function:	array_sum
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
*/
int array_sum(int* array, int array_len){
	int sum = 0;
	int i;
	for(i=0;i<array_len;i++){
		sum+=array[i];
	}
	return sum;
}

/*-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
 |	Subroutine:	multiply_array_like_int
 +-- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---
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