#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int grade[5];
	
	for (i=0; i<5; i++){
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	int *ptr=grade;
	int sum=0;
	for (i=0; i<5; i++){
		printf("grade[%d] = %d\n", i, ptr[i]);
		sum += ptr[i];
	}
	
	printf("average: %i", sum/5);
	
	return 0;
}
