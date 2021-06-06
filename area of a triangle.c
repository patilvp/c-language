/*Write a C progrm to find the area of a triangle*/
#include<stdio.h>
#include<math.h>
void main()
{
    char c;
    float a,b,h,s,m,n,p,area_of_triangle;
    printf("Enter h for calculation of area of triangle for base & height");
    printf("\nEnter s for calculation of area of triangle for all sides \n");
    scanf("%c",&c);
    if (c=='h')
        {   
            printf("\n enter height and width");
            scanf("%f %f",&b,&h);
            area_of_triangle=(b*h)/2;
            printf("Area of traingle is= %f",area_of_triangle);
        }
    else if(c=='s')
        {
            printf("\n enter 3 sides");
            scanf("%f %f %f",&m,&n,&p);
            a=(m+n+p)/2;
            area_of_triangle=sqrt(a*(a-m)*(a-n)*(a-p));
            printf("Area of traingle is= %f",area_of_triangle);
        }
    else
        {
            printf("invalid input");
        }
}




/*Write a C progrm to find the area of a triangle using function
#include<stdio.h>
#include<math.h>
float area_of_triangle_2sides();                //function declaration
float area_of_triangle_3sides();                //function declaration
void main()
    {
         int i;
         float area_of_triangle,area;
         printf("Enter 2 for two sides\nEnter 3 for three sides ");
         scanf("%d",&i);
         if(i==2)
         {
             area= area_of_triangle_2sides ();         //function call
         }
         else if (i==3)
         {
            area= area_of_triangle_3sides ();         //function call   
         }
         else
         {
             printf("Invalid input");
         }
         printf("area of triangle =%f",area);
    }

float area_of_triangle_2sides ()                    //function definition  
    {
        float b,h,a;
        printf("enter 2 values");
        scanf("%f %f",&b,&h);
        a=(b*h)/2;
        return(a);
    }
float area_of_triangle_3sides ()                    //function definition  
    {
        float s,m,n,p,a;
        printf("enter 3 values");
        scanf("%f %f %f",&m,&n,&p);
        s=(m+n+p)/2;
        a=sqrt(s*(s-m)*(s-n)*(s-p));
        return(a);
    } */