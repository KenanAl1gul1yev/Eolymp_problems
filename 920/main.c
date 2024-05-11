#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double find_max(double a, double b){
    if (a >= b) return a;
    else return b;
}

double find_min(double a, double b, double c){
    if (a <= b && a <= c) return a;
    else if (b <= c && b <= a) return b;
    else return c;
}

int main()
{
    double x, y, z;
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("%.2lf\n", find_min(find_max(x, y), find_max(y, z), x + y + z));
    return 0;
}
