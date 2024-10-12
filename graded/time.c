#include <stdio.h>
int main(void)
{
    int timeInSeconds, hours, minutes, seconds;
    printf("Enter timeInSeconds\n");
   // scanf("%d", &timeInSeconds);
   timeInSeconds = 24000;

    //problem
    hours = 0, minutes = 0, seconds = 0;
    hours = timeInSeconds/3600; 
    minutes = (timeInSeconds % 3600) / 60;
    seconds = (timeInSeconds)%60;

    printf("%d hours, %d minutes and %d seconds\n", hours,minutes,seconds);
    return 0;
}