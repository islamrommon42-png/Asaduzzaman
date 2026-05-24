#include <stdio.h>

int main() {
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if(marks >= 80)
        printf("Grade: A+");
    else if(marks >= 70)
        printf("Grade: A");
    else if(marks >= 60)
        printf("Grade: B");
    else if(marks >= 50)
        printf("Grade: C");
    else
        printf("Grade: F");

    return 0;
}
