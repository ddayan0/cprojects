#include <stdio.h>
/*this is my first "real" program
 * hopefully this works
*/
main(){
	float fahr;
	float celsius;
	int lower;
	int upper;
	int step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while (fahr <= upper){
		celsius = (5.0/9.0) * (fahr-32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	
	
	
	}




}
