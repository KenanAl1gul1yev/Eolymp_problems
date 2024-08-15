#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x, y;
    while (scanf("%lf %lf", &x, &y) != EOF) printf("%.4lf\n", pow(x, 2) + sin(x * y) - pow(y, 2));
    return 0;
}
