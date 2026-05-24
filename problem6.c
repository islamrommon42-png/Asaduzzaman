#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    if(op == '+')
        printf("Result = %.2f", a + b);
    else if(op == '-')
        printf("Result = %.2f", a - b);
    else if(op == '*')
        printf("Result = %.2f", a * b);
    else if(op == '/')
        printf("Result = %.2f", a / b);
    else
        printf("Invalid operator");

    return 0;
}
