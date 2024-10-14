#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer=39;
	int i;   //scanf
	int t=0;   //trials
	
	do
	{
		printf("Guess a number: ");
		scanf("%i", &i);
			if(i<answer){
				printf("Low!\n");
				++t;}
			else if(i>answer){
				printf("High!\n");
				++t;}
			else{
				++t;
				printf("Congratulation! Trials: %i",t);
			}
	}
	while(i!=answer);
		
	return 0;
}
