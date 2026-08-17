
#include <stdio.h>

int main() {
    char c;
    int position;
    printf("Enter Character:");

    scanf(" %c", &c);

    position = c - 'a' + 1;


    printf("%c is letter number %d\n", c, position);

    return 0;
}
