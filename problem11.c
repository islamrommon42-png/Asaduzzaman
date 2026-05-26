#include<stdio.h>
int main()
{
    double a[10];
    a[0]=10;
    a[1]=200;
    a[2]=300;
    a[3]=400;
    a[4]=500;
    a[5]=50;
    a[6]=40;
    a[7]=20;
    a[8]=30;
    a[9]=70;

    double x=a[0]+a[7]+a[5]+a[3]-a[8]*a[2]/a[2];
    printf("%f\n",x);

}
