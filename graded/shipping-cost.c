#include <stdio.h>
int main(void)
{   
    double weight, rate, cost;
    weight = 27.5;
    rate = 4.5;

    cost = weight * rate;
    printf("%.2lf\n", cost);

    return 0;
}