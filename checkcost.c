#include <stdio.h>
int main(void)
{
    double weight, cost;
    int zone;
    scanf("%lf %d", &weight, &zone);
    if (weight < 0 || zone < 1 || zone > 7)
    {
        printf("Invalid Input");
    }
    else
    {
        switch (zone)
        {
        case 1:
            cost = weight * 5;
            break;
        case 2:
            cost = weight * 7;
            break;
        case 3:
            cost = weight * 10;
            break;
        case 4:
            cost = weight * 12;
            break;
        case 5:
            cost = weight * 16;
            break;
        case 6:
            cost = weight * 17;
            break;
        case 7:
            cost = weight * 19;
            break;
        }
        printf("%.2lf", cost);
    }
    return 0;
}