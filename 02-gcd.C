#include <stdio.h>

// Write code below
int GCD(int x, int y)
{
    int s = x<y?x:y; // smaller number of the 2
    if(s!=0)
    {
        for(int i=s; i>0; i--)
        {
            if(x%i==0 && y % i == 0)
                {
                    return i;
                    break;
                }
        }
        
    }
    return 0;
}
int main() 
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d",GCD(a,b));
    return 0;
}