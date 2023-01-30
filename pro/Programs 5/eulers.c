#include<stdio.h>
#include<conio.h>
float f(float x,float y)
{
    return 2 * x + y;
}
int main()
{
	int i,n;
	float x,y,h,xp,dy;
	printf("\nInput initialvalue of x and y;\n");
	scanf("%f%f",&x,&y);
	printf("Input X-value at which y is required:");
	scanf("%f",&xp);
	printf("\nInput step size:");
	scanf("%f",&h);
	n=(xp-x)/h;
	for(i=0;i<=n;i++)
	{
		dy=h*f(x,y);
		x=x+h;
		y=y+dy;
		printf("\nx=%f  y=%f",x,y);
	}
	printf("\nValue of y at x=%f is %f",x,y);
	getch();
}
// Input initialvalue of x and y;
// 0 1
// Input X-value at which y is required:0.5

// Input step size:0.1

// x=0.100000  y=1.100000
// x=0.200000  y=1.230000
// x=0.300000  y=1.393000
// x=0.400000  y=1.592300
// x=0.500000  y=1.831530
// Value of y at x=0.500000 is 1.831530
