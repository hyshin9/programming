#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int grade[5];
	
	for (i=0; i<5; i++){
		printf("Input value-grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	int *pi=grade;
	printf("grade[0] = %d\n", *pi);
	
	return 0;
}
