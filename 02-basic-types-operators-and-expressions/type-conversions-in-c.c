// TYPE CONVERSIONS IN C.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 2;
    double b = 3.5;

    // INTERGRE AND FLOATING POINT NUMBER MULTIPLICATION ASSIGNED TO FLOATING POINT NUMBER.
    double c = a * b;
    // INTERGRE AND FLOATING POINT NUMBER DIVISION ASSIGNED TO FLOATING POINT NUMBER.
    double d = a / b;

    // INTERGRE AND FLOATING POINT NUMBER MULTIPLICATION ASSIGNED TO INTEGER.
    int e = a * b;
    // INTERGRE AND FLOATING POINT NUMBER DIVISION ASSIGNED TO INTEGER.
    int f = a / b;
    printf("a=%d, b=%.3f, c=%.3f, d=%.3f, e=%d, f=%d\n",
           a, b, c, d, e, f);

    // TYPE CASTING IN C.
    int aNew = 2;
    int bNew = 3;
    printf("a / b = %.3f\n", aNew / bNew);
    printf("a / b = %.3f\n", (double)aNew / bNew);

    // STRING TO INTEGER(atoi function) AND STRING TO FLOATING POINT(atof function) TYPE CONVERSIONS.
    char intString[] = "1234";
    char floatString[] = "328.4";
    int myInt = atoi(intString);
    double myDouble = atof(floatString);
    printf("intString=%s, floatString=%s\n", intString, floatString);
    printf("myInt=%d, myDouble=%.1f\n\n", myInt, myDouble);

    // INTEGER AND FLOATIN POINT TO STRING TYPE CONVERSIONS USING SPRINTF FUNCTION.
    int aNewTwo = 2;
    double bNewTwo = 3.14;
    char myString1[64], myString2[64];
    sprintf(myString1, "%d", aNewTwo);
    sprintf(myString2, "%.2f", bNewTwo);
    printf("a=%d, b=%.2f\n", aNewTwo, bNewTwo);
    printf("myString1=%s, myString2=%s", myString1, myString2);
    return 0;
    return 0;
}