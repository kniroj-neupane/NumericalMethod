//program to calculate derivative using central difference formula
#include <stdio.h>

float f(float x)
{
    return x*x;
}
int main()
{
    float x,h,fxplush,fxminush,f1x;
    printf("Enter x and h\t");
    scanf("%f%f",&x,&h);
    fxplush = f(x+h);
    fxminush = f(x-h);
    f1x = (fxplush - fxminush)/(2*h);
    printf("The value of derivative of x^2 at %.3f is %.3f",x,f1x);
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter x and h   1 0.2
// The value of derivative of x^2 at 1.000 is 2.000

