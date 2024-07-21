#include <stdio.h>
#include <stdlib.h>

int main()
{
    double n, sum = 0;
    scanf("%lf", &n);

    for (double i = 1; i <= n; i++){
        sum += 1 / (i * (i + 1));
    }
    printf("%.6lf", sum);
    return 0;
}
