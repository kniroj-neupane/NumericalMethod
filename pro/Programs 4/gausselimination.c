#include <stdio.h>
#include <math.h>
int main()
{
    int n,i,j,k;
    float a[20][20],b[20],pivot,x[20],sum,value,bvalue;
    printf("Enter the dimension of system of linear equation ");
    scanf("%d",&n);
    printf("Enter the coefficients fo matrix ");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%f",&a[i][j]);
        }
    }
    printf("Enter the RHS vector");
    for(i=0;i<n;i++)
        scanf("%f",&b[i]);

    for(k=0;k<n;k++)
    {
        pivot = a[k][k];
        if(abs(pivot) < 0.000001 )
            printf("method fails");
        else
            for(i=k+1;i<n;i++)
            {
                value = a[i][k] / pivot;
                for(j=0;j<n;j++)
                    a[i][j] = a[i][j] - a[k][j] * value;
                b[i] = b[i] - b[k] * value;  
            }
    }


    x[n-1] = b[n-1] / a[n-1][n-1];
    for(i=n-2;i>=0;i--)
    {
        sum = 0;
        for(j=i+1;j<n;j++)
        {
            sum += a[i][j] *x[j];
        }
        x[i] = (b[i] - sum) / a[i][i];
    }
    printf("The solution vector is\n");
    for(i=0;i<n;i++)
        printf("%f\n",x[i]);
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter the dimension of system of linear equation 3
// Enter the coefficients fo matrix 20 15 10
// -3 -2.249 7
// 5 1 5
// Enter the RHS vector 45 1.751 9
// The solution vector is
// 0.454737
// 1.727075
// 0.999915