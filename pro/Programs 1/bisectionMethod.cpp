//implementation of bisection 
#include <stdio.h>

#include <math.h>
#define f(x) x*x*x-4*x-9
int main()
{
	int count;
	float x0,x1,f1,f2,ep,er,root,m,fm;
	printf("enter two guesses\n");
	scanf("%f %f",&x0,&x1);
	printf("enter the tolerance\n");
	scanf("%f",&ep);
	
	count=1;
	begin:
	f1=f(x0);
	f2=f(x1);
	if(f1*f2>0)
	{
		printf("\n root do not lie in this point \n");
	}
	else
	{
	m=(x0+x1)/2;
	fm=f(m);
	if(f1*fm<0)
	{
		x1=m;
		f2=fm;
	}
	else
	{
		x0=m;
		f1=fm;
	}
	er=(x1-x0)/x1;
	if(er<ep)
	{
		root=(x0+x1)/2;
		printf("root=%f\n",root);
		printf("number of iteration=%d",count);
	}
	else
	{
		count=count+1;
	goto begin;	
	}
	}
	printf("\n\nBy Niroj Neupane Khatri");
	return 0;
}

// enter two guesses
// 2 3
// enter the tolerance
// 0.0001
// root=2.706421
// number of iteration=12
