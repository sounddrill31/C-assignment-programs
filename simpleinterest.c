#include <stdio.h>

int main(void)
{
    double p, r, t, si = 0;
    printf("Enter values\n");

    scanf("%lf %lf %lf", &p, &r, &t);
    si=(p*r*t)/100;
    printf("Simple Interest is %.2lf", si);
}