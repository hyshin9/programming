#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_integer()
{
	int a;
	printf("Enter the value: ");
	scanf("%i", &a);
	return a;
}
int factorial(int n)
{
	int i;
	int res=1;
	for (i=1; i<=n; ++i)
		res=res*i;
	return res;
}
int combination(int b, int c)
{
	return factorial(b)/(factorial(b-c)*factorial(c));
}

int main(void) {
	
	int x, n, r;
	
	n=get_integer();
	r=get_integer();
	
	x=combination(n, r);
	
	printf("The result of C(%i, %i) is %i.", n, r, x);
}
