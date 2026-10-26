#include <stdio.h>

int main()
{
    int age;
    float marks;
    char grade;
    double percentage;
    char name[30];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("Enter your grade: ");
    scanf(" %c", &grade);   // space before %c so it skips the enter key

    printf("Enter your percentage: ");
    scanf("%lf", &percentage);

    printf("\n----- Your Details -----\n");
    printf("Name       : %s\n", name);
    printf("Age        : %d\n", age);
    printf("Marks      : %.2f\n", marks);
    printf("Grade      : %c\n", grade);
    printf("Percentage : %.2lf\n", percentage);

    return 0;
}