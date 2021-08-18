#include <stdio.h>
#include <stdlib.h>

void main(){

	int x1, x2, y1, y2, i = 0, f = 1, y = 0, x = 0;
	float g = 0;

	printf("Enter x1 y1 values:\n");
	scanf("%d %d", &x1, &y1);
	printf("Enter x2 y2 values:\n");
	scanf("%d %d", &x2, &y2);
	
	while ((x1<0)||(y1>100)){
		printf("Enter x1 y1 values:\n");
		scanf("%d %d", &x1, &y1);
	}

	while ((x2<0)||(y2>100)){
		printf("Enter x2 y2 values:\n");
		scanf("%d %d", &x2, &y2);
	}

	g = (float)(y2-y1)/(x2-x1);
	x = x1;

	if (x1 > x2)
		f = -1;

	printf("|  X  |  Y  |\n");
	for (i = 0; i < abs(x1-x2)+1; i++) {
		y = (g*(x-x1)+y1);
		printf("|  %d  |  %d  |\n",x,y);
		x = x + f;
	}

	return;
}
