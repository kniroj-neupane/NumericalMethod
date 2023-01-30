#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j;
    float a[20][20],b[20],old[20],E[20];
    float error,sum;
    float newx[20];
    printf("Enter the dimension of system of equation ");
    scanf("%d",&n);
    printf("Enter the coffiecients\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            scanf("%f",&a[i][j]);
    }
    printf("Enter RHS vector ");
    for(i=0;i<n;i++)
        scanf("%f",&b[i]);
    printf("Enter the accuracy limit ");
    scanf("%f",&error);
    for(i=0;i<n;i++)
        newx[i] = 0;
    iteration:
    for(i=0;i<n;i++)
    {
        sum = b[i];
        for(j=0;j<n;j++)
        {
            if(i != j)
            {
                sum = sum - a[i][j] * newx[j];
            }
        }
        old[i] = newx[i];
        newx[i] = sum / a[i][i];
        E[i] = abs(newx[i] - old[i]) / newx[i];
    }
    for(i=0;i<n;i++)
    {
        if(E[i] > error)
            goto iteration;
    }
    printf("The solution vector is\n");
    for(i=0;i<n;i++)
        printf("%f\n",newx[i]);
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter the dimension of system of equation 3
// Enter the coffiecients
// 6 -2 1
// -2 7 2
// 1 2 -5
// Enter RHS vector 11 5 -1
// Enter the accuracy limit 0.00001
// The solution vector is
// 1.999997
// 0.999999
// 0.999999