//program to calculate derivative using backward difference
#include <stdio.h>

float f(float x)
{
    return x*x;
}
int main()
{
    float x,h,fx,fxminush,f1x;
    printf("Enter x and h\t");
    scanf("%f%f",&x,&h);
    fx = f(x);
    fxminush = f(x-h);
    f1x = (fx - fxminush)/h;
    printf("The value of derivative of x^2 at %.3f is %.3f",x,f1x);
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter x and h   1 0.2
// The value of derivative of x^2 at 1.000 is 1.800

