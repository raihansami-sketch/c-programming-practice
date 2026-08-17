#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number:");
    scanf("%d",&num);

    int a = num%10;
    int c = num/10;
    int b = c%10;
    int d = num/100;
    printf("Reversed = %d%d%d " ,a,b,d);

    return 0;





    }
