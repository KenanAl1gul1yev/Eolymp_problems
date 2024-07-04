#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, a, b, c, d;
    scanf("%d", &n);
    a = (n / 1000) * (n / 1000);
    b = (n / 100 % 10) * (n / 100 % 10);
    c = (n / 10 % 10) * (n / 10 % 10);
    d = (n % 10) * (n % 10);
    printf("%d", a + b + c + d);
    return 0;
}
