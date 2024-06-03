#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long x, y, z;
    scanf("%lld %lld %lld", &x, &y, &z);
    printf("%lld", x * y * z + x + y * y + z * z * z);
    return 0;
}
