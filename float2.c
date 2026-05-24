#include<stdio.h>
int main()
{
float length, width, heigth, volume;

printf("Enter the length: ");
scanf("%f", &length);

printf("Enter the width: ");
scanf("%f", &width);

printf("Enter the heigth: ");
scanf("%f", &heigth);

volume = length * width * heigth;
printf("Volume of square = %.2f\n", volume);
}
