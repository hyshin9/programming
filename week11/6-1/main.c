#include <stdio.h>
#include <stdlib.h>

void main(void) { //one char
	
	FILE *fp=NULL;
	char c;
	fp=fopen("C:\\sample.txt","r");
	if(fp==NULL)
		printf("파일을 못 열음\n");
	while((c=fgetc(fp))!=EOF)
		putchar(c);
		
	fclose(fp);
	
}
