#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, d, f, p1, p2, s1, s2;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &f);
    p1 = (a + b + f) / 2;
    p2 = (c + d + f) / 2;
    s1 = sqrt(p1 * (p1 - a) * (p1 - b) * (p1 - f));
    s2 = sqrt(p2 * (p2 - c) * (p2 - d) * (p2 - f));
    printf("%.4lf\n", s1 + s2);
    return 0;
}
