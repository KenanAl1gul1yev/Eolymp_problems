#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    printf("%lld %lld", 2 * (a * b + b * c + a * c), a * b * c);
    return 0;
}
