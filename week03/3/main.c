#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	char c; //scanfcharacter
	char a; //numbera
	char b; //numbera+1
	

	printf("enter a character :");
	scanf("%c", &c);
	
	a=c-'0';
	b=c+1;
	
	
	printf("the next character of %c is %c", c, b);
	
	return 0;
}
