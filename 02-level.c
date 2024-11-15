// Write Solution below
#include <stdio.h>

int main(void)
{
    
    char level;
    int p;
    
    scanf("%c %d", &level, &p);
    
    if(level=='G')
        {
            printf("%.2lf", (p>=1000?(p * (20.00/100.00)):(p * (15.00/100.00))));
        }
    else if(level=='S')
        {
            printf("%.2lf", (p>=1000?(p * (10.00/100.00)):(p * (5.00/100.00))));
        }
    else if(level=='R')
        {
            printf("%.2lf", (p>=1000?(p * (3.00/100.00)):(p * (1.00/100.00))));
        }
    return 0;
}