
#include <stdio.h>

int main() {
    int s,hours,remainingSeconds,minutes,seconds;
    printf("Enter Second:");
    scanf("%d", &s);


    hours = s / 3600;

    remainingSeconds = s % 3600;

    minutes = remainingSeconds / 60;
    seconds = remainingSeconds % 60;


    printf("%d hour(s) %d minute(s) %d second(s)\n", hours, minutes, seconds);



    return 0;
}
