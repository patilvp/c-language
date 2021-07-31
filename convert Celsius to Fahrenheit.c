/*Write a C program to convert Celsius to Fahrenheit*/

#include <stdio.h>

float main()
{
    float C,F;
    printf("Enter a Celsius number which you want to convert into Fahrenheit = ");
    scanf("%f",&C);
    F= (C *9/5) + 32;
    printf("%.1f Celsius  = %.1f Fahrenheit",C,F);
    return 0;
}
