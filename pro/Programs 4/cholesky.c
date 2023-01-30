#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float A[20][20] = {0}, L[20][20] = {0}, U[20][20];
    float B[20] = {0}, X[20] = {0}, Y[20] = {0};

    int i, j, k, n;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);
    printf("\nEnter matrix element:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%f", &A[i][j]);
        }
    }
    printf("\nEnter the constant terms: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%f", &B[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            float sum = 0;

            if (j == i)
            {
                for (int k = 0; k < j; k++)
                {
                    sum += pow(L[j][k], 2);
                }
                L[j][j] = sqrt(A[j][j] - sum);
            }
            else
            {
                for (int k = 0; k < j; k++)
                    sum += (L[i][k] * L[j][k]);
                L[i][j] = (A[i][j] - sum) / L[j][j];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            U[i][j] = L[j][i];
    }
    printf("[L]: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%9.3f", L[i][j]);
        printf("\n");
    }
    printf("\n\n[U]: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%9.3f", U[i][j]);
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        Y[i] = B[i];
        for (j = 0; j < i; j++)
        {
            Y[i] -= L[i][j] * Y[j];
        }
        Y[i] = Y[i] / L[i][i];
    }
    printf("\n\n[Y]: \n");
    for (i = 0; i < n; i++)
    {
        printf("%9.3f", Y[i]);
    }
    for (i = n - 1; i >= 0; i--)
    {
        X[i] = Y[i];
        for (j = i + 1; j < n; j++)
        {
            X[i] -= U[i][j] * X[j];
        }
        X[i] /= U[i][i];
    }
    printf("\n\n[X]: \n");
    for (i = 0; i < n; i++)
    {
        printf("%9.3f", X[i]);
    }
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter the order of square matrix: 3

// Enter matrix element:
// 6 15 55
// 15 55 225
// 55 225 979

// Enter the constant terms:
// 76 295 1259
// [L]: 
//     2.449    0.000    0.000
//     6.124    4.183    0.000
//    22.454   20.917    6.110


// [U]:
//     2.449    6.124   22.454
//     0.000    4.183   20.917
//     0.000    0.000    6.110


// [Y]:
//    31.027   25.100    6.110

// [X]:
//     1.000    1.000    1.000