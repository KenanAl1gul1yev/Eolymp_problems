#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);

    printf("%.4lf %.4lf", x + y + z, x * y * z);

    return 0;
}
