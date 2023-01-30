#include <stdio.h>
#include <math.h>

int factorial(int a)
{
    if(a==0)
        return 1;
    else
        return a * factorial(a-1);
}
float y1(float x,float y){ return x - y*y;}
float y2(float x,float y){ return 1 - 2*y*y1(x,y);}
float y3(float x,float y){ return -2*y*y2(x,y) - 2*y1(x,y)*y1(x,y);}
int main()
{
    int i,n=4,j;
    float x0,x,yvalue,y[4],term;
    printf("Enter x0 and y0 ");
    scanf("%f%f",&x0,&y[0]);
    printf("Enter x ");

    scanf("%f",&x);
    y[1] = y1(x0,y[0]);
    y[2] = y2(x0,y[0]);
    y[3] = y3(x0,y[0]);
    yvalue = y[0];
    for(i=1;i<n;i++)
    {
        term = 1;
        for(j=1;j<=i;j++)
        {
            term *= (x-x0);
        }
        yvalue += term * y[i] / factorial(i);
    }
    printf("value of y at x=%f is %f",x,yvalue);

}
// Enter x0 and y0 0 1
// Enter x 0.1
// value of y at x=0.100000 is 0.913667