#include <stdio.h>
#include <math.h>
int main(void)
{
    double a,b,c;
    a = 2, b = 3, c = 4;

    //semi-perimeter method
    double s, area;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("%.2lf\n", area);
}