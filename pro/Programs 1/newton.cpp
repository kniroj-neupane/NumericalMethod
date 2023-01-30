//finding the roots using newton Raphson method::
#include<stdio.h>
#include<math.h>
#define eps 0.000001
#define f(x) x*x-3*x+2
#define fd(x) 2*x-3

int main()
{
	int count;
	float x0,x1,fx,fdx,err;
	printf("enter the initial guess\n");
	scanf("%f",&x0);
count=1;
	begin:
	fx=f(x0);
	fdx=fd(x0);
	x1=x0-(fx/fdx);
	err=fabs((x1-x0)/x1);
	if(err<eps)
	{
	printf("root=%f\n",x1);	
	printf("function value=%f\n",f(x1));
	printf("no of iteration=%d\n",count);
	}
	else
	{
		x0=x1;
		count=count+1;
			goto begin;
		}
	printf("\n\nBy Niroj Neupane Khatri");
	return 0;
}
// enter the initial guess
// 0
// root=1.000000
// function value=0.000000
// no of iteration=6
