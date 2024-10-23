#include <stdio.h>
int main(void)
{
    float p,q;
    scanf("%f %f",&p,&q);
    if(p>0 && q>0)
    {
        printf("First");
    }
    else if(p<0 && q>0)
    {
        printf("Second");
    }
    else if(p<0 && q<0)
    {
        printf("Third");
    }
    else if(p>0 && q<0)
    {
        printf("Fourth");
    }
    else if(p==0 && q!=0)
    {
        printf("y-axis");
    }
    else if(p!=0 && q==0)
    {
        printf("x-axis");
    }
    else
    {
        printf("Origin");
    }
}