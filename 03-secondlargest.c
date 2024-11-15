#include<stdio.h>
//Write function below
void second_largest(int *a, int *b, int *c, int *d, int *e, int *res)
{
    int largest = 0, second_largest = 0, arr[5]={*a, *b, *c, *d, *e};
    //second_largest = largest = arr[0];
    
    for(int i=0; i<5; i++)
    {
    if (arr[i]>largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
    else if(arr[i] > second_largest)
        second_largest = arr[i];
    }
    *res = second_largest;
}
int main()
{
    int a,b,c,d,e,res;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    second_largest(&a,&b,&c,&d,&e,&res);
    printf("%d",res);
}