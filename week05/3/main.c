#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int t; //time
	
	printf("Input the second:");
	scanf("%i", &t);
	
	printf("The time is %i : %i\n", t/60, t%60);
	
	return 0;
}
