#include<stdio.h>
int main ()
{
    ///x
int x;
printf("Enter your Number_1: ");
scanf("%d",&x);

///y
int y;
printf("Enter your Number_2: ");
scanf("%d",&y);

int sum = x+y;
int sub = x-y;
int mal = x*y;
int div = x/y;
int mod = x%y;


///output

printf("Sum= %d\n",sum);
printf("Difference= %d\n",sub);
printf("Product= %d\n",mal);
printf("Quotient= %d\n",div);
printf("Remainder= %d\n",mod);


return 0;
}


