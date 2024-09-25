#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char c; //scanfcharacter
	char b; //c+1
	

	printf("enter a character :");
	scanf("%c", &c);
	
	b=c+1;
	
	printf("the next character of %c (%i) is %c (%i)", c, c, b, b);
	
	return 0;
}
