#include <stdio.h>

int main(){
	ftoc();
}

int ftoc(){
	int input;
	int intcalc;
	scanf("%d", &input);
	if(input > 0){
		int intcalc = input - 32;
		printf("%d\n", intcalc * 5/9 );
	}
}
