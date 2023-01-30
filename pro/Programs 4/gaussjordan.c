#include <stdio.h>
int main()
{
    int n,i,p,k,j;
    float a[20][20],term,pivot;
    printf("Enter the dimension of equation ");
    scanf("%d",&n);
    printf("Enter the coefficient of augmented matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<=n;j++)
            scanf("%f",&a[i][j]);
    }
    for(k=0;k<n;k++)
    {
        pivot = a[k][k];
        for(p=0;p<=n;p++)
            a[k][p] = a[k][p] / pivot;
        for(i=0;i<n;i++)
        {
            term = a[i][k];
            if(i != k)
            {
                for(j=0;j<=n;j++)
                {
                    a[i][j] = a[i][j] - a[k][j] * term;
                }
            }
    
        }
    }
    printf("The solution vector is\n");
    for(i=0;i<n;i++)
    {
        printf("%f\n",a[i][n]);
    }
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter the dimension of equation 3
// Enter the coefficient of augmented matrix
// 2 -1 4 15
// 2 3 -2 1
// 3 2 -4 -4
// The solution vector is
// 2.000000
// 1.000000
// 3.000000