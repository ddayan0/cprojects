#include <stdio.h>

int main(){
	int fahr;
	int cel;
	scanf("%d",&cel);
	fahr = (cel * 1.8) + 32;
	printf("%d\t%d\n", cel, fahr);
}
