#include<stdio.h>
#include<conio.h>
float f(float x, float y)
{
    return 2 * x + y;
}

int main()
{
	int i,n;
	float x,y,h,xp,m1,m2;
	printf("\nInput initialvalue of x and y;\n");
	scanf("%f%f",&x,&y);
	printf("Input X-value at which y is required:");
	scanf("%f",&xp);
	printf("\nInput step size:");
	scanf("%f",&h);
	n=(xp-x)/h;
	for(i=1;i<=n;i++)
	{
      m1=f(x,y);
      m2=f(x+h,y+m1*h);
		x=x+h;
		y=y+0.5*h*(m1+m2);
		printf("\nx=%f  y=%f",x,y);
	}
	printf("\nValue of y at x=%f is %f",x,y);
}
// Input initialvalue of x and y;
// 0 1
// Input X-value at which y is required:0.4

// Input step size:0.1

// x=0.100000  y=1.115000
// x=0.200000  y=1.263075
// x=0.300000  y=1.447698
// x=0.400000  y=1.672706
// Value of y at x=0.400000 is 1.672706
