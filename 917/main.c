#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, x, minima = 100;
    scanf("%lf", &n);
    for (int i = 0; i < n; i++){
        scanf("%lf", &x);
        if (x < minima) minima = x;
    }
    printf("%.2lf", minima * 2);
    return 0;
}
