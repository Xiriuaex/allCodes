#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1;
    double num2;

    printf("Enter first number:");
    scanf("%lf", &num1); // %lf for double in scanf
                         // %f for double in printf
    printf("Enter second number:");
    scanf("%lf", &num2);

    printf("Answer: %f\n", num1 + num2);
    return 0;
}