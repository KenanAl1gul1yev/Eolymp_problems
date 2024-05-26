#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x;
    scanf("%lf", &x);

    printf("%.3lf", x * x * x - 5 * x * x / 7 + 9 * x - 3 / x + 1);

    return 0;
}
