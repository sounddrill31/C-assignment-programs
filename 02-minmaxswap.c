#include<stdio.h>
//Write function below
void min_max_swap(int *p1,int *p2,int *p3,int *p4,int *p5)
{
    int *min = p1,*max = p1, temp;
    if (*p2 < *min)
    {
        min = p2;
    }
    else if (*p2 > *max)
    {
        max = p2;    
    }

    if (*p3 < *min)
    {
        min = p3;
    }
    else if (*p3 > *max)
    {
        max = p3;    
    }

    if (*p4 < *min)
    {
        min = p4;
    }
    else if (*p4 > *max)
    {
        max = p4;    
    }
    if (*p5 < *min)
    {
        min = p5;
    }
    else if (*p5 > *max)
    {
        max = p5;    
    }


    temp = *min;
    *min = *max;
    *max = temp;
}
int main()
{
    int a,b,c,d,e;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    min_max_swap(&a,&b,&c,&d,&e);
    printf("%d %d %d %d %d",a,b,c,d,e);
}