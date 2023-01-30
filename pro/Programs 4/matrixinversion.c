#include <stdio.h>
int main()
{
    int n,i,p,k,j;
    float a[20][20],term,pivot;
    printf("Enter the dimension of equation ");
    scanf("%d",&n);
    printf("Enter the augmented matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<2*n;j++)
            scanf("%f",&a[i][j]);
    }
    for(k=0;k<n;k++)
    {
        pivot = a[k][k];
        for(p=0;p<2*n;p++)
            a[k][p] = a[k][p] / pivot;
        for(i=0;i<n;i++)
        {
            term = a[i][k];
            if(i != k)
            {
                for(j=0;j<2 * n;j++)
                {
                    a[i][j] = a[i][j] - a[k][j] * term;
                }
            }
    
        }
    }
    printf("The inverted matrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=n;j<2*n;j++)
            printf("%f ",a[i][j]);
        printf("\n");
    }
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter the dimension of equation 3
// Enter the augmented matrix
// 1 1 3 1 0 0
// 1 3 -3 0 1 0
// -2 -4 -4 0 0 1
// The inverted matrix is
// 3.000000 1.000000 1.500000
// -1.250000 -0.250000 -0.750000
// -0.250000 -0.250000 -0.250000
