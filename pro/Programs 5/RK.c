#include <stdio.h>
#include <math.h>
float f(float x, float y)
{
    return 2 * x + y;
}
int main()
{
    int n, i;
    float x, y, xp, h;
    float m1, m2, m3, m4;
    printf("Input initial value of x and y");
    scanf("%f%f", &x, &y);
    printf("Input X-value at which Y is required :\n");
    scanf("%f", &xp);
    printf("Input  step size:\n");
    scanf("%f", &h);
    n = (int)((xp - x) / h + 0.5);
    for (i = 1; i <= n; i++)
    {
        m1 = f(x, y);
        m2 = f(x + 0.5 * h, y + 0.5 * m1 * h);
        m3 = f(x + 0.5 * h, y + 0.5 * m2 * h);
        m4 = f(x + h, y + m3 * h);
        x = x + h;
        y = y + (m1 + 2 * m2 + 2 * m3 + m4) * (h / 6.0);
    }
    printf("\n Value of y at x=%f is %f", x, y);
}
// Input initial value of x and y0 1
// Input X-value at which Y is required :
// 0.4
// Input  step size:
// 0.4
//  Value of y at x=0.400000 is 1.675200
