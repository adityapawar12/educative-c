#include <stdio.h>
#include <math.h>

void solveEquation(double *myInput, double *solutions)
{
    double a, b, c, x1, x2;
    a = myInput[0];
    b = myInput[1];
    c = myInput[2];

    // Write your code here and save the values in x1 and x2 variables
    x1 = (-b + sqrt((b * b) - (4 * a * c))) / (2 * a);
    x2 = (-b - sqrt((b * b) - (4 * a * c))) / (2 * a);

    solutions[0] = x1;
    solutions[1] = x2;
}

int main()
{
    double coefficients[3] = {1.2, 2.3, -3.4};
    double roots[2] = {0.0, 0.0};

    solveEquation(coefficients, roots);

    printf("Root 1: %.3f\n", roots[0]);
    printf("Root 2: %.3f\n", roots[1]);

    return 0;
}
