#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){

	int i=4; // i=4-> print 4, 4, 4 & i=300 -> print 300, 300, 44
	
	int *pi=&i;
	char *pc=&i;
	
	printf("%i, %i, %i\n", i, *pi, *pc);

}
