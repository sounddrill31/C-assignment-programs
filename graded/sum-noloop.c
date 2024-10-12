#include <stdio.h>
int main(void)
{
    int num;
    num = 5426;

    int sum=0;
    sum = (num%10) + ((num/10)%10) + ((num/100)%10) + ((num/1000)%10);

    printf("%d\n", sum);
}