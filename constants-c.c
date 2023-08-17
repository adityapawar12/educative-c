// CONSTANTS IN C PROGRAMMING LANGAUGE.

#include <stdio.h>

int main()
{
    // // NUMERIC CONSTANTS.
    // const int year = 1984;       // integer constant 1984
    // const int octalYear = 03700; // 1984 in octal
    // const int hexYear = 0x7c0;   // 1984 in hexadecimal

    // // CHARACTER CONSTANTS.
    // const char characterConstant = 'a';

    // // STRING CONSTANTS.
    // const char stringConstant = "a string\0";

    // // ENUM CONSTANTS.
    // enum months
    // {
    //     JAN = 1,
    //     FEB,
    //     MAR,
    //     APR,
    //     MAY,
    //     JUN,
    //     JUL,
    //     AUG,
    //     SEP,
    //     OCT,
    //     NOV,
    //     DEC
    // };

    // const months the_month;
    // if (the_month == JAN)
    // {
    //     printf("it's January\n");
    // }

    // Try changing the value of x
    const int x = 33;
    printf("variable x is unchangeable: %d", x);
    return 0;

    printf("1984 in decimal is %d\n", 1984);
    printf("1984 in octal is 0%o\n", 1984);
    printf("1984 in hexadecimal is 0x%x\n", 1984);
    printf("0123 is octal for %d\n", 0123);
    printf("0x12f is hexadecimal for %d\n", 0x12f);
    return 0;
}