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
        old[i] = 0;
    iteration:
    for(i=0;i<n;i++)
    {
        sum = b[i];
        for(j=0;j<n;j++)
        {
            if(i != j)
            {
                sum = sum - a[i][j] * old[j];
            }
        }
        newx[i] = sum / a[i][i];
        E[i] = abs(newx[i] - old[i]) / newx[i];
    }

    for(i=0;i<n;i++)
    {
        if(E[i] > error)
        {
            for(j=0;j<n;j++)
                old[j] = newx[j];
            goto iteration;
        }
        
    }
    printf("The solution vector is\n");
    for(i=0;i<n;i++)
        printf("%f\n",newx[i]);
        printf("\n\nBy Niroj Neuapne Khatri");
}
// Enter the dimension of system of equation 3
// Enter the coffiecients
// 5 -2 3
// -3 9 1
// 2 -1 -7
// Enter RHS vector -1 2 3
// Enter the accuracy limit 0.00001
// The solution vector is
// 0.186120
// 0.331230
// -0.422713