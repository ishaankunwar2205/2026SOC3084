// Program 1: Order of execution of operators in expressions
#include <stdio.h>

int main()
{
    int a = 10, b = 5, c = 2, result;

    // BODMAS rule applies: brackets first, then * / %, then + -
    result = a + b * c;
    printf("a + b * c        = %d\n", result);   // 5*2 = 10, then 10+10 = 20

    result = (a + b) * c;
    printf("(a + b) * c      = %d\n", result);   // 15*2 = 30 (bracket first)

    result = a / b * c;
    printf("a / b * c        = %d\n", result);   // same precedence, so left to right

    result = a - b + c;
    printf("a - b + c        = %d\n", result);   // left to right

    result = a % b + c * 3;
    printf("a %% b + c * 3    = %d\n", result);   // % first, * next, + last

    return 0;
}