#include<stdio.h>
int main ()
{

 float a,b;

 printf("Enter Lenght:");
 scanf("%f",&a);
 printf("Enter Width:");
 scanf("%f",&b);

 float area = a*b;
 float perimeter = 2*(a+b);

 printf("Area = %f\nPerimeter = %f\n" ,area,perimeter);
 return 0;








}
