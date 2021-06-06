/*Write a C program to swap two variables*/
#include<stdio.h>
#include<math.h>
void main()
{
   int a,b;
   printf("enter two numbers\n");
   scanf("%d %d",&a,&b);
   printf("before swapping numbers are a= %d and b= %d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("After swapping numbers are a= %d and b= %d",a,b);
}
/*Write a C program to swap three variables
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("enter two numbers\n");
   scanf("%d %d",&a,&b);
   printf("before swapping numbers are a= %d and b= %d\n",a,b);
   c=a;
   a=b;
   b=c;
   printf("After swapping numbers are a= %d and b= %d",a,b);
} */

