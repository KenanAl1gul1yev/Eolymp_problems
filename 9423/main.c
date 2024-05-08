#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, k, y, a, c;
    scanf("%lf %lf", &x, &k);
    c = sqrt(fabs(x));
    a = pow(c, 4) + pow(k, 3);
    y = pow(log(a) / log(10), 3) + pow(cos(x), 5);
    printf("%.2lf", y);
    return 0;
}
