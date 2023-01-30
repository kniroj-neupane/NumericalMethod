//program to implement simpson's 3/8 rule
#include <stdio.h>
#include <math.h>

#define f(x) (sqrt(1- x * x))
int main()
{
    float x0,x1,x2,x3,h,value;
    printf("Enter the lower and upper limit\t");
    scanf("%f%f",&x0,&x3);
    h = (x3 - x0) / 3;
    x1 = x0 + h;
    x2 = x0 + 2 * h;
    value = (3 * h / 8) * (f(x0) + 3 * f(x1) + 3 * f(x2) + f(x3));
    printf("%f",value);
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter the lower and upper limit 0 1
// 0.758062