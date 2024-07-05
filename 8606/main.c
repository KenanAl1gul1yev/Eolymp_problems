#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c, d;
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    printf("%.4lf\n%.4lf\n%.4lf", a + b, a + b + c, a + b + c + d);

    return 0;
}
