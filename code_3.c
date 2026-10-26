#include <stdio.h>

int main()
{
    // This is a single line comment
    printf("Hello, this line is printed\n");

    /* This is a multi-line comment.
       It can be written over many lines.
       The compiler ignores all of this. */

    int x = 10;   // declaring and initialising x
    int y = 20;

    /* Now we print the sum of x and y.
       %d is used because both are integers. */
    printf("Sum of x and y = %d\n", x + y);

    return 0;
}