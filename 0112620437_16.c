#include <stdio.h>

int main() {
    char small, capital;

    printf("Enter Small:");
    scanf(" %c", &small);

    printf("Enter Capital:");
    scanf(" %c", &capital);


    printf("%c becomes %c\n", small, small - 32);
    printf("%c becomes %c\n", capital, capital + 32);

    return 0;
}
