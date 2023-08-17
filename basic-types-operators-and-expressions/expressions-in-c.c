#include <stdio.h>

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;
    int x = 5;

    // ARITHMETIC OPERATORS.
    // THIS IS A QUADRATIC EQUATION.
    double q = a * x * x + b * x + c;

    // INSTEAD OF WRITING QUADRATIC EQUATION IN ABOVE FORMAT IT IS BETTER TO USE THE FOLLOWING FORMAT(WHICH MAKES USE OF BRACKETS FOR DETERMINING PRECEDENCE).
    double qBetter = (a * x * x) + (b * x) + c;

    int aNew = 100, bNew = 2, cNew = 25, dNew = 4;
    int result1, result2, result3;

    result1 = aNew * bNew + cNew * dNew;     // 300
    result2 = (aNew * bNew) + (cNew * dNew); // 300
    result3 = aNew * (bNew + cNew) * dNew;   // 10800
    printf("result1=%d, result2=%d, result3=%d\n", result1, result2, result3);

    int grade = 49;
    // RELATIONAL OPERATORS.
    if (grade = 49)
        grade = grade + 1; // INCORRECT !!!
    if (grade == 49)
        grade = grade + 1; // CORRECT

    return 0;
}