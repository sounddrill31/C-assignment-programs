#include <stdio.h>

// Write code below
void rev_print(int n) {
    if (n <= 0) {
        return;
    }
    
    int value;
    scanf("%d", &value);
    
    rev_print(n - 1);
    
    printf("%d\n", value);
}


int main()
{
    int n;
    scanf("%d", &n);
    rev_print(n);
}