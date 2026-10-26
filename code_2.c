// Program 2: Average of three numbers
#include <stdio.h>

int main()
{
    float a, b, c, avg;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("Average of %.2f, %.2f and %.2f is = %.2f\n", a, b, c, avg);

    return 0;
}