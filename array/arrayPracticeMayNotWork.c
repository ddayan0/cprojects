#include <stdio.h>
#include <stdlib.h>
/* so basically this program does something, i just dont know what
 * it fucking does. it compiles but then spits out a random number
 *
 *
 *nvm its fucking broken, just outputs 0
 *
 *
 *HAHAHAHA IT WORKS!
 *added scanf and properly formatted the printing
 *
 *is mem allocation necessary in this context??
 *who knows
 *
 * */

#define MAX_VALUE 10



int main(){
	int *ndigit = malloc(sizeof(ndigit[MAX_VALUE]));
	ndigit[MAX_VALUE];
	int c;
	int i;
	for (c = 0; c < MAX_VALUE; c++)
		scanf("%d", &ndigit[c]);
	for (i = 0; i < MAX_VALUE; i++)
		printf("%d\n", ndigit[i]);



}
