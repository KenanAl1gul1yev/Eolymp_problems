#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x;
    while (scanf("%lf", &x) != EOF){
        printf("%.4lf\n", pow(x, 3) + 2 * pow(x, 2) - 3);
    }
    return 0;
}
