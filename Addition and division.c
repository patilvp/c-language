/*Write a C program to do arithmetical operations addition and division*/
#include<stdio.h>
void main()
{
    
    int a,b,sum;
    float division;
    printf("Enter two numbers a & b");
    scanf("%d %d",&a,&b);
    sum=a+b;
    division=a/b;
    printf("\n summation of %d & %d is = %d",a,b,sum);
    printf("\n division of %d & %d is = % .2f",a,b,division);
}