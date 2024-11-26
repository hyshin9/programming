#include <stdio.h>
#include <stdlib.h>

char *proverb="All that glisters is not gold.";

void setPointer(char *q){
	q=proverb;
}
int main(void){
	char *p="zzz";
	setPointer(p);
	printf("%s\n", p); // -> print zzz
	
	return 0;
}
