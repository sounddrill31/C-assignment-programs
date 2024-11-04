#include <stdio.h>

// Write code below
int greatest(int a, int b, int c)
{
    if(a>b && a > c)
    {
        return a;
    }
    else if(b>c && b>a)
    {
        return b;
    }
    else if(c > a && c>b)
    {
        return c;
    }
    return 0;
}

int main() 
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    d = greatest(a, b, c);
    printf("%d", d);
}