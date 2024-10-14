#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=39;
	int i;
	int t;   //trials
	
	do
	{
		printf("Guess a number: ");
		scanf("%i", &i);
	while(i!=answer)
	{
		if(i<answer)
			printf("Low!");
		else
			printf("High!");
	}
	}
	printf("Congratulation!");	
		
	return 0;
}
