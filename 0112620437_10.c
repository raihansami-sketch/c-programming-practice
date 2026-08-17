#include<stdio.h>
int main()
{
 float c;
 printf("Enter Temperature in Celsius: ");
 scanf("%f",&c);




 float f = c*9/5+32;
 printf("Temperature in Farenheit  : %f\n",f);

 return 0;
}
