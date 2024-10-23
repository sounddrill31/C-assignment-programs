#include <stdio.h>
int main(void)
{
    int n, rev=0, temp;
    scanf("%d", &n);
    temp = n;
    while(temp != 0)
    {
        rev = (rev * 10) + (temp % 10);
        temp = temp/10;
    }
    if (rev != n)
    {
        printf("%d is not a palindrome number",n);
    }
    else
    {
        printf("%d is a palindrome number",n);
    }
}
