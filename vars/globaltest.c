#include <stdio.h>
#include <stdlib.h>
#define MAXLENGTH 10
#define MINLENGTH 0
/* Completely broken, when integer is inputted it seg faults, when a str is inputted it makes space
 *
 *
 *
 * maybe removing int from ain()?
*/


main(){
	char *input = malloc(sizeof(input[10]));
	input[10];
	if(input > MINLENGTH || input < MAXLENGTH)
		for (int i = 0; i < MAXLENGTH; i++)
			scanf("%d", &input);
			for (int c = 0; c < MAXLENGTH; c++)
				printf("%s\n",&input[c]);
			





}
