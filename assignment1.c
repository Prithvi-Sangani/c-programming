#include <stdio.h>
#include <math.h>
/* distance between two points in angualar axis */
int main() {
	float x1, y1, x2, y2,a, distance;
	printf("Input x1,x coordinate of 1st point: ");
	scanf("%f", &x1);
	printf("Input y1, y coordinate of 1st point: ");
	scanf("%f", &y1);
    printf("Input x2, x coordinate of 2nd point: ");
	scanf("%f", &x2);
	printf("Input y2, y cooridnate of 2nd point: ");
	scanf("%f", &y2);
	printf("Input angle between axis in degrees: "); 
	scanf("%f", &a);
	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))-2*cos(3.14159-(a*3.14159/180))*(x2-x1)*(y2-y1);
	printf("Distance between the two points: %.4f", sqrt(distance));
	printf("\n");
	return 0;
}