#include <stdio.h>

double degF_to_degC(double degF)
{
    double degC;
    // Write your code below and put your conversion
    // in degC
    degC = (degF - 32.0) / 1.8;

    return degC;
}

int main()
{
    const double fahrenheit = 27.0;

    const double fahrenheitToDegree = degF_to_degC(fahrenheit);

    printf(" \nfahrenheit value is : %.3f \n", fahrenheit);
    printf(" \nfahrenheit to Celcius value is : %.3f \n", fahrenheitToDegree);
}
