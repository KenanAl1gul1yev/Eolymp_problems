#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x, y;
    scanf("%lf %lf", &x, &y);

    printf("%.3lf", 2 * x * x - 4 * x * y + 3 * y * y + (x + y) / 7);

    return 0;
}
