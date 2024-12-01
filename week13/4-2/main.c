#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

int getArea(struct point *pPtr1, struct point *pPtr2){
	int area;
	area=(pPtr2->x - pPtr1->x)*(pPtr2->y - pPtr1->y);
	return area;
};

int main(int argc, char *argv[]) {
	
	int area;
	struct point p1, p2;
	struct point *pPtr1, *pPtr2;
	
	pPtr1=&p1;
	pPtr2=&p2;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%i %i", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%i %i", &p2.x, &p2.y);
	
	area=getArea(pPtr1, pPtr2);
	
	printf("Area: %i", area);
	
	return 0;
}
