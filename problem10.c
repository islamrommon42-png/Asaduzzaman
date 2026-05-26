#include<stdio.h>
int main()
{
    float a[7];
    a[0]=100;
    a[1]=200;
    a[2]=300;
    a[3]=20;
    a[4]=29;
    a[5]=27;
    a[6]=30;
    float x=a[0]+a[2]+a[3]+a[5]-a[1]/a[6];
    printf("%f\n",x);
}
