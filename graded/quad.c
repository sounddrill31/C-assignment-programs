#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, b, c, x1, x2;
    printf("Enter values\n");
    scanf("%lf %lf %lf", &a, &b, &c);

    // problem
    x1 = ((-b + sqrt((b*b)-(4*a*c)))/(2 * a));
    x2 = ((-b - sqrt((b*b) - (4*a*c)))/(2*a));

    printf("%.2lf %.2lf", x1, x2);
}