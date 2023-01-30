//C Program to Evaluate Polynomial using synthetic division method  

#include <stdio.h>
#include<math.h>

int main()
{
     float a[100],b[100],sum=0,x;
     int n,i;

     printf("\nEnter degree of the polynomial ");
     scanf("%d",&n);
     printf("\nEnter coefficient's of the polynomial\n");
     for(i=n;i>=0;i--)
     {
            scanf("%f",&a[i]);
     }

     printf("\nEnter the value of X=  ");
     scanf("%f",&x);

     for(i=n;i>=0;i--)
     {
        sum=(a[i]+sum*x);
        // printf("\n\nSum is %.4f\n\n",sum);
        
         b[i]=sum;
          printf("\t%.4f", b[i]);
     }



     printf("\nValue of the polynomial is = [ %.5f ]\n",sum);
     printf("\n\nBy Niroj Neupane Khatri");

     return 0;
}

// Enter degree of the polynomial 3

// Enter coefficient's of the polynomial
// 1 -7 15 -9

// Enter the value of X=  3
//         1.0000  -4.0000 3.0000  0.0000
// Value of the polynomial is = [ 0.00000 ]
