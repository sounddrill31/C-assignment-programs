#include <stdio.h>
int main(void)
{
    int n,cookies=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int c;
        scanf("%d",&c);
        cookies+=c;
    }
    printf("%d",cookies);
    return 0;
}