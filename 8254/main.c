#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long n, m;
    scanf("%lld %lld", &n, &m);
    printf("%lld", (n - 1) * m * 3);
    return 0;
}
