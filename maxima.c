#include <stdio.h>
#include <math.h>

int n;
float fd[100];
// int fact(int i)
// {
//     if(i==0)
//         return 1;
//     else
//         return i * fact(i-1);
// }
// float fx(int x)
// {
//     int i,j;
//     float value = fd[0],factor = 1;
//     for(i=1;i<n;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             factor = factor * (x - j);
//         }
//         value = value + factor * fd[i] / fact(i);
//     }
//     return value;
// }
int main()
{
    int i,j,k;
    float x[100],f[100],h,a,b,c,s1,s2,x1,x2,value;
    printf("Enter number of data points: ");
    scanf("%d",&n);
    printf("Enter data points and functional value respectively:\n");
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&f[i]);
    }
    h = x[1] - x[0];
    for(i=0;i<n;i++)
        fd[i] = f[i];
    for(i=0;i<n;i++)
    {
        for(j=n-1;j>i;j--)
        {
            fd[j] = fd[j] - fd[j-1];
        }
    }
    a = 0.5 * fd[3];
    b = fd[2] - fd[3];
    c = fd[1] - (fd[2] / 2) + (fd[3] / 3);
    printf("%f %f %f",a,b,c);
    s1 = (-b + sqrt(b * b - 4 * a * c))/(2 * a);
    s2 = (-b - sqrt(b * b - 4 * a * c))/(2 * a);
    printf("%f %f",s1,s2);
    x1 = x[0] + s1 * h;
    x2 = x[0] + s2 * h;
    value = (fd[2] + ((6 * s1 - 6) * fd[3]) / 6)/(h * h);
    if(value < 0)
        printf("The maxima is %f at %f\n",fx(x1),x1);
    else
        printf("The minima is %f at %f\n",fx(x1),x1);
    value = (fd[2] + ((6 * s2 - 6) * fd[3]) / 6)/(h * h);
        if(value < 0)
        printf("The maxima is %f at %f\n",fx(x2),x2);
    else
        printf("The minima is %f at %f\n",fx(x2),x2);

}

