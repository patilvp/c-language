/*Write a C program to convert kilometers to miles*/

#include <stdio.h>

float main()
{
    float k,mile;
    printf("Enter a number which you want to convert into miles = ");
    scanf("%f",&k);
    mile= 0.621371*k;
    printf("%f kilometers  = %f mile",k,mile);
    return 0;
}
