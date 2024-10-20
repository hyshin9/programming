#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	int result;
	result=a+b;
	return result;
}

int square(int n)
{
	int result=n*n;
	return result;
}

int get_max(int x, int y)
{
	int result;
	if (x>y)
		result=x;
	else
		result=y;
	return result;
}

int main(int argc, char *argv[]) {
	int Sum, Square, Max, a, b;
	printf("Enter the integers: ");
	scanf("%i %i", &a, &b);
	Sum = sumTwo(a, b);
	Square = square(a);
	Max = get_max(a, b);
	printf("\nResult - Sum: %i, Square: %i, Max: %i", Sum, Square, Max);
	
	return 0;
}
