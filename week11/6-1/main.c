#include <stdio.h>
#include <stdlib.h>

void main(void) { //one char
	
	FILE *fp=NULL;
	char c;
	fp=fopen("C:\\sample.txt","r");
	if(fp==NULL)
		printf("������ �� ����\n");
	while((c=fgetc(fp))!=EOF)
		putchar(c);
		
	fclose(fp);
	
}