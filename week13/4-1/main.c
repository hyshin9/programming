#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

int getArea(struct point p1, struct point p2){
	int area;
	area=(p2.x-p1.x)*(p2.y-p1.y);
	
	return area;
};

int main(int argc, char *argv[]) {
	
	int area;
	struct point p1, p2;
	
	printf("Input the coordinate p1 (x y): ");
	scanf("%i %i", &p1.x, &p1.y);
	printf("Input the coordinate p2 (x y): ");
	scanf("%i %i", &p2.x, &p2.y);
	
	area=getArea(p1, p2);
	
	printf("Area: %i", area);
	
	return 0;
}
