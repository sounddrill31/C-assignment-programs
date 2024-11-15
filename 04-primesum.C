#include <stdio.h>

//Write Code below
#include <stdbool.h>
bool is_prime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int prime_sum(int a, int b)
{
    int small = a<b?a:b, big = a>b?a:b, c = 0;
    for(int i = big; i>=small; i--)
    {
        if(is_prime(i))
            c+=i;
    }
    return c;
    
}
int main() 
{
    int p,q;
    scanf("%d",&p);
    scanf("%d",&q);
    printf("%d",prime_sum(p,q));
    return 0;
}