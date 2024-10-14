#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or- input loop */

int main(int argc, char *argv[]) {
	
	int num=0;
	char c;
	
	printf("Input a string: ");
	while((c=getchar())!='\n')
		switch(c){
			case 48:
				++num;
				break;
			
			case 49:
				++num;
				break;
			
			case 50:
				++num;
				break;
			
			case 51:
				++num;
				break;
			
			case 52:
				++num;
				break;
			
			case 53:
				++num;
				break;
			
			case 54:
				++num;
				break;
			
			case 55:
				++num;
				break;
			
			case 56:
				++num;
				break;
			
			case 57:
				++num;
				break;
			
			default:
				break;
		}
	
	printf("The number of digits is %i", num);
	
	return 0;
}
