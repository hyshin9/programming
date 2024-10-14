#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, a;    //i=scanf a=0,1,...,i
	int sum=0;
	
	printf("Enter a number: ");
	scanf("%i", &i);
	
	for(a=0; a<=i; a++)
	{
		sum +=a;
	}
	
	printf("The result is %i", sum);
	
	return 0;
}
