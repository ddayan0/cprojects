#include <stdio.h>

void main(){
    int* pc, c;
    c = 5;
    pc = &c;
    printf("%d\n", *pc);
    printf("%d\n", &pc);

}
