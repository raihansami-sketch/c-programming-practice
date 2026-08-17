#include<stdio.h>
int main()
{
 int a;
 printf("Enter First Number: ");
 scanf("%d",&a);

int b;
 printf("Enter Second Number: ");
 scanf("%d",&b);

 int c;
 printf("Enter Third Number: ");
 scanf("%d",&c);

 int sum =a+b+c;
 float average = sum/3.0;
 printf("Average : %2f\n",average);

 return 0;
}
