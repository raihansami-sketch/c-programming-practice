#include<stdio.h>
int main ()
{

 float r;

 printf("Enter Radius:");
 scanf("%f",&r);


float x = 3.1416;
 float area = x*(r*r) ;

 float circumference =  2*x*r;

 printf("Area = %f\nCircumference = %f\n",area,circumference);
return 0;
}

