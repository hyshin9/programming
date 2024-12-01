#include <stdio.h>
#include <stdlib.h>
#define STUDENTNUM 4

struct student{
	int ID;
	int score;
};

void main(void){

	struct student s[STUDENTNUM];
	
	int i;
	int hs=0; //hs: highest score
	double sum=0;
	
	for (i=0; i<STUDENTNUM; i++){
		printf("input the ID: ");
		scanf("%d", &s[i].ID);
		
		printf("input the score: ");
		scanf("%d", &s[i].score);
	}
	for (i=0; i<STUDENTNUM; i++){
		sum += s[i].score;
		
		if (s[i].score>s[hs].score){
			hs=i;
		}
	}
	
	float average = sum/STUDENTNUM;
	
	printf("The average of the score: %f\n", average);
	printf("The highest score - ID: %d, score: %d", s[hs].ID, s[hs].score);
}
