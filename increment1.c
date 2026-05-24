#include<stdio.h>
int main()
{
    int a, b, s=1;
    scanf("%d %d", &a,&b);
    if(a+10<b)
        if(b>20)
        s=a;
    else
        s=b;
    printf("s=%d", s);

}
