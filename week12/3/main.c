#include <stdio.h>
#include <stdlib.h>

/*void swap (int x, int y){
	int temp;
	temp=x; // x->temp
	x=y; // y->x
	y=temp; //temp(original x)->y
}
void main(void){
	int a=3;
	int b=5;
	swap(a, b);
	printf("a:%i, b:%i\n", a, b);
}*/

void swap (int *x, int *y){
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void main (void){
	int a=3;
	int b=5;
	swap(&a, &b);
	printf("a: %i, b: %i\n", a, b);
}
