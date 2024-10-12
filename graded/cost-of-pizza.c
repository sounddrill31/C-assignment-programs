#include <stdio.h>
int main(void)
{
    double diameter, costPerSqInch, costperTopping, totalCost;
    double pi = 3.14;
    int numToppings;

    diameter = 7.5, costPerSqInch = 10.5, numToppings = 3, costperTopping = 40.5;
    double Area = pi * (diameter/2) * (diameter/2);
    totalCost = (costPerSqInch * Area) + (costperTopping * numToppings);


    printf("%.2lf\n", totalCost);
    return 0;
}