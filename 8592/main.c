#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    scanf("%lf", &x);
    printf("%.4lf", x + sin(x));
    return 0;
}
