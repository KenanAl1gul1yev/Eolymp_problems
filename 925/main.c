#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3, l1, l2, l3, p;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3);
    l1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    l2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    l3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
    p = (l1 + l2 + l3) / 2;
    printf("%.4lf %.4lf", p * 2, sqrt(p * (p - l1) * (p - l2) * (p - l3)));
    return 0;
}
