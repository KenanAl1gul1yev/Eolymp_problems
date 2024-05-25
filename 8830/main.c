#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    scanf("%lf", &x);

    double y  = sqrt(x *x *x * x + 1) / (x * x) - sqrt((x * x ) / (x * x + 1));
    printf("%.3lf", y);

    return 0;
}
