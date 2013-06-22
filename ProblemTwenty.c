/*ArrayLikeInt.c*/
#include "ProblemTwenty.h"


/* Function: set_factorial
 * @param:	nth, the size of the factorial to be calculated.
 * 			ali_len, the length of the array that will be set according to the size of the factorial.
 *			ali_sig_fig, the largest index that holds a value.
 * @return:	array_like_int, a pointer to an array whos contents hold the digits of the nth factorial.
 *
 * Creates an array of size n*n, then proceeds to multiply the contents, like an array, by values 1-n. 
 * Producing an array whos each index holds a significant digit of the nth factorial.
 */
int* set_factorial(int nth, int* ali_len, int* ali_sig_fig){
	int* array_like_int;
	int i;
	(*ali_len) = nth*nth;
	(*ali_sig_fig) =0;
	array_like_int = malloc((*ali_len)*(sizeof(int)));
	fill_array(array_like_int, *ali_len,0);
	array_like_int[0] = 1;
	for(i=1;i<=nth;i++){
		multiply_array_like_int(array_like_int,*ali_len,ali_sig_fig,i);
	}
	return array_like_int;
}

/* This Program will prompt the user to enter a number. If zero or non-digit number is entered, it will begin to exit. Otherwise
 * it will calculate and store the nth factoral in an array, with each index holding a significant digit. It will take the sum 
 * of those digits and display.
 */
int main(){
	int* array_like_int, ali_len, ali_sig_fig, sum, nth;
	char* inputted;
	fprintf(stdout,"This Program will display the sum of all digits for the number n!, where n is an inputted number."
			     	"\nEntering zero or a non-digit number will exit the program.");
	
	while(1){
		/* Prompts the user for input.*/
		fprintf(stdout,"\n\nPlease enter a desired value of n, followed by the enter key:\t");
		scanf("%s",inputted);
		nth = atoi(inputted);
		/* If invalid input was entered, the loop will break and the program will exit.*/
		if(nth==0){
			break;
		}
		/*Otherwise it displays the sum of all digits in the entered n factorial.*/
		array_like_int = set_factorial(nth,&ali_len,&ali_sig_fig);
		sum = array_sum(array_like_int,ali_sig_fig+1);
		free(array_like_int);
		fprintf(stdout,"\nThe sum of digits of n! is:\t%d",sum);
	}
	return 0;
}
