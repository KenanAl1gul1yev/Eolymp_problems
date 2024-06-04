#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        printf("%lf\n", a + b + c);
    }
    return 0;
}
