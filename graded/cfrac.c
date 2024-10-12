#include <stdio.h>
int main() {
    double x;    
    // scanf("%lf", &x);
    x = 5;
    
    double cfrac = x+1/(x + (1/(x + 1/(x + 1/(x + 1/x)))));

    printf("%.2lf",cfrac);    //5.19
    return 0;
}