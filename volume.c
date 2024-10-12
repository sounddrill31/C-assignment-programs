#include <stdio.h>

int main(void)
{
    double pi = 3.14, radius, volume = 0;
    printf("Enter radius\n");
    scanf("%lf", &radius);
    volume = (4.0/3.0) * pi * (radius * radius * radius);
    printf("Volume of sphere is %.2lf", volume);
}