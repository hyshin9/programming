#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int i=100;
	int *p=&i;
	int **q=&p;
	
	*p=200; // i change (100 -> 200)
	printf("i=%d, *p=%d, **q=%d\n", i, *p, **q);
	//200, 200, 200
	
	**q=300;
	printf("i=%d, *p=%d, **q=%d\n", i, *p, **q);
	//300, 300, 300
	
	return 0;
}
