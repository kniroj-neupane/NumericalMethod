//program to implement composite simpson's 3/8 rule
#include <stdio.h>
int main()
{
    int i,k,n;
    float x[20],fx[20],h,sum = 0,value,sum1=0,sum2=0;
    printf("Enter number of data points\t");
    scanf("%d",&n);
    printf("Enter data points x and fx\t");
    for(i=0;i<n;i++)
    {
        scanf("%f%f",&x[i],&fx[i]);
    }
    k = n-1;
    h = (x[n-1] -  x[0]) / k;
    sum = fx[0] + fx[n-1];
    for(i=1;i<k;i++)
    {
        if(i % 3 != 0)
            sum += 3 * fx[i];
        else
            sum += 2 * fx[i];
    }
    
    value = 3 * (h/8) * sum;
    printf("%.2f",value);
    printf("\n\nBy Niroj Neupane Khatri");
}
// Enter number of data points     10
// Enter data points x and fx      0 0
// 0.2 0.24
// 0.4 0.55
// 0.6 0.93
// 0.8 1.63
// 1 1.84
// 1.2 2.37
// 1.4 2.95
// 1.6 3.56
// 1.8 4.6
//output 3.26