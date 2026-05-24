#include<stdio.h>
int main()
{
    float length, width, height, volume;

    printf("Enter length: ");
    scanf("%f", &length);

    printf("Enter width: ");
    scanf("%f", &width);

    printf("Enter height: ");
    scanf("%f", &height);

    volume = length * width * height;
    printf("Volume of rectangle = %.2f\n", volume);
}
