#include <stdio.h>
#include <stdlib.h>

void main(void) { //one word
	
	FILE *fp=NULL;
	char str[100];
	fp=fopen("C:\\sample.txt","r");
	if(fp==NULL)
		printf("������ �� ����\n");
	while(fgets(str, 20, fp)!=NULL)
		printf("%s", str);
		
	fclose(fp);
	
}
