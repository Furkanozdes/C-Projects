#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int x1,x2,y1,y2,x,y;
	printf("enter the x1 and x2 values:");
	scanf("%d %d",&x1,&x2);
	printf("enter the y1 and y2 values:");
	scanf("%d %d",&y1,&y2);
	x=(x2-x1);
	y=(y2-y1);
	double distance;
	distance=sqrt(x*x+y*y);
	printf("distance=%1.4lf\n", distance);
	
	
	return(0);
}
