#include <stdio.h>
#include <stdlib.h>

struct student {
	int ID;
	char name[10];
	double grade;
};

int main(void) {
	struct student s1={24, "name", 4.2};	
	
	printf("Input the ID: ");
	scanf("%d", &s1.ID);
	
	printf("Input the name: ");
	scanf("%s", s1.name);
	
	printf("Input the grade: ");
	scanf("%lf", &s1.grade);
	
	printf("ID: %d\n", s1.ID);
	printf("name: %s\n", s1.name);
	printf("grade: %lf\n", s1.grade);
}
