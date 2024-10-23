#include <stdio.h>
int main(void)
{
    int n, sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum += i * (i + 1) / 2;
    }
    printf("%d",sum);
    return 0;
}