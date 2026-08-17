#include <stdio.h>

int main() {
    int num, result;
    printf("Enter number:");

    scanf("%d", &num);

    result = ((num * 2 + 10) / 2) - num;

    printf("The answer is %d\n", result);

    return 0;
}

///When performing the mathematical steps,the original number always cancels out.Consequently,the final answer is always half of the number added in the second step.
///If 10 is changed to 30, the answer will be 15.
