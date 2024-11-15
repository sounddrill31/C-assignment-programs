#include <stdio.h>

// Write code below
int series_sum(int n)
{
    int sum=0, t=0;
    for(int i = 1; i<=n;i++)
    {
        t+=i;
        sum+=t;
    }
    return sum;
}

int main() 
{
    int n;
    scanf("%d",&n);
    printf("%d", series_sum(n));
    return 0;
}