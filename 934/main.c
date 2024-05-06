#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, p, ha, hb, hc, s;
    scanf("%lf %lf %lf", &a, &b, &c);
    p = (a + b + c) / 2;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    ha = 2 * s / a;
    hb = 2 * s / b;
    hc = 2 * s / c;
    printf("%.2lf %.2lf %.2lf", ha, hb, hc);
    return 0;
}
