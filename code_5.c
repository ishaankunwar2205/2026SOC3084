// Program 3: Check whether a number is even or odd
#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // % gives the remainder. If remainder when divided by 2 is 0, it's even.
    if (num % 2 == 0)
        printf("%d is EVEN\n", num);
    else
        printf("%d is ODD\n", num);

    return 0;
}