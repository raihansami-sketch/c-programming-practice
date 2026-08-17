
#include <stdio.h>

int main() {
    int a, x, y;


    scanf("%d", &a);


    x = a / 4;
    y = a % 4;

    printf("Each pays %d taka\n", x);
    printf("Left over %d taka\n", y);

    return 0;
}
