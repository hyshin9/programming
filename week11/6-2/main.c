#include <stdio.h>
#include <stdlib.h>

void main(void) { //one word
	
	FILE *fp=NULL;
	char str[100];
	fp=fopen("C:\\sample.txt","r");
	if(fp==NULL)
		printf("파일을 못 열음\n");
	while(fgets(str, 20, fp)!=NULL)
		printf("%s", str);
		
	fclose(fp);
	
}
