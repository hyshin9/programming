#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int all_files;  // static -> compile x

extern void sub();

int main(void) 
{
	sub();
	printf("%d\n", all_files);
	return 0;
}

/*
#include <stdio.h>

static int sum=1; //static -> compile x

int main(void)
{
	int sum=0;
	
	printf("sum= %d\n", sum);
	
	return 0;
}
*/
