#include<stdio.h>
// Write solution code below
//Template Solution Function Code

void print_pattern(int n)
{
    // Complete this function definition

    int i=0,j=0;
    for(i = 1; i<=n; i++) //rows
    {
        for(j = i; j<0; j--)
        {
        printf("%d", j);
        }
        printf("\n");
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    print_pattern(n);
    return 0;
}
