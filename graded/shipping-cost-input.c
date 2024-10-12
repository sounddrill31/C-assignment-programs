#include <stdio.h>
int main(void)
{   
    double weight, rate, cost;
    printf("Enter weight\n");
    scanf("%lf", &weight);
    printf("Enter rate\n");
    scanf("%lf", &rate);

    cost = weight * rate;
    printf("%.2lf\n", cost);

    return 0;
}