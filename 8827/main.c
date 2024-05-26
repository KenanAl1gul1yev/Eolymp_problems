#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    scanf("%lf", &x);

    double y = (x * x + 3 * x - 4) / (2 * x  - 3) - (x + 2) / (x * x - 5 * x + 7);

    printf("%.3lf", y);

    return 0;
}
