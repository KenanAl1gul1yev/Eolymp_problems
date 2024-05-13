#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, x, maks = -1;
    scanf("%lf", &n);
    for (int i = 0; i < n; i++){
        scanf("%lf", &x);
        if (x < 0) x *= -1;
        if (x > maks) maks = x;
    }
    printf("%.2lf", maks);
    return 0;
}
