#include <stdio.h>
int main(void)
{
    int c,b,a;
    scanf("%d %d %d",&a,&b,&c);
    if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}