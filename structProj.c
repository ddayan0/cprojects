#include <stdio.h>


typedef struct car
{
	char *brand;
	char *model;
} Car;

void main(){
	Car honda;
	honda.brand = "Honda";
	honda.model = "Civic";
	printf("Brand of Car =  %s\n", honda.brand);
}
