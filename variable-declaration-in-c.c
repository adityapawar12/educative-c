// VARIABLE DECLARATION IN C PROGRAMMING LANGAUAGE WE CAN SEE THAT WE NEED TO PROVIDE TYPE OF THE VARIABLE BEFORE IT'S DECLARATION.
// BECAUSE C IS A STATICALLY TYPED LANGAUGE.

#include <stdio.h>

int main()
{
    double a = 123.456;
    double b = 50.2;
    double c = 100.0;
    double d[] = {a, b, c};
    printf("a=%.3f, b=%.3f, c=%.3f, d=[%.3f, %.3f, %.3f]\n",
           a, b, c, d[0], d[1], d[2]);
    return 0;
}