#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter first number:");
    scanf("%d",&a);

    printf("Enter second number:");
    scanf("%d",&b);

    printf("Before Swap= %d %d\n",a,b);
    int temp=a;
     a=b;
     b=temp;
    printf("After Swap= %d %d " ,a,b);



    return 0;

}

