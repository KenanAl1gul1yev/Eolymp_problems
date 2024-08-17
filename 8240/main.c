#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    while (scanf("%lf", &x) != EOF) printf("%.4lf\n", sqrt(x) + 2 * x + sin(x));
    return 0;
}
