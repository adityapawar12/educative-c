// INCREMENT AND DECREMENT OPERATORS IN C.
#include <stdio.h>

int main(int argc, char *argv[])
{

    int a = 0;
    int b = 0;

    printf("a=%d, b=%d\n", a, b);

    // INCREMENT OPERATORS IN C WHICH ADD 1 TO THE VALUE.
    a++;

    // DECREMENT OPERATORS IN C WHICH SUBTRACTS 1 TO THE VALUE.
    b--;

    printf("a=%d, b=%d\n", a, b);

    // CAN ALSO USE THESE TWO OPERATORS DIFFERENTLY, BY PUTTING THE OPERATOR BEFORE THE OPERAND, E.G. ++A AND --B
    // WHEN THE OPERAND IS USED BEFORE THE OPERAND IT IS CALLED A PREFIX OPERATOR AND FOR AFTER POSTFIX OPERATOR.

    // WHEN USING ++ AND -- AS A PREFIX OPERATOR, THE INCREMENT (OR DECREMENT) HAPPENS BEFORE ITS VALUE IS USED. AS FOR POSTFIX OPERATORS,
    // THE INCREMENT (OR DECREMENT) OCCURS AFTER ITS VALUE HAS BEEN USED.
    int n, x;

    // INCREMENT AND DECREMENT AFTER.
    n = 3;
    x = 0;
    printf("n=%d, x=%d\n", n, x);
    x = n++;
    printf("n=%d, x=%d\n\n", n, x);

    // INCREMENT AND DECREMENT BEFORE.
    n = 3;
    x = 0;
    printf("n=%d, x=%d\n", n, x);
    x = ++n;
    printf("n=%d, x=%d\n", n, x);

    // INSTEAD OF CONFUSING OURSELVES WITH THESE INCREMENT AND DECREMENT OPERATORS WE CAN INSTEAD WRITE IT OUT EXPLICITLY
    int xPlicit = 1;
    xPlicit = xPlicit + 1;
    printf("%d", xPlicit);

    return 0;
}