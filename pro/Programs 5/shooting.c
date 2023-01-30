//d2y/dx2 = 6x
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
float f1(float x,float y,float z)
{
    return z;
}
float f2(float x,float y,float z)
{
    return 6 * x;
}

float shoot(float x0,float y0,float z0,float xn,float yn,float h,int p)
{
    float y,z,x;
    x = x0;
    y = y0;
    z = z0;
    while(x<xn)
    {
        y = y + h * f1(x,y,z);
        z = z + h * f2(x,y,z);
        x = x + h;
        if(p==1)
            printf("x=%f,y=%f,z=%f\n",x,y,z);
    }
    return y;
}

int main()
{
    float x0,y0,h,xn,yn,z0,y,z,g1,g2,g3,v1,v2,v;
    int p=0;
    printf("\n  Enter x0,y0,xn,yn,h: ");
    scanf("%f%f%f%f%f",&x0,&y0,&xn,&yn,&h);

    v = yn;
    g1 =  (yn - y0) / (xn - x0);
    z0 = g1;
    y = shoot(x0,y0,z0,xn,yn,h,p);
    v1 = y;
    if(abs(y-yn)>0.00001)
        g2 = 0.5 * g1;
    z0 = g2;
    y = shoot(x0,y0,z0,xn,yn,h,p);
    v2 = y;
    do
    {
        g3 = g2 - (g2 - g1) * (v2 - v) / (v2 - v1);
        z0 = g3;
        y = shoot(x0,y0,z0,xn,yn,h,p);
        g1 = g2;
        g2 = g3;
        v1 = v2;
        v2 = y;
    } while (abs(y-yn)>0.00001);
    p = 1;
    shoot(x0,y0,z0,xn,yn,h,p);
}
//   Enter x0,y0,xn,yn,h: 1 2 2 9 0.5
// x=1.500000,y=4.750000,z=8.500000
// x=2.000000,y=9.000000,z=13.000000