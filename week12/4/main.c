#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int grade[5];
	
	for (i=0; i<5; i++){
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	int *pi=grade;
	int sum;
	for (i=0; i<5; i++){
		printf("grade[%d] = %d\n", i, pi[i]);
	}
	sum=*pi++;
	printf("average: %i", sum);
	
	return 0;
}
