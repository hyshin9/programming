#include <stdio.h>
#include <stdlib.h>

void main(void) {
	
	int i;
	char word[3][100];
	
	for(i=0; i<3; i++){
		printf("input a word:");
		scanf("%s", word[i]);
	}
	
	FILE *fp;

	fp=fopen("C:\\sample.txt", "w");
	for(i=0; i<3; i++){
		fprintf(fp, "%s\n", word[i]);
	}
	fclose(fp);
}
