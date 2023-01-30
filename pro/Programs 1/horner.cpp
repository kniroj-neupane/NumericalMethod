#include <stdio.h>
//implementation of herner method
#include<math.h>

int main()
{
     float a[100],sum=0,x;
     int n,i;

     printf("\nEnter the degree of polynomial ");
     scanf("%d",&n);
     printf("\nEnter the coefficient of polynomial \n");
     for(i=n;i>=0;i--)
     {
            scanf("%f",&a[i]);
     }

     printf("\nEnter value of X=  ");
     scanf("%f",&x);

     for(i=n;i>=0;i--)
     {
        sum=(a[i]+(sum*x));
     }



     printf("\nValue of polynomial=  %f \n",sum);
      printf("\nBy Niroj Neupane Khatri");
     return 0;
}

// Enter the degree of polynomial 3

// Enter the coefficient of polynomial 
// 3 -4 5 -6

// Enter value of X=  2

// Value of polynomial=  12.000000
