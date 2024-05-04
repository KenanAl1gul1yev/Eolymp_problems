#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    double z = n / 100 + n / 10 % 10 + n % 10;
    printf("%.3lf", sqrt(z));
    return 0;
}
