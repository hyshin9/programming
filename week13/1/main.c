#include <stdio.h>
#include <stdlib.h>

struct student {
	int ID;
	char name[10];
	double grade;
};

int main(void) {
	struct student s={24, "s", 4.1};	
	
	printf("Input the ID: ");
	scanf("%d", &s.ID);
	
	printf("Input the name: ");
	scanf("%s", &s.name);
	
	printf("Input the grade: ");
	scanf("%f", &s.grade);
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f\n", s.grade);
	
}
